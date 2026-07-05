// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy.h"

#ifdef RPGCOMBAT_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define RPGCOMBAT_Enemy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AMainPlayer;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AEnemy *******************************************************************
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Enemy_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeathEnd); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execDeactivateCollision); \
	DECLARE_FUNCTION(execActivateCollision); \
	DECLARE_FUNCTION(execMoveToTarget); \
	DECLARE_FUNCTION(execCombatOnOverlapEnd); \
	DECLARE_FUNCTION(execCombatOnOverlapBegin); \
	DECLARE_FUNCTION(execCombatSphereOnOverlapEnd); \
	DECLARE_FUNCTION(execCombatSphereOnOverlapBegin); \
	DECLARE_FUNCTION(execAgroSphereOnOverlapEnd); \
	DECLARE_FUNCTION(execAgroSphereOnOverlapBegin);


RPGCOMBAT_API UClass* Z_Construct_UClass_AEnemy_NoRegister();

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Enemy_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGCOMBAT_API UClass* Z_Construct_UClass_AEnemy_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), Z_Construct_UClass_AEnemy_NoRegister) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Enemy_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemy(AEnemy&&) = delete; \
	AEnemy(const AEnemy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy) \
	NO_API virtual ~AEnemy();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Enemy_h_20_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Enemy_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Enemy_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Enemy_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Enemy_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemy;

// ********** End Class AEnemy *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Enemy_h

// ********** Begin Enum EEnemyMovementStatus ******************************************************
#define FOREACH_ENUM_EENEMYMOVEMENTSTATUS(op) \
	op(EEnemyMovementStatus::EMS_Idle) \
	op(EEnemyMovementStatus::EMS_MoveToTarget) \
	op(EEnemyMovementStatus::EMS_Attacking) \
	op(EEnemyMovementStatus::EMS_Dead) 

enum class EEnemyMovementStatus : uint8;
template<> struct TIsUEnumClass<EEnemyMovementStatus> { enum { Value = true }; };
template<> RPGCOMBAT_API UEnum* StaticEnum<EEnemyMovementStatus>();
// ********** End Enum EEnemyMovementStatus ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
