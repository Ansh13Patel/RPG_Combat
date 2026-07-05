// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemStorage.h"

#ifdef RPGCOMBAT_ItemStorage_generated_h
#error "ItemStorage.generated.h already included, missing '#pragma once' in ItemStorage.h"
#endif
#define RPGCOMBAT_ItemStorage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AItemStorage *************************************************************
RPGCOMBAT_API UClass* Z_Construct_UClass_AItemStorage_NoRegister();

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_ItemStorage_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemStorage(); \
	friend struct Z_Construct_UClass_AItemStorage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGCOMBAT_API UClass* Z_Construct_UClass_AItemStorage_NoRegister(); \
public: \
	DECLARE_CLASS2(AItemStorage, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), Z_Construct_UClass_AItemStorage_NoRegister) \
	DECLARE_SERIALIZER(AItemStorage)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_ItemStorage_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AItemStorage(AItemStorage&&) = delete; \
	AItemStorage(const AItemStorage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemStorage) \
	NO_API virtual ~AItemStorage();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_ItemStorage_h_10_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_ItemStorage_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_ItemStorage_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_ItemStorage_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AItemStorage;

// ********** End Class AItemStorage ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_ItemStorage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
