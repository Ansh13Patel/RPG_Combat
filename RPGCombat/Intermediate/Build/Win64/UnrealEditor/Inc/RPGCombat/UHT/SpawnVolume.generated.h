// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpawnVolume.h"

#ifdef RPGCOMBAT_SpawnVolume_generated_h
#error "SpawnVolume.generated.h already included, missing '#pragma once' in SpawnVolume.h"
#endif
#define RPGCOMBAT_SpawnVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UObject;

// ********** Begin Class ASpawnVolume *************************************************************
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnOurActor_Implementation(UClass* ToSpawn, FVector const& Location); \
	DECLARE_FUNCTION(execSpawnOurActor); \
	DECLARE_FUNCTION(execGetSpawnActor); \
	DECLARE_FUNCTION(execGetSpawnPoint);


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_12_CALLBACK_WRAPPERS
RPGCOMBAT_API UClass* Z_Construct_UClass_ASpawnVolume_NoRegister();

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnVolume(); \
	friend struct Z_Construct_UClass_ASpawnVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGCOMBAT_API UClass* Z_Construct_UClass_ASpawnVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpawnVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), Z_Construct_UClass_ASpawnVolume_NoRegister) \
	DECLARE_SERIALIZER(ASpawnVolume)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpawnVolume(ASpawnVolume&&) = delete; \
	ASpawnVolume(const ASpawnVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnVolume) \
	NO_API virtual ~ASpawnVolume();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_9_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_12_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpawnVolume;

// ********** End Class ASpawnVolume ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_SpawnVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
