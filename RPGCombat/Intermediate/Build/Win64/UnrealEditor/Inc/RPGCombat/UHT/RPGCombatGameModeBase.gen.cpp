// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/RPGCombatGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGCombatGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RPGCOMBAT_API UClass* Z_Construct_UClass_ARPGCombatGameModeBase();
RPGCOMBAT_API UClass* Z_Construct_UClass_ARPGCombatGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References

// Begin Class ARPGCombatGameModeBase
void ARPGCombatGameModeBase::StaticRegisterNativesARPGCombatGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGCombatGameModeBase);
UClass* Z_Construct_UClass_ARPGCombatGameModeBase_NoRegister()
{
	return ARPGCombatGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ARPGCombatGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RPGCombatGameModeBase.h" },
		{ "ModuleRelativePath", "RPGCombatGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGCombatGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARPGCombatGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCombatGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGCombatGameModeBase_Statics::ClassParams = {
	&ARPGCombatGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCombatGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGCombatGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARPGCombatGameModeBase()
{
	if (!Z_Registration_Info_UClass_ARPGCombatGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGCombatGameModeBase.OuterSingleton, Z_Construct_UClass_ARPGCombatGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARPGCombatGameModeBase.OuterSingleton;
}
template<> RPGCOMBAT_API UClass* StaticClass<ARPGCombatGameModeBase>()
{
	return ARPGCombatGameModeBase::StaticClass();
}
ARPGCombatGameModeBase::ARPGCombatGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGCombatGameModeBase);
ARPGCombatGameModeBase::~ARPGCombatGameModeBase() {}
// End Class ARPGCombatGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARPGCombatGameModeBase, ARPGCombatGameModeBase::StaticClass, TEXT("ARPGCombatGameModeBase"), &Z_Registration_Info_UClass_ARPGCombatGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGCombatGameModeBase), 1420168654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameModeBase_h_3341990474(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_RPGCombatGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
