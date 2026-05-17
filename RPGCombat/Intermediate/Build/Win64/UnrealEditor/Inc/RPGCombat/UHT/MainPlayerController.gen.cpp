// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/MainPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
RPGCOMBAT_API UClass* Z_Construct_UClass_AMainPlayerController();
RPGCOMBAT_API UClass* Z_Construct_UClass_AMainPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References

// Begin Class AMainPlayerController Function DisplayPauseMenu
static const FName NAME_AMainPlayerController_DisplayPauseMenu = FName(TEXT("DisplayPauseMenu"));
void AMainPlayerController::DisplayPauseMenu()
{
	UFunction* Func = FindFunctionChecked(NAME_AMainPlayerController_DisplayPauseMenu);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		DisplayPauseMenu_Implementation();
	}
}
struct Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hud" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "DisplayPauseMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayerController::execDisplayPauseMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisplayPauseMenu_Implementation();
	P_NATIVE_END;
}
// End Class AMainPlayerController Function DisplayPauseMenu

// Begin Class AMainPlayerController Function RemovePauseMenu
static const FName NAME_AMainPlayerController_RemovePauseMenu = FName(TEXT("RemovePauseMenu"));
void AMainPlayerController::RemovePauseMenu()
{
	UFunction* Func = FindFunctionChecked(NAME_AMainPlayerController_RemovePauseMenu);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		RemovePauseMenu_Implementation();
	}
}
struct Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hud" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerController, nullptr, "RemovePauseMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainPlayerController::execRemovePauseMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovePauseMenu_Implementation();
	P_NATIVE_END;
}
// End Class AMainPlayerController Function RemovePauseMenu

// Begin Class AMainPlayerController
void AMainPlayerController::StaticRegisterNativesAMainPlayerController()
{
	UClass* Class = AMainPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisplayPauseMenu", &AMainPlayerController::execDisplayPauseMenu },
		{ "RemovePauseMenu", &AMainPlayerController::execRemovePauseMenu },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainPlayerController);
UClass* Z_Construct_UClass_AMainPlayerController_NoRegister()
{
	return AMainPlayerController::StaticClass();
}
struct Z_Construct_UClass_AMainPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MainPlayerController.h" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDOverlayAsset_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDOverlay_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WEnemyHealthBar_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyHealthBar_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WPauseMenu_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenu_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDOverlayAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDOverlay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WEnemyHealthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyHealthBar;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WPauseMenu;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseMenu;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainPlayerController_DisplayPauseMenu, "DisplayPauseMenu" }, // 2181579209
		{ &Z_Construct_UFunction_AMainPlayerController_RemovePauseMenu, "RemovePauseMenu" }, // 4269173681
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlayAsset = { "HUDOverlayAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, HUDOverlayAsset), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDOverlayAsset_MetaData), NewProp_HUDOverlayAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlay = { "HUDOverlay", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, HUDOverlay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDOverlay_MetaData), NewProp_HUDOverlay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WEnemyHealthBar = { "WEnemyHealthBar", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, WEnemyHealthBar), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WEnemyHealthBar_MetaData), NewProp_WEnemyHealthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EnemyHealthBar = { "EnemyHealthBar", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, EnemyHealthBar), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyHealthBar_MetaData), NewProp_EnemyHealthBar_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WPauseMenu = { "WPauseMenu", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, WPauseMenu), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WPauseMenu_MetaData), NewProp_WPauseMenu_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PauseMenu = { "PauseMenu", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerController, PauseMenu), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenu_MetaData), NewProp_PauseMenu_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlayAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_HUDOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WEnemyHealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_EnemyHealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_WPauseMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerController_Statics::NewProp_PauseMenu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayerController_Statics::ClassParams = {
	&AMainPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainPlayerController()
{
	if (!Z_Registration_Info_UClass_AMainPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainPlayerController.OuterSingleton, Z_Construct_UClass_AMainPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainPlayerController.OuterSingleton;
}
template<> RPGCOMBAT_API UClass* StaticClass<AMainPlayerController>()
{
	return AMainPlayerController::StaticClass();
}
AMainPlayerController::AMainPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayerController);
AMainPlayerController::~AMainPlayerController() {}
// End Class AMainPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainPlayerController, AMainPlayerController::StaticClass, TEXT("AMainPlayerController"), &Z_Registration_Info_UClass_AMainPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainPlayerController), 2000288148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_3427817843(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
