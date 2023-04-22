// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPGCOMBAT_MainPlayer_generated_h
#error "MainPlayer.generated.h already included, missing '#pragma once' in MainPlayer.h"
#endif
#define RPGCOMBAT_MainPlayer_generated_h

#define RPGCombat_Source_RPGCombat_MainPlayer_h_33_SPARSE_DATA
#define RPGCombat_Source_RPGCombat_MainPlayer_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame); \
	DECLARE_FUNCTION(execPlaySwingSound); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execIncrementHealth); \
	DECLARE_FUNCTION(execIncrementCoin); \
	DECLARE_FUNCTION(execDeathEnd); \
	DECLARE_FUNCTION(execShowPickupLocations);


#define RPGCombat_Source_RPGCombat_MainPlayer_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame); \
	DECLARE_FUNCTION(execPlaySwingSound); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execIncrementHealth); \
	DECLARE_FUNCTION(execIncrementCoin); \
	DECLARE_FUNCTION(execDeathEnd); \
	DECLARE_FUNCTION(execShowPickupLocations);


#define RPGCombat_Source_RPGCombat_MainPlayer_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayer(); \
	friend struct Z_Construct_UClass_AMainPlayer_Statics; \
public: \
	DECLARE_CLASS(AMainPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayer)


#define RPGCombat_Source_RPGCombat_MainPlayer_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAMainPlayer(); \
	friend struct Z_Construct_UClass_AMainPlayer_Statics; \
public: \
	DECLARE_CLASS(AMainPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayer)


#define RPGCombat_Source_RPGCombat_MainPlayer_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayer(AMainPlayer&&); \
	NO_API AMainPlayer(const AMainPlayer&); \
public:


#define RPGCombat_Source_RPGCombat_MainPlayer_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayer(AMainPlayer&&); \
	NO_API AMainPlayer(const AMainPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayer)


#define RPGCombat_Source_RPGCombat_MainPlayer_h_33_PRIVATE_PROPERTY_OFFSET
#define RPGCombat_Source_RPGCombat_MainPlayer_h_30_PROLOG
#define RPGCombat_Source_RPGCombat_MainPlayer_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPGCombat_Source_RPGCombat_MainPlayer_h_33_PRIVATE_PROPERTY_OFFSET \
	RPGCombat_Source_RPGCombat_MainPlayer_h_33_SPARSE_DATA \
	RPGCombat_Source_RPGCombat_MainPlayer_h_33_RPC_WRAPPERS \
	RPGCombat_Source_RPGCombat_MainPlayer_h_33_INCLASS \
	RPGCombat_Source_RPGCombat_MainPlayer_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPGCombat_Source_RPGCombat_MainPlayer_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPGCombat_Source_RPGCombat_MainPlayer_h_33_PRIVATE_PROPERTY_OFFSET \
	RPGCombat_Source_RPGCombat_MainPlayer_h_33_SPARSE_DATA \
	RPGCombat_Source_RPGCombat_MainPlayer_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	RPGCombat_Source_RPGCombat_MainPlayer_h_33_INCLASS_NO_PURE_DECLS \
	RPGCombat_Source_RPGCombat_MainPlayer_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGCOMBAT_API UClass* StaticClass<class AMainPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPGCombat_Source_RPGCombat_MainPlayer_h


#define FOREACH_ENUM_ESTAMINASTATUS(op) \
	op(EStaminaStatus::ESS_Normal) \
	op(EStaminaStatus::ESS_BelowMinimum) \
	op(EStaminaStatus::ESS_Exhausted) \
	op(EStaminaStatus::ESS_ExhaustedRecovering) 

enum class EStaminaStatus : uint8;
template<> RPGCOMBAT_API UEnum* StaticEnum<EStaminaStatus>();

#define FOREACH_ENUM_EMOVEMENTSTATUS(op) \
	op(EMovementStatus::EMS_Normal) \
	op(EMovementStatus::EMS_Sprinting) \
	op(EMovementStatus::EMS_Dead) 

enum class EMovementStatus : uint8;
template<> RPGCOMBAT_API UEnum* StaticEnum<EMovementStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
