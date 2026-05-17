// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainPlayerAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPGCOMBAT_MainPlayerAnimInstance_generated_h
#error "MainPlayerAnimInstance.generated.h already included, missing '#pragma once' in MainPlayerAnimInstance.h"
#endif
#define RPGCOMBAT_MainPlayerAnimInstance_generated_h

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_UMainPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMainPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RPGCombat"), NO_API) \
	DECLARE_SERIALIZER(UMainPlayerAnimInstance)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainPlayerAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMainPlayerAnimInstance(UMainPlayerAnimInstance&&); \
	UMainPlayerAnimInstance(const UMainPlayerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainPlayerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainPlayerAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainPlayerAnimInstance) \
	NO_API virtual ~UMainPlayerAnimInstance();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerAnimInstance_h_12_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGCOMBAT_API UClass* StaticClass<class UMainPlayerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
