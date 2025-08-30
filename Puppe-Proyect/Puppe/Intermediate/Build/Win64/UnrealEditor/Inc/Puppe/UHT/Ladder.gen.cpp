// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puppe/Ladder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLadder() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
PUPPE_API UClass* Z_Construct_UClass_ALadder();
PUPPE_API UClass* Z_Construct_UClass_ALadder_NoRegister();
UPackage* Z_Construct_UPackage__Script_Puppe();
// End Cross Module References

// Begin Class ALadder Function CheckArrayLenght
struct Z_Construct_UFunction_ALadder_CheckArrayLenght_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Ladder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALadder_CheckArrayLenght_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALadder, nullptr, "CheckArrayLenght", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadder_CheckArrayLenght_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALadder_CheckArrayLenght_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALadder_CheckArrayLenght()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALadder_CheckArrayLenght_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALadder::execCheckArrayLenght)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckArrayLenght();
	P_NATIVE_END;
}
// End Class ALadder Function CheckArrayLenght

// Begin Class ALadder Function CheckIfAMontageIsPlaying
struct Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics
{
	struct Ladder_eventCheckIfAMontageIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Ladder.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Ladder_eventCheckIfAMontageIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Ladder_eventCheckIfAMontageIsPlaying_Parms), &Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALadder, nullptr, "CheckIfAMontageIsPlaying", nullptr, nullptr, Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::Ladder_eventCheckIfAMontageIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::Ladder_eventCheckIfAMontageIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALadder::execCheckIfAMontageIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckIfAMontageIsPlaying();
	P_NATIVE_END;
}
// End Class ALadder Function CheckIfAMontageIsPlaying

// Begin Class ALadder Function SetOffLadder
struct Z_Construct_UFunction_ALadder_SetOffLadder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Ladder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALadder_SetOffLadder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALadder, nullptr, "SetOffLadder", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadder_SetOffLadder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALadder_SetOffLadder_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALadder_SetOffLadder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALadder_SetOffLadder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALadder::execSetOffLadder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOffLadder();
	P_NATIVE_END;
}
// End Class ALadder Function SetOffLadder

// Begin Class ALadder Function SetOnLadder
struct Z_Construct_UFunction_ALadder_SetOnLadder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Ladder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALadder_SetOnLadder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALadder, nullptr, "SetOnLadder", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadder_SetOnLadder_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALadder_SetOnLadder_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALadder_SetOnLadder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALadder_SetOnLadder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALadder::execSetOnLadder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOnLadder();
	P_NATIVE_END;
}
// End Class ALadder Function SetOnLadder

