// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PuppeCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUPPE_PuppeCharacter_generated_h
#error "PuppeCharacter.generated.h already included, missing '#pragma once' in PuppeCharacter.h"
#endif
#define PUPPE_PuppeCharacter_generated_h

#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_PuppeCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCharacterDead); \
	DECLARE_FUNCTION(execSetIsOnRope); \
	DECLARE_FUNCTION(execSetIsOnLadder);


#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_PuppeCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuppeCharacter(); \
	friend struct Z_Construct_UClass_APuppeCharacter_Statics; \
public: \
	DECLARE_CLASS(APuppeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Puppe"), NO_API) \
	DECLARE_SERIALIZER(APuppeCharacter)


#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_PuppeCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APuppeCharacter(APuppeCharacter&&); \
	APuppeCharacter(const APuppeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuppeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuppeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuppeCharacter) \
	NO_API virtual ~APuppeCharacter();


#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_PuppeCharacter_h_20_PROLOG
#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_PuppeCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_PuppeCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_PuppeCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_PuppeCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUPPE_API UClass* StaticClass<class APuppeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_PuppeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
