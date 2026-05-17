// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGCombatSaveGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPGCOMBAT_RPGCombatSaveGame_generated_h
#error "RPGCombatSaveGame.generated.h already included, missing '#pragma once' in RPGCombatSaveGame.h"
#endif
#define RPGCOMBAT_RPGCombatSaveGame_generated_h

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterStats_Statics; \
	RPGCOMBAT_API static class UScriptStruct* StaticStruct();


template<> RPGCOMBAT_API UScriptStruct* StaticStruct<struct FCharacterStats>();

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGCombatSaveGame(); \
	friend struct Z_Construct_UClass_URPGCombatSaveGame_Statics; \
public: \
	DECLARE_CLASS(URPGCombatSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGCombat"), NO_API) \
	DECLARE_SERIALIZER(URPGCombatSaveGame)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URPGCombatSaveGame(URPGCombatSaveGame&&); \
	URPGCombatSaveGame(const URPGCombatSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGCombatSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGCombatSaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGCombatSaveGame) \
	NO_API virtual ~URPGCombatSaveGame();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h_44_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h_47_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGCOMBAT_API UClass* StaticClass<class URPGCombatSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
