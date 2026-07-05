// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FloatingPlatform.h"

#ifdef RPGCOMBAT_FloatingPlatform_generated_h
#error "FloatingPlatform.generated.h already included, missing '#pragma once' in FloatingPlatform.h"
#endif
#define RPGCOMBAT_FloatingPlatform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFloatingPlatform ********************************************************
RPGCOMBAT_API UClass* Z_Construct_UClass_AFloatingPlatform_NoRegister();

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloatingPlatform_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloatingPlatform(); \
	friend struct Z_Construct_UClass_AFloatingPlatform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGCOMBAT_API UClass* Z_Construct_UClass_AFloatingPlatform_NoRegister(); \
public: \
	DECLARE_CLASS2(AFloatingPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), Z_Construct_UClass_AFloatingPlatform_NoRegister) \
	DECLARE_SERIALIZER(AFloatingPlatform)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloatingPlatform_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFloatingPlatform(AFloatingPlatform&&) = delete; \
	AFloatingPlatform(const AFloatingPlatform&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloatingPlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloatingPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloatingPlatform) \
	NO_API virtual ~AFloatingPlatform();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloatingPlatform_h_9_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloatingPlatform_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloatingPlatform_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloatingPlatform_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFloatingPlatform;

// ********** End Class AFloatingPlatform **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloatingPlatform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
