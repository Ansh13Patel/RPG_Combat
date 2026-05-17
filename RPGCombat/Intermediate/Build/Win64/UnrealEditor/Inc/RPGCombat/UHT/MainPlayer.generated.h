// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPGCOMBAT_MainPlayer_generated_h
#error "MainPlayer.generated.h already included, missing '#pragma once' in MainPlayer.h"
#endif
#define RPGCOMBAT_MainPlayer_generated_h

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame); \
	DECLARE_FUNCTION(execPlaySwingSound); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execIncrementHealth); \
	DECLARE_FUNCTION(execIncrementCoin); \
	DECLARE_FUNCTION(execDeathEnd); \
	DECLARE_FUNCTION(execShowPickupLocations);


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayer(); \
	friend struct Z_Construct_UClass_AMainPlayer_Statics; \
public: \
	DECLARE_CLASS(AMainPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayer)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainPlayer(AMainPlayer&&); \
	AMainPlayer(const AMainPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayer) \
	NO_API virtual ~AMainPlayer();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_30_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_33_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGCOMBAT_API UClass* StaticClass<class AMainPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayer_h


#define FOREACH_ENUM_EMOVEMENTSTATUS(op) \
	op(EMovementStatus::EMS_Normal) \
	op(EMovementStatus::EMS_Sprinting) \
	op(EMovementStatus::EMS_Dead) 

enum class EMovementStatus : uint8;
template<> struct TIsUEnumClass<EMovementStatus> { enum { Value = true }; };
template<> RPGCOMBAT_API UEnum* StaticEnum<EMovementStatus>();

#define FOREACH_ENUM_ESTAMINASTATUS(op) \
	op(EStaminaStatus::ESS_Normal) \
	op(EStaminaStatus::ESS_BelowMinimum) \
	op(EStaminaStatus::ESS_Exhausted) \
	op(EStaminaStatus::ESS_ExhaustedRecovering) 

enum class EStaminaStatus : uint8;
template<> struct TIsUEnumClass<EStaminaStatus> { enum { Value = true }; };
template<> RPGCOMBAT_API UEnum* StaticEnum<EStaminaStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