// Begin Class ALadder Function SetPlayerCharacter
struct Z_Construct_UFunction_ALadder_SetPlayerCharacter_Statics
{
	struct Ladder_eventSetPlayerCharacter_Parms
	{
		ACharacter* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Ladder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALadder_SetPlayerCharacter_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ladder_eventSetPlayerCharacter_Parms, Player), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALadder_SetPlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALadder_SetPlayerCharacter_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadder_SetPlayerCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALadder_SetPlayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALadder, nullptr, "SetPlayerCharacter", nullptr, nullptr, Z_Construct_UFunction_ALadder_SetPlayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALadder_SetPlayerCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALadder_SetPlayerCharacter_Statics::Ladder_eventSetPlayerCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALadder_SetPlayerCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALadder_SetPlayerCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALadder_SetPlayerCharacter_Statics::Ladder_eventSetPlayerCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALadder_SetPlayerCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALadder_SetPlayerCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALadder::execSetPlayerCharacter)
{
	P_GET_OBJECT(ACharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerCharacter(Z_Param_Player);
	P_NATIVE_END;
}
// End Class ALadder Function SetPlayerCharacter

// Begin Class ALadder
void ALadder::StaticRegisterNativesALadder()
{
	UClass* Class = ALadder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckArrayLenght", &ALadder::execCheckArrayLenght },
		{ "CheckIfAMontageIsPlaying", &ALadder::execCheckIfAMontageIsPlaying },
		{ "SetOffLadder", &ALadder::execSetOffLadder },
		{ "SetOnLadder", &ALadder::execSetOnLadder },
		{ "SetPlayerCharacter", &ALadder::execSetPlayerCharacter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALadder);
UClass* Z_Construct_UClass_ALadder_NoRegister()
{
	return ALadder::StaticClass();
}
struct Z_Construct_UClass_ALadder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Ladder.h" },
		{ "ModuleRelativePath", "Ladder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LadderTransform_MetaData[] = {
		{ "Category", "LadderTransform" },
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "Ladder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Montages_MetaData[] = {
		{ "Category", "Animations Montages" },
		{ "ModuleRelativePath", "Ladder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNearLadder_MetaData[] = {
		{ "Category", "Ladder" },
		{ "ModuleRelativePath", "Ladder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOnLadder_MetaData[] = {
		{ "Category", "Ladder" },
		{ "ModuleRelativePath", "Ladder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputY_MetaData[] = {
		{ "Category", "Ladder" },
		{ "ModuleRelativePath", "Ladder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Ladder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LadderTransform_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LadderTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Montages;
	static void NewProp_bIsNearLadder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNearLadder;
	static void NewProp_bIsOnLadder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOnLadder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALadder_CheckArrayLenght, "CheckArrayLenght" }, // 4035981614
		{ &Z_Construct_UFunction_ALadder_CheckIfAMontageIsPlaying, "CheckIfAMontageIsPlaying" }, // 102084362
		{ &Z_Construct_UFunction_ALadder_SetOffLadder, "SetOffLadder" }, // 4138693134
		{ &Z_Construct_UFunction_ALadder_SetOnLadder, "SetOnLadder" }, // 2287714507
		{ &Z_Construct_UFunction_ALadder_SetPlayerCharacter, "SetPlayerCharacter" }, // 3135413908
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALadder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_LadderTransform_Inner = { "LadderTransform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_LadderTransform = { "LadderTransform", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALadder, LadderTransform), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LadderTransform_MetaData), NewProp_LadderTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_Montages_Inner = { "Montages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_Montages = { "Montages", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALadder, Montages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Montages_MetaData), NewProp_Montages_MetaData) };
void Z_Construct_UClass_ALadder_Statics::NewProp_bIsNearLadder_SetBit(void* Obj)
{
	((ALadder*)Obj)->bIsNearLadder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_bIsNearLadder = { "bIsNearLadder", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALadder), &Z_Construct_UClass_ALadder_Statics::NewProp_bIsNearLadder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNearLadder_MetaData), NewProp_bIsNearLadder_MetaData) };
void Z_Construct_UClass_ALadder_Statics::NewProp_bIsOnLadder_SetBit(void* Obj)
{
	((ALadder*)Obj)->bIsOnLadder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_bIsOnLadder = { "bIsOnLadder", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALadder), &Z_Construct_UClass_ALadder_Statics::NewProp_bIsOnLadder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOnLadder_MetaData), NewProp_bIsOnLadder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_InputY = { "InputY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALadder, InputY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputY_MetaData), NewProp_InputY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALadder_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALadder, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALadder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_LadderTransform_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_LadderTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_Montages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_Montages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_bIsNearLadder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_bIsOnLadder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_InputY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALadder_Statics::NewProp_MoveAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALadder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Puppe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALadder_Statics::ClassParams = {
	&ALadder::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALadder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALadder_Statics::Class_MetaDataParams), Z_Construct_UClass_ALadder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALadder()
{
	if (!Z_Registration_Info_UClass_ALadder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALadder.OuterSingleton, Z_Construct_UClass_ALadder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALadder.OuterSingleton;
}
template<> PUPPE_API UClass* StaticClass<ALadder>()
{
	return ALadder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALadder);
ALadder::~ALadder() {}
// End Class ALadder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Ladder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALadder, ALadder::StaticClass, TEXT("ALadder"), &Z_Registration_Info_UClass_ALadder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALadder), 2638757011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Ladder_h_2040087254(TEXT("/Script/Puppe"),
	Z_CompiledInDeferFile_FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Ladder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Ladder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
