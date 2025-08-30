// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rope.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUPPE_Rope_generated_h
#error "Rope.generated.h already included, missing '#pragma once' in Rope.h"
#endif
#define PUPPE_Rope_generated_h

#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Rope_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShakeRopeOnAttachment); \
	DECLARE_FUNCTION(execDettachPlayer); \
	DECLARE_FUNCTION(execAttachActor);


#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Rope_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARope(); \
	friend struct Z_Construct_UClass_ARope_Statics; \
public: \
	DECLARE_CLASS(ARope, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Puppe"), NO_API) \
	DECLARE_SERIALIZER(ARope)


#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Rope_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARope(ARope&&); \
	ARope(const ARope&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARope); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARope); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARope) \
	NO_API virtual ~ARope();


#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Rope_h_14_PROLOG
#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Rope_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Rope_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Rope_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Rope_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUPPE_API UClass* StaticClass<class ARope>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Rope_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
