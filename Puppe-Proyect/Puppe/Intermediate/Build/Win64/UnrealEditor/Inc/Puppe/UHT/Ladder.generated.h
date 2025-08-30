// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ladder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef PUPPE_Ladder_generated_h
#error "Ladder.generated.h already included, missing '#pragma once' in Ladder.h"
#endif
#define PUPPE_Ladder_generated_h

#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Ladder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckIfAMontageIsPlaying); \
	DECLARE_FUNCTION(execCheckArrayLenght); \
	DECLARE_FUNCTION(execSetOffLadder); \
	DECLARE_FUNCTION(execSetOnLadder); \
	DECLARE_FUNCTION(execSetPlayerCharacter);


#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Ladder_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALadder(); \
	friend struct Z_Construct_UClass_ALadder_Statics; \
public: \
	DECLARE_CLASS(ALadder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Puppe"), NO_API) \
	DECLARE_SERIALIZER(ALadder)


#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Ladder_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALadder(ALadder&&); \
	ALadder(const ALadder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALadder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALadder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALadder) \
	NO_API virtual ~ALadder();


#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Ladder_h_10_PROLOG
#define FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Ladder_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Ladder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Ladder_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Ladder_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUPPE_API UClass* StaticClass<class ALadder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_OctoPC_Documents_PUPPE_Project_PUPPE_Puppe_Proyect_Puppe_Source_Puppe_Ladder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
