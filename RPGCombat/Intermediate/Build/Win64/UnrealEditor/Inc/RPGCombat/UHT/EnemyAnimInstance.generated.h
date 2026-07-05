// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyAnimInstance.h"

#ifdef RPGCOMBAT_EnemyAnimInstance_generated_h
#error "EnemyAnimInstance.generated.h already included, missing '#pragma once' in EnemyAnimInstance.h"
#endif
#define RPGCOMBAT_EnemyAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnemyAnimInstance *******************************************************
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_EnemyAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


RPGCOMBAT_API UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister();

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_EnemyAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyAnimInstance(); \
	friend struct Z_Construct_UClass_UEnemyAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGCOMBAT_API UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnemyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RPGCombat"), Z_Construct_UClass_UEnemyAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UEnemyAnimInstance)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_EnemyAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnemyAnimInstance(UEnemyAnimInstance&&) = delete; \
	UEnemyAnimInstance(const UEnemyAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyAnimInstance) \
	NO_API virtual ~UEnemyAnimInstance();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_EnemyAnimInstance_h_12_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_EnemyAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_EnemyAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_EnemyAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_EnemyAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnemyAnimInstance;

// ********** End Class UEnemyAnimInstance *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_EnemyAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
