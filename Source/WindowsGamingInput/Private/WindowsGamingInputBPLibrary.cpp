// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "WindowsGamingInputBPLibrary.h"
#include "WindowsGamingInput.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#define NOMINMAX
// Windows Header Files
#include <windows.h>

// reference additional headers your program requires here

#include <tchar.h>
#include <assert.h>
#include <cstdint>
#include <iostream>
#include <roapi.h>
#include "wrl.h"
#include <algorithm>

#include <windows.gaming.input.h>
#pragma comment(lib, "runtimeobject.lib")

#define MAX_PLAYER_COUNT 8 //This limit can probably be raised

using namespace ABI::Windows::Foundation::Collections;
using namespace ABI::Windows::Gaming::Input;
using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;

const float c_XboxOneThumbDeadZone = .24f;  // Recommended Xbox One controller deadzone

ComPtr<IGamepadStatics> gamepadStatics;
ComPtr<IGamepad> gamepads[MAX_PLAYER_COUNT];
EventRegistrationToken mUserChangeToken[MAX_PLAYER_COUNT];

EventRegistrationToken gAddedToken;
EventRegistrationToken gRemovedToken;

int mMostRecentGamepad = 0;

HRESULT hr;


/*
	Gamepad scanning and gamepad related methods
	Copyright (c) 2012-2019 Microsoft Corp
*/
#pragma region Stuff from GamePad.cpp

// DeadZone enum
enum DeadZone
{
	DEAD_ZONE_INDEPENDENT_AXES = 0,
	DEAD_ZONE_CIRCULAR,
	DEAD_ZONE_NONE,
};

float ApplyLinearDeadZone(float value, float maxValue, float deadZoneSize)
{
	if (value < -deadZoneSize)
	{
		// Increase negative values to remove the deadzone discontinuity.
		value += deadZoneSize;
	}
	else if (value > deadZoneSize)
	{
		// Decrease positive values to remove the deadzone discontinuity.
		value -= deadZoneSize;
	}
	else
	{
		// Values inside the deadzone come out zero.
		return 0;
	}

	// Scale into 0-1 range.
	float scaledValue = value / (maxValue - deadZoneSize);
	return std::max(-1.f, std::min(scaledValue, 1.f));
}

// Applies DeadZone to thumbstick positions
void ApplyStickDeadZone(float x, float y, DeadZone deadZoneMode, float maxValue, float deadZoneSize, _Out_ float& resultX, _Out_ float& resultY)
{
	switch (deadZoneMode)
	{
	case DEAD_ZONE_INDEPENDENT_AXES:
		resultX = ApplyLinearDeadZone(x, maxValue, deadZoneSize);
		resultY = ApplyLinearDeadZone(y, maxValue, deadZoneSize);
		break;

	case DEAD_ZONE_CIRCULAR:
	{
		float dist = sqrtf(x * x + y * y);
		float wanted = ApplyLinearDeadZone(dist, maxValue, deadZoneSize);

		float scale = (wanted > 0.f) ? (wanted / dist) : 0.f;

		resultX = std::max(-1.f, std::min(x * scale, 1.f));
		resultY = std::max(-1.f, std::min(y * scale, 1.f));
	}
	break;

	default: // GamePad::DEAD_ZONE_NONE
		resultX = ApplyLinearDeadZone(x, maxValue, 0);
		resultY = ApplyLinearDeadZone(y, maxValue, 0);
		break;
	}
}

// UserChanged Event
static HRESULT UserChanged(ABI::Windows::Gaming::Input::IGameController*, ABI::Windows::System::IUserChangedEventArgs*)
{
	return S_OK;
}

// Scans for gamepads (adds/removes gamepads from gamepads array)
void ScanGamePads()
{
	ComPtr<IVectorView<Gamepad*>> pads;
	hr = gamepadStatics->get_Gamepads(&pads);
	assert(SUCCEEDED(hr));

	unsigned int count = 0;
	hr = pads->get_Size(&count);
	assert(SUCCEEDED(hr));

	// Check for removed gamepads
	for (size_t j = 0; j < MAX_PLAYER_COUNT; ++j)
	{
		if (gamepads[j])
		{
			unsigned int k = 0;
			for (; k < count; ++k)
			{
				ComPtr<IGamepad> pad;
				HRESULT hr = pads->GetAt(k, pad.GetAddressOf());
				if (SUCCEEDED(hr) && (pad == gamepads[j]))
				{
					break;
				}
			}

			if (k >= count)
			{
				ComPtr<IGameController> ctrl;
				HRESULT hr = gamepads[j].As(&ctrl);
				if (SUCCEEDED(hr) && ctrl)
				{
					(void)ctrl->remove_UserChanged(mUserChangeToken[j]);
					mUserChangeToken[j].value = 0;
				}

				gamepads[j].Reset();
			}
		}
	}

	// Check for added gamepads
	for (unsigned int j = 0; j < count; ++j)
	{
		ComPtr<IGamepad> pad;
		hr = pads->GetAt(j, pad.GetAddressOf());
		if (SUCCEEDED(hr))
		{
			size_t empty = MAX_PLAYER_COUNT;
			size_t k = 0;
			for (; k < MAX_PLAYER_COUNT; ++k)
			{
				if (gamepads[k] == pad)
				{
					if (j == (count - 1))
						mMostRecentGamepad = static_cast<int>(k);
					break;
				}
				else if (!gamepads[k])
				{
					if (empty >= MAX_PLAYER_COUNT)
						empty = k;
				}
			}

			if (k >= MAX_PLAYER_COUNT)
			{
				// Silently ignore "extra" gamepads as there's no hard limit
				if (empty < MAX_PLAYER_COUNT)
				{
					gamepads[empty] = pad;
					if (j == (count - 1))
						mMostRecentGamepad = static_cast<int>(empty);

					ComPtr<IGameController> ctrl;
					hr = pad.As(&ctrl);
					if (SUCCEEDED(hr) && ctrl)
					{
						typedef __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs UserHandler;
						hr = ctrl->add_UserChanged(Callback<UserHandler>(UserChanged).Get(), &mUserChangeToken[empty]);
						assert(SUCCEEDED(hr));
					}
				}
			}
		}
	}
}

