// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FloorSwitch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef RPGCOMBAT_FloorSwitch_generated_h
#error "FloorSwitch.generated.h already included, missing '#pragma once' in FloorSwitch.h"
#endif
#define RPGCOMBAT_FloorSwitch_generated_h

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateFloorSwitchLocation); \
	DECLARE_FUNCTION(execUpdateDoorLocation); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_12_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloorSwitch(); \
	friend struct Z_Construct_UClass_AFloorSwitch_Statics; \
public: \
	DECLARE_CLASS(AFloorSwitch, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), NO_API) \
	DECLARE_SERIALIZER(AFloorSwitch)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFloorSwitch(AFloorSwitch&&); \
	AFloorSwitch(const AFloorSwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloorSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloorSwitch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloorSwitch) \
	NO_API virtual ~AFloorSwitch();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_9_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_12_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGCOMBAT_API UClass* StaticClass<class AFloorSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
