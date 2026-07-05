// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Critter.h"

#ifdef RPGCOMBAT_Critter_generated_h
#error "Critter.generated.h already included, missing '#pragma once' in Critter.h"
#endif
#define RPGCOMBAT_Critter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACritter *****************************************************************
RPGCOMBAT_API UClass* Z_Construct_UClass_ACritter_NoRegister();

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Critter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACritter(); \
	friend struct Z_Construct_UClass_ACritter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGCOMBAT_API UClass* Z_Construct_UClass_ACritter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACritter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), Z_Construct_UClass_ACritter_NoRegister) \
	DECLARE_SERIALIZER(ACritter)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Critter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACritter(ACritter&&) = delete; \
	ACritter(const ACritter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACritter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACritter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACritter) \
	NO_API virtual ~ACritter();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Critter_h_9_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Critter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Critter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Critter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACritter;

// ********** End Class ACritter *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Critter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
