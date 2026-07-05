// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainPlayerController.h"

#ifdef RPGCOMBAT_MainPlayerController_generated_h
#error "MainPlayerController.generated.h already included, missing '#pragma once' in MainPlayerController.h"
#endif
#define RPGCOMBAT_MainPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMainPlayerController ****************************************************
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RemovePauseMenu_Implementation(); \
	virtual void DisplayPauseMenu_Implementation(); \
	DECLARE_FUNCTION(execRemovePauseMenu); \
	DECLARE_FUNCTION(execDisplayPauseMenu);


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_15_CALLBACK_WRAPPERS
RPGCOMBAT_API UClass* Z_Construct_UClass_AMainPlayerController_NoRegister();

#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGCOMBAT_API UClass* Z_Construct_UClass_AMainPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGCombat"), Z_Construct_UClass_AMainPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMainPlayerController(AMainPlayerController&&) = delete; \
	AMainPlayerController(const AMainPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayerController) \
	NO_API virtual ~AMainPlayerController();


#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_12_PROLOG
#define FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_15_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMainPlayerController;

// ********** End Class AMainPlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
