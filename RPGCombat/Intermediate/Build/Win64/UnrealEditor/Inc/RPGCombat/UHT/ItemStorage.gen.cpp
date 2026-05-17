// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/ItemStorage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemStorage() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
RPGCOMBAT_API UClass* Z_Construct_UClass_AItemStorage();
RPGCOMBAT_API UClass* Z_Construct_UClass_AItemStorage_NoRegister();
RPGCOMBAT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References

// Begin Class AItemStorage
void AItemStorage::StaticRegisterNativesAItemStorage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemStorage);
UClass* Z_Construct_UClass_AItemStorage_NoRegister()
{
	return AItemStorage::StaticClass();
}
struct Z_Construct_UClass_AItemStorage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ItemStorage.h" },
		{ "ModuleRelativePath", "ItemStorage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMap_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "ItemStorage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeaponMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeaponMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemStorage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItemStorage_Statics::NewProp_WeaponMap_ValueProp = { "WeaponMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AItemStorage_Statics::NewProp_WeaponMap_Key_KeyProp = { "WeaponMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AItemStorage_Statics::NewProp_WeaponMap = { "WeaponMap", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemStorage, WeaponMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMap_MetaData), NewProp_WeaponMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemStorage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemStorage_Statics::NewProp_WeaponMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemStorage_Statics::NewProp_WeaponMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemStorage_Statics::NewProp_WeaponMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemStorage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemStorage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemStorage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemStorage_Statics::ClassParams = {
	&AItemStorage::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AItemStorage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemStorage_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemStorage_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemStorage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemStorage()
{
	if (!Z_Registration_Info_UClass_AItemStorage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemStorage.OuterSingleton, Z_Construct_UClass_AItemStorage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemStorage.OuterSingleton;
}
template<> RPGCOMBAT_API UClass* StaticClass<AItemStorage>()
{
	return AItemStorage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemStorage);
AItemStorage::~AItemStorage() {}
// End Class AItemStorage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_ItemStorage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemStorage, AItemStorage::StaticClass, TEXT("AItemStorage"), &Z_Registration_Info_UClass_AItemStorage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemStorage), 2773934332U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_ItemStorage_h_1230385147(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_ItemStorage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_ItemStorage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
