// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WINDOWSGAMINGINPUT_WindowsGamingInputBPLibrary_generated_h
#error "WindowsGamingInputBPLibrary.generated.h already included, missing '#pragma once' in WindowsGamingInputBPLibrary.h"
#endif
#define WINDOWSGAMINGINPUT_WindowsGamingInputBPLibrary_generated_h

#define S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompatibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsGamingInputBPLibrary::Compatibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyVibration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LeftTrigger); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RightTrigger); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LeftMotor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RightMotor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsGamingInputBPLibrary::ApplyVibration(Z_Param_LeftTrigger,Z_Param_RightTrigger,Z_Param_LeftMotor,Z_Param_RightMotor); \
		P_NATIVE_END; \
	}


#define S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompatibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsGamingInputBPLibrary::Compatibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyVibration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LeftTrigger); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RightTrigger); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LeftMotor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RightMotor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsGamingInputBPLibrary::ApplyVibration(Z_Param_LeftTrigger,Z_Param_RightTrigger,Z_Param_LeftMotor,Z_Param_RightMotor); \
		P_NATIVE_END; \
	}


#define S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWindowsGamingInputBPLibrary(); \
	friend struct Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UWindowsGamingInputBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WindowsGamingInput"), NO_API) \
	DECLARE_SERIALIZER(UWindowsGamingInputBPLibrary)


#define S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUWindowsGamingInputBPLibrary(); \
	friend struct Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UWindowsGamingInputBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WindowsGamingInput"), NO_API) \
	DECLARE_SERIALIZER(UWindowsGamingInputBPLibrary)


#define S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsGamingInputBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsGamingInputBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsGamingInputBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsGamingInputBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowsGamingInputBPLibrary(UWindowsGamingInputBPLibrary&&); \
	NO_API UWindowsGamingInputBPLibrary(const UWindowsGamingInputBPLibrary&); \
public:


#define S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsGamingInputBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowsGamingInputBPLibrary(UWindowsGamingInputBPLibrary&&); \
	NO_API UWindowsGamingInputBPLibrary(const UWindowsGamingInputBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsGamingInputBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsGamingInputBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsGamingInputBPLibrary)


#define S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_26_PROLOG
#define S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_RPC_WRAPPERS \
	S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_INCLASS \
	S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
	S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WindowsGamingInputBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINDOWSGAMINGINPUT_API UClass* StaticClass<class UWindowsGamingInputBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID S__tech_Coding_software_Experiments_and_fun_XBONE_Controller_UE4_Plugin_Out_WindowsGamingInput_HostProject_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
