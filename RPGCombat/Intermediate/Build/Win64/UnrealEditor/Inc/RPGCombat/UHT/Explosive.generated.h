// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Explosive.h"

#ifdef RPGCOMBAT_Explosive_generated_h
#error "Explosive.generated.h already included, missing '#pragma once' in Explosive.h"
#endif
#define RPGCOMBAT_Explosive_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AExplosive ***************************************************************
RPGCOMBAT_API UClass* Z_Construct_UClass_AExplosive_NoRegister();

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Explosive_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosive(); \
	friend struct Z_Construct_UClass_AExplosive_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGCOMBAT_API UClass* Z_Construct_UClass_AExplosive_NoRegister(); \
public: \
	DECLARE_CLASS2(AExplosive, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), Z_Construct_UClass_AExplosive_NoRegister) \
	DECLARE_SERIALIZER(AExplosive)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Explosive_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AExplosive(AExplosive&&) = delete; \
	AExplosive(const AExplosive&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosive); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosive) \
	NO_API virtual ~AExplosive();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Explosive_h_12_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Explosive_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Explosive_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Explosive_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AExplosive;

// ********** End Class AExplosive *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Explosive_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
