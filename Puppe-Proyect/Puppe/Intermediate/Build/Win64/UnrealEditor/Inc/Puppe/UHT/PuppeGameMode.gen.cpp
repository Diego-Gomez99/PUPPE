// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puppe/PuppeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuppeGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PUPPE_API UClass* Z_Construct_UClass_APuppeGameMode();
PUPPE_API UClass* Z_Construct_UClass_APuppeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Puppe();
// End Cross Module References

// Begin Class APuppeGameMode
void APuppeGameMode::StaticRegisterNativesAPuppeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuppeGameMode);
UClass* Z_Construct_UClass_APuppeGameMode_NoRegister()
{
	return APuppeGameMode::StaticClass();
}
struct Z_Construct_UClass_APuppeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PuppeGameMode.h" },
		{ "ModuleRelativePath", "PuppeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuppeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APuppeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Puppe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuppeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APuppeGameMode_Statics::ClassParams = {
	&APuppeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuppeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APuppeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APuppeGameMode()
{
	if (!Z_Registration_Info_UClass_APuppeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuppeGameMode.OuterSingleton, Z_Construct_UClass_APuppeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APuppeGameMode.OuterSingleton;
}
template<> PUPPE_API UClass* StaticClass<APuppeGameMode>()
{
	return APuppeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APuppeGameMode);
APuppeGameMode::~APuppeGameMode() {}
// End Class APuppeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Proyectos_Unreal_Puppe_Proyect_Puppe_Source_Puppe_PuppeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APuppeGameMode, APuppeGameMode::StaticClass, TEXT("APuppeGameMode"), &Z_Registration_Info_UClass_APuppeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuppeGameMode), 2880300598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proyectos_Unreal_Puppe_Proyect_Puppe_Source_Puppe_PuppeGameMode_h_2302912618(TEXT("/Script/Puppe"),
	Z_CompiledInDeferFile_FID_Proyectos_Unreal_Puppe_Proyect_Puppe_Source_Puppe_PuppeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proyectos_Unreal_Puppe_Proyect_Puppe_Source_Puppe_PuppeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
