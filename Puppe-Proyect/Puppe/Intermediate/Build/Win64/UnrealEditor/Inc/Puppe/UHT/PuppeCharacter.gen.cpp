// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puppe/PuppeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuppeCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PUPPE_API UClass* Z_Construct_UClass_APuppeCharacter();
PUPPE_API UClass* Z_Construct_UClass_APuppeCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Puppe();
// End Cross Module References

// Begin Class APuppeCharacter Function CharacterDead
struct Z_Construct_UFunction_APuppeCharacter_CharacterDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuppeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuppeCharacter_CharacterDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuppeCharacter, nullptr, "CharacterDead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuppeCharacter_CharacterDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuppeCharacter_CharacterDead_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APuppeCharacter_CharacterDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuppeCharacter_CharacterDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APuppeCharacter::execCharacterDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CharacterDead();
	P_NATIVE_END;
}
// End Class APuppeCharacter Function CharacterDead

// Begin Class APuppeCharacter Function SetIsOnLadder
struct Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics
{
	struct PuppeCharacter_eventSetIsOnLadder_Parms
	{
		bool IsOnladder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuppeCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsOnladder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOnladder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::NewProp_IsOnladder_SetBit(void* Obj)
{
	((PuppeCharacter_eventSetIsOnLadder_Parms*)Obj)->IsOnladder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::NewProp_IsOnladder = { "IsOnladder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PuppeCharacter_eventSetIsOnLadder_Parms), &Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::NewProp_IsOnladder_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::NewProp_IsOnladder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuppeCharacter, nullptr, "SetIsOnLadder", nullptr, nullptr, Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::PuppeCharacter_eventSetIsOnLadder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::PuppeCharacter_eventSetIsOnLadder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APuppeCharacter::execSetIsOnLadder)
{
	P_GET_UBOOL(Z_Param_IsOnladder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsOnLadder(Z_Param_IsOnladder);
	P_NATIVE_END;
}
// End Class APuppeCharacter Function SetIsOnLadder

// Begin Class APuppeCharacter Function SetIsOnRope
struct Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics
{
	struct PuppeCharacter_eventSetIsOnRope_Parms
	{
		bool IsOnRope;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuppeCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsOnRope_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOnRope;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::NewProp_IsOnRope_SetBit(void* Obj)
{
	((PuppeCharacter_eventSetIsOnRope_Parms*)Obj)->IsOnRope = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::NewProp_IsOnRope = { "IsOnRope", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PuppeCharacter_eventSetIsOnRope_Parms), &Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::NewProp_IsOnRope_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::NewProp_IsOnRope,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuppeCharacter, nullptr, "SetIsOnRope", nullptr, nullptr, Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::PropPointers), sizeof(Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::PuppeCharacter_eventSetIsOnRope_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::Function_MetaDataParams), Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::PuppeCharacter_eventSetIsOnRope_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APuppeCharacter_SetIsOnRope()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APuppeCharacter_SetIsOnRope_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APuppeCharacter::execSetIsOnRope)
{
	P_GET_UBOOL(Z_Param_IsOnRope);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsOnRope(Z_Param_IsOnRope);
	P_NATIVE_END;
}
// End Class APuppeCharacter Function SetIsOnRope

// Begin Class APuppeCharacter
void APuppeCharacter::StaticRegisterNativesAPuppeCharacter()
{
	UClass* Class = APuppeCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CharacterDead", &APuppeCharacter::execCharacterDead },
		{ "SetIsOnLadder", &APuppeCharacter::execSetIsOnLadder },
		{ "SetIsOnRope", &APuppeCharacter::execSetIsOnRope },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuppeCharacter);
UClass* Z_Construct_UClass_APuppeCharacter_NoRegister()
{
	return APuppeCharacter::StaticClass();
}
struct Z_Construct_UClass_APuppeCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PuppeCharacter.h" },
		{ "ModuleRelativePath", "PuppeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PuppeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PuppeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "PuppeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "PuppeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "PuppeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "PuppeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPushing_MetaData[] = {
		{ "Category", "PuppeCharacter" },
		{ "ModuleRelativePath", "PuppeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWalkingOnBeam_MetaData[] = {
		{ "Category", "PuppeCharacter" },
		{ "ModuleRelativePath", "PuppeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOnRope_MetaData[] = {
		{ "Category", "PuppeCharacter" },
		{ "ModuleRelativePath", "PuppeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFallingDeadVel_MetaData[] = {
		{ "Category", "PuppeCharacter" },
		{ "ModuleRelativePath", "PuppeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBalanceVelocity_MetaData[] = {
		{ "Category", "PuppeCharacter" },
		{ "ModuleRelativePath", "PuppeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBalanceRotationZRate_MetaData[] = {
		{ "Category", "PuppeCharacter" },
		{ "ModuleRelativePath", "PuppeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static void NewProp_IsPushing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPushing;
	static void NewProp_bIsWalkingOnBeam_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWalkingOnBeam;
	static void NewProp_bIsOnRope_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOnRope;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFallingDeadVel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBalanceVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBalanceRotationZRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APuppeCharacter_CharacterDead, "CharacterDead" }, // 884807901
		{ &Z_Construct_UFunction_APuppeCharacter_SetIsOnLadder, "SetIsOnLadder" }, // 1003371893
		{ &Z_Construct_UFunction_APuppeCharacter_SetIsOnRope, "SetIsOnRope" }, // 4292204981
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuppeCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuppeCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuppeCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuppeCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuppeCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuppeCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuppeCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuppeCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuppeCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuppeCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuppeCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuppeCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuppeCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
void Z_Construct_UClass_APuppeCharacter_Statics::NewProp_IsPushing_SetBit(void* Obj)
{
	((APuppeCharacter*)Obj)->IsPushing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APuppeCharacter_Statics::NewProp_IsPushing = { "IsPushing", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APuppeCharacter), &Z_Construct_UClass_APuppeCharacter_Statics::NewProp_IsPushing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPushing_MetaData), NewProp_IsPushing_MetaData) };
void Z_Construct_UClass_APuppeCharacter_Statics::NewProp_bIsWalkingOnBeam_SetBit(void* Obj)
{
	((APuppeCharacter*)Obj)->bIsWalkingOnBeam = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APuppeCharacter_Statics::NewProp_bIsWalkingOnBeam = { "bIsWalkingOnBeam", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APuppeCharacter), &Z_Construct_UClass_APuppeCharacter_Statics::NewProp_bIsWalkingOnBeam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWalkingOnBeam_MetaData), NewProp_bIsWalkingOnBeam_MetaData) };
void Z_Construct_UClass_APuppeCharacter_Statics::NewProp_bIsOnRope_SetBit(void* Obj)
{
	((APuppeCharacter*)Obj)->bIsOnRope = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APuppeCharacter_Statics::NewProp_bIsOnRope = { "bIsOnRope", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APuppeCharacter), &Z_Construct_UClass_APuppeCharacter_Statics::NewProp_bIsOnRope_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOnRope_MetaData), NewProp_bIsOnRope_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APuppeCharacter_Statics::NewProp_MaxFallingDeadVel = { "MaxFallingDeadVel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuppeCharacter, MaxFallingDeadVel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFallingDeadVel_MetaData), NewProp_MaxFallingDeadVel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APuppeCharacter_Statics::NewProp_MaxBalanceVelocity = { "MaxBalanceVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuppeCharacter, MaxBalanceVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBalanceVelocity_MetaData), NewProp_MaxBalanceVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APuppeCharacter_Statics::NewProp_MaxBalanceRotationZRate = { "MaxBalanceRotationZRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuppeCharacter, MaxBalanceRotationZRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBalanceRotationZRate_MetaData), NewProp_MaxBalanceRotationZRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuppeCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuppeCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuppeCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuppeCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuppeCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuppeCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuppeCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuppeCharacter_Statics::NewProp_IsPushing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuppeCharacter_Statics::NewProp_bIsWalkingOnBeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuppeCharacter_Statics::NewProp_bIsOnRope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuppeCharacter_Statics::NewProp_MaxFallingDeadVel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuppeCharacter_Statics::NewProp_MaxBalanceVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuppeCharacter_Statics::NewProp_MaxBalanceRotationZRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuppeCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APuppeCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Puppe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuppeCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APuppeCharacter_Statics::ClassParams = {
	&APuppeCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APuppeCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APuppeCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuppeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APuppeCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APuppeCharacter()
{
	if (!Z_Registration_Info_UClass_APuppeCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuppeCharacter.OuterSingleton, Z_Construct_UClass_APuppeCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APuppeCharacter.OuterSingleton;
}
template<> PUPPE_API UClass* StaticClass<APuppeCharacter>()
{
	return APuppeCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APuppeCharacter);
APuppeCharacter::~APuppeCharacter() {}
// End Class APuppeCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_PuppeCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APuppeCharacter, APuppeCharacter::StaticClass, TEXT("APuppeCharacter"), &Z_Registration_Info_UClass_APuppeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuppeCharacter), 1658709909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_PuppeCharacter_h_1013285591(TEXT("/Script/Puppe"),
	Z_CompiledInDeferFile_FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_PuppeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_PuppeCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
