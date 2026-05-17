// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGCombatGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPGCOMBAT_RPGCombatGameMode_generated_h
#error "RPGCombatGameMode.generated.h already included, missing '#pragma once' in RPGCombatGameMode.h"
#endif
#define RPGCOMBAT_RPGCombatGameMode_generated_h

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGCombatGameMode(); \
	friend struct Z_Construct_UClass_ARPGCombatGameMode_Statics; \
public: \
	DECLARE_CLASS(ARPGCombatGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), NO_API) \
	DECLARE_SERIALIZER(ARPGCombatGameMode)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGCombatGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPGCombatGameMode(ARPGCombatGameMode&&); \
	ARPGCombatGameMode(const ARPGCombatGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGCombatGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGCombatGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGCombatGameMode) \
	NO_API virtual ~ARPGCombatGameMode();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h_12_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGCOMBAT_API UClass* StaticClass<class ARPGCombatGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
