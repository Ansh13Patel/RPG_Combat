// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelTransitionVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef RPGCOMBAT_LevelTransitionVolume_generated_h
#error "LevelTransitionVolume.generated.h already included, missing '#pragma once' in LevelTransitionVolume.h"
#endif
#define RPGCOMBAT_LevelTransitionVolume_generated_h

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_LevelTransitionVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_LevelTransitionVolume_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelTransitionVolume(); \
	friend struct Z_Construct_UClass_ALevelTransitionVolume_Statics; \
public: \
	DECLARE_CLASS(ALevelTransitionVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), NO_API) \
	DECLARE_SERIALIZER(ALevelTransitionVolume)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_LevelTransitionVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALevelTransitionVolume(ALevelTransitionVolume&&); \
	ALevelTransitionVolume(const ALevelTransitionVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelTransitionVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelTransitionVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelTransitionVolume) \
	NO_API virtual ~ALevelTransitionVolume();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_LevelTransitionVolume_h_9_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_LevelTransitionVolume_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_LevelTransitionVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_LevelTransitionVolume_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_LevelTransitionVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGCOMBAT_API UClass* StaticClass<class ALevelTransitionVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_LevelTransitionVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
