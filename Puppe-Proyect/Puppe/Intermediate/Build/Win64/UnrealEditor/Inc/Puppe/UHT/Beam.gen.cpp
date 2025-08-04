// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puppe/Beam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeam() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PUPPE_API UClass* Z_Construct_UClass_ABeam();
PUPPE_API UClass* Z_Construct_UClass_ABeam_NoRegister();
UPackage* Z_Construct_UPackage__Script_Puppe();
// End Cross Module References

// Begin Class ABeam
void ABeam::StaticRegisterNativesABeam()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABeam);
UClass* Z_Construct_UClass_ABeam_NoRegister()
{
	return ABeam::StaticClass();
}
struct Z_Construct_UClass_ABeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Beam.h" },
		{ "ModuleRelativePath", "Beam.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABeam>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABeam_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Puppe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABeam_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABeam_Statics::ClassParams = {
	&ABeam::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABeam_Statics::Class_MetaDataParams), Z_Construct_UClass_ABeam_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABeam()
{
	if (!Z_Registration_Info_UClass_ABeam.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABeam.OuterSingleton, Z_Construct_UClass_ABeam_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABeam.OuterSingleton;
}
template<> PUPPE_API UClass* StaticClass<ABeam>()
{
	return ABeam::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABeam);
ABeam::~ABeam() {}
// End Class ABeam

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_Unreal_Puppe_Proyect_Puppe_Source_Puppe_Beam_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABeam, ABeam::StaticClass, TEXT("ABeam"), &Z_Registration_Info_UClass_ABeam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABeam), 907844721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_Unreal_Puppe_Proyect_Puppe_Source_Puppe_Beam_h_3627182985(TEXT("/Script/Puppe"),
	Z_CompiledInDeferFile_FID_Proyectos_Unreal_Puppe_Proyect_Puppe_Source_Puppe_Beam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_Unreal_Puppe_Proyect_Puppe_Source_Puppe_Beam_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
