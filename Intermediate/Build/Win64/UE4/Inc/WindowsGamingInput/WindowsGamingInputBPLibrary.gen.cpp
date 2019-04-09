// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsGamingInput/Public/WindowsGamingInputBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsGamingInputBPLibrary() {}
// Cross Module References
	WINDOWSGAMINGINPUT_API UClass* Z_Construct_UClass_UWindowsGamingInputBPLibrary_NoRegister();
	WINDOWSGAMINGINPUT_API UClass* Z_Construct_UClass_UWindowsGamingInputBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WindowsGamingInput();
	WINDOWSGAMINGINPUT_API UFunction* Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration();
	WINDOWSGAMINGINPUT_API UFunction* Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility();
// End Cross Module References
	void UWindowsGamingInputBPLibrary::StaticRegisterNativesUWindowsGamingInputBPLibrary()
	{
		UClass* Class = UWindowsGamingInputBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyVibration", &UWindowsGamingInputBPLibrary::execApplyVibration },
			{ "Compatibility", &UWindowsGamingInputBPLibrary::execCompatibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics
	{
		struct WindowsGamingInputBPLibrary_eventApplyVibration_Parms
		{
			float LeftTrigger;
			float RightTrigger;
			float LeftMotor;
			float RightMotor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightMotor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftMotor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightTrigger;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WindowsGamingInputBPLibrary_eventApplyVibration_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsGamingInputBPLibrary_eventApplyVibration_Parms), &Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_RightMotor = { "RightMotor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsGamingInputBPLibrary_eventApplyVibration_Parms, RightMotor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_LeftMotor = { "LeftMotor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsGamingInputBPLibrary_eventApplyVibration_Parms, LeftMotor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_RightTrigger = { "RightTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsGamingInputBPLibrary_eventApplyVibration_Parms, RightTrigger), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_LeftTrigger = { "LeftTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsGamingInputBPLibrary_eventApplyVibration_Parms, LeftTrigger), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_RightMotor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_LeftMotor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_RightTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_LeftTrigger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "WindowsGamingInput" },
		{ "DisplayName", "Apply vibration" },
		{ "Keywords", "vibration impulse triggers" },
		{ "ModuleRelativePath", "Public/WindowsGamingInputBPLibrary.h" },
		{ "ToolTip", "Applies vibration to controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsGamingInputBPLibrary, nullptr, "ApplyVibration", sizeof(WindowsGamingInputBPLibrary_eventApplyVibration_Parms), Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics
	{
		struct WindowsGamingInputBPLibrary_eventCompatibility_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WindowsGamingInputBPLibrary_eventCompatibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsGamingInputBPLibrary_eventCompatibility_Parms), &Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "WindowsGamingInput" },
		{ "DisplayName", "Compatibility Check" },
		{ "Keywords", "check windows version" },
		{ "ModuleRelativePath", "Public/WindowsGamingInputBPLibrary.h" },
		{ "ToolTip", "Checks Windows version for compatibility" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsGamingInputBPLibrary, nullptr, "Compatibility", sizeof(WindowsGamingInputBPLibrary_eventCompatibility_Parms), Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWindowsGamingInputBPLibrary_NoRegister()
	{
		return UWindowsGamingInputBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WindowsGamingInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration, "ApplyVibration" }, // 1939157440
		{ &Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility, "Compatibility" }, // 150717704
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WindowsGamingInputBPLibrary.h" },
		{ "ModuleRelativePath", "Public/WindowsGamingInputBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsGamingInputBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::ClassParams = {
		&UWindowsGamingInputBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindowsGamingInputBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWindowsGamingInputBPLibrary, 3576143364);
	template<> WINDOWSGAMINGINPUT_API UClass* StaticClass<UWindowsGamingInputBPLibrary>()
	{
		return UWindowsGamingInputBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindowsGamingInputBPLibrary(Z_Construct_UClass_UWindowsGamingInputBPLibrary, &UWindowsGamingInputBPLibrary::StaticClass, TEXT("/Script/WindowsGamingInput"), TEXT("UWindowsGamingInputBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsGamingInputBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