// GamepadAdded Event
static HRESULT GamepadAdded(IInspectable*, ABI::Windows::Gaming::Input::IGamepad*)
{
	ScanGamePads();
	return S_OK;
}

// GamepadRemoved Event
static HRESULT GamepadRemoved(IInspectable*, ABI::Windows::Gaming::Input::IGamepad*)
{
	ScanGamePads();
	return S_OK;
}
#pragma endregion

/*
	Thanks to CookiePLMonster for suggesting this.
*/
#pragma region InitOnceExecuteOnce

// Global variable for one-time initialization structure
INIT_ONCE g_InitOnce = INIT_ONCE_STATIC_INIT; // Static initialization

// Initialization callback function 
BOOL CALLBACK InitHandleFunction(
	PINIT_ONCE InitOnce,
	PVOID Parameter,
	PVOID * lpContext);

// Returns a handle to an event object that is created only once
HANDLE InitializeGamepad()
{
	PVOID lpContext;
	BOOL  bStatus;

	// Execute the initialization callback function 
	bStatus = InitOnceExecuteOnce(&g_InitOnce,          // One-time initialization structure
		InitHandleFunction,   // Pointer to initialization callback function
		NULL,                 // Optional parameter to callback function (not used)
		&lpContext);          // Receives pointer to event object stored in g_InitOnce

// InitOnceExecuteOnce function succeeded. Return event object.
	if (bStatus)
	{
		return (HANDLE)lpContext;
	}
	else
	{
		return (INVALID_HANDLE_VALUE);
	}
}

// Initialization callback function that creates the event object 
BOOL CALLBACK InitHandleFunction(
	PINIT_ONCE InitOnce,        // Pointer to one-time initialization structure        
	PVOID Parameter,            // Optional parameter passed by InitOnceExecuteOnce            
	PVOID * lpContext)           // Receives pointer to event object           
{
	hr = RoInitialize(RO_INIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	hr = RoGetActivationFactory(HStringReference(L"Windows.Gaming.Input.Gamepad").Get(), __uuidof(IGamepadStatics), &gamepadStatics);
	assert(SUCCEEDED(hr));

	typedef __FIEventHandler_1_Windows__CGaming__CInput__CGamepad AddedHandler;
	hr = gamepadStatics->add_GamepadAdded(Callback<AddedHandler>(GamepadAdded).Get(), &gAddedToken);
	assert(SUCCEEDED(hr));

	typedef __FIEventHandler_1_Windows__CGaming__CInput__CGamepad RemovedHandler;
	hr = gamepadStatics->add_GamepadRemoved(Callback<RemovedHandler>(GamepadRemoved).Get(), &gRemovedToken);
	assert(SUCCEEDED(hr));

	ScanGamePads();

	return TRUE;
}

#pragma endregion

UWindowsGamingInputBPLibrary::UWindowsGamingInputBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

	InitializeGamepad();
}

bool UWindowsGamingInputBPLibrary::ApplyVibration(int ControllerIndex, float LeftTrigger, float RightTrigger, float LeftMotor, float RightMotor)
{
	if (gamepads[ControllerIndex] != NULL) {
		GamepadVibration vibration;
		vibration.LeftTrigger = LeftTrigger;
		vibration.RightTrigger = RightTrigger;
		vibration.LeftMotor = LeftMotor;
		vibration.RightMotor = RightMotor;
		gamepads[ControllerIndex]->put_Vibration(vibration);
		return true;
	}
	else {
		return false;
	}
}

bool UWindowsGamingInputBPLibrary::Compatibility() {
	OSVERSIONINFOEX info;
	ZeroMemory(&info, sizeof(OSVERSIONINFOEX));
	info.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
	GetVersionEx((LPOSVERSIONINFO)& info);

	if (info.dwMajorVersion >= 10) {
		return true;
	}
	else {
		return false;
	}
}


