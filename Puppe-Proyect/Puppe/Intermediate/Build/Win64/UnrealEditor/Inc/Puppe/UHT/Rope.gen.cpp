// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puppe/Rope.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRope() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
PUPPE_API UClass* Z_Construct_UClass_ARope();
PUPPE_API UClass* Z_Construct_UClass_ARope_NoRegister();
UPackage* Z_Construct_UPackage__Script_Puppe();
// End Cross Module References

// Begin Class ARope Function AttachActor
struct Z_Construct_UFunction_ARope_AttachActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rope.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARope_AttachActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARope, nullptr, "AttachActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARope_AttachActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARope_AttachActor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARope_AttachActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARope_AttachActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARope::execAttachActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachActor();
	P_NATIVE_END;
}
// End Class ARope Function AttachActor

// Begin Class ARope Function DettachPlayer
struct Z_Construct_UFunction_ARope_DettachPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rope.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARope_DettachPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARope, nullptr, "DettachPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARope_DettachPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARope_DettachPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARope_DettachPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARope_DettachPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARope::execDettachPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DettachPlayer();
	P_NATIVE_END;
}
// End Class ARope Function DettachPlayer

// Begin Class ARope Function ShakeRopeOnAttachment
struct Z_Construct_UFunction_ARope_ShakeRopeOnAttachment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Rope.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARope_ShakeRopeOnAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARope, nullptr, "ShakeRopeOnAttachment", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARope_ShakeRopeOnAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARope_ShakeRopeOnAttachment_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARope_ShakeRopeOnAttachment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARope_ShakeRopeOnAttachment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARope::execShakeRopeOnAttachment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShakeRopeOnAttachment();
	P_NATIVE_END;
}
// End Class ARope Function ShakeRopeOnAttachment

// Begin Class ARope
void ARope::StaticRegisterNativesARope()
{
	UClass* Class = ARope::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachActor", &ARope::execAttachActor },
		{ "DettachPlayer", &ARope::execDettachPlayer },
		{ "ShakeRopeOnAttachment", &ARope::execShakeRopeOnAttachment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARope);
UClass* Z_Construct_UClass_ARope_NoRegister()
{
	return ARope::StaticClass();
}
struct Z_Construct_UClass_ARope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Rope.h" },
		{ "ModuleRelativePath", "Rope.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "Rope" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rope.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RopeMesh_MetaData[] = {
		{ "Category", "Rope" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rope.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbSpeed_MetaData[] = {
		{ "Category", "Rope" },
		{ "ModuleRelativePath", "Rope.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingForce_MetaData[] = {
		{ "Category", "Rope" },
		{ "ModuleRelativePath", "Rope.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputY_MetaData[] = {
		{ "Category", "Rope" },
		{ "ModuleRelativePath", "Rope.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Rope.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachPoint_MetaData[] = {
		{ "Category", "Rope" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create SceneComponent for the AttatchPoint\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rope.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create SceneComponent for the AttatchPoint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RopeRoot_MetaData[] = {
		{ "Category", "Rope" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rope.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RopeMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RopeRoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARope_AttachActor, "AttachActor" }, // 1075142250
		{ &Z_Construct_UFunction_ARope_DettachPlayer, "DettachPlayer" }, // 3009673614
		{ &Z_Construct_UFunction_ARope_ShakeRopeOnAttachment, "ShakeRopeOnAttachment" }, // 1598776832
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARope>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARope_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARope, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARope_Statics::NewProp_RopeMesh = { "RopeMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARope, RopeMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RopeMesh_MetaData), NewProp_RopeMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARope_Statics::NewProp_ClimbSpeed = { "ClimbSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARope, ClimbSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbSpeed_MetaData), NewProp_ClimbSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARope_Statics::NewProp_SwingForce = { "SwingForce", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARope, SwingForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingForce_MetaData), NewProp_SwingForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARope_Statics::NewProp_InputY = { "InputY", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARope, InputY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputY_MetaData), NewProp_InputY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARope_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARope, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARope_Statics::NewProp_AttachPoint = { "AttachPoint", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARope, AttachPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachPoint_MetaData), NewProp_AttachPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARope_Statics::NewProp_RopeRoot = { "RopeRoot", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARope, RopeRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RopeRoot_MetaData), NewProp_RopeRoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARope_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARope_Statics::NewProp_BoxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARope_Statics::NewProp_RopeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARope_Statics::NewProp_ClimbSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARope_Statics::NewProp_SwingForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARope_Statics::NewProp_InputY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARope_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARope_Statics::NewProp_AttachPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARope_Statics::NewProp_RopeRoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARope_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARope_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Puppe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARope_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARope_Statics::ClassParams = {
	&ARope::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARope_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARope_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARope_Statics::Class_MetaDataParams), Z_Construct_UClass_ARope_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARope()
{
	if (!Z_Registration_Info_UClass_ARope.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARope.OuterSingleton, Z_Construct_UClass_ARope_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARope.OuterSingleton;
}
template<> PUPPE_API UClass* StaticClass<ARope>()
{
	return ARope::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARope);
ARope::~ARope() {}
// End Class ARope

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Rope_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARope, ARope::StaticClass, TEXT("ARope"), &Z_Registration_Info_UClass_ARope, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARope), 3860622141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Rope_h_1218409264(TEXT("/Script/Puppe"),
	Z_CompiledInDeferFile_FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Rope_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Rope_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
