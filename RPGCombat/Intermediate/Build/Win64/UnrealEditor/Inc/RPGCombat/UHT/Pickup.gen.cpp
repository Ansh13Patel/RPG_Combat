// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/Pickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup() {}

// Begin Cross Module References
RPGCOMBAT_API UClass* Z_Construct_UClass_AItem();
RPGCOMBAT_API UClass* Z_Construct_UClass_AMainPlayer_NoRegister();
RPGCOMBAT_API UClass* Z_Construct_UClass_APickup();
RPGCOMBAT_API UClass* Z_Construct_UClass_APickup_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References

// Begin Class APickup Function OnPickup
struct Pickup_eventOnPickup_Parms
{
	AMainPlayer* MainPlayer;
};
static const FName NAME_APickup_OnPickup = FName(TEXT("OnPickup"));
void APickup::OnPickup(AMainPlayer* MainPlayer)
{
	Pickup_eventOnPickup_Parms Parms;
	Parms.MainPlayer=MainPlayer;
	UFunction* Func = FindFunctionChecked(NAME_APickup_OnPickup);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APickup_OnPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickup_OnPickup_Statics::NewProp_MainPlayer = { "MainPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pickup_eventOnPickup_Parms, MainPlayer), Z_Construct_UClass_AMainPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_OnPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnPickup_Statics::NewProp_MainPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnPickup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_OnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "OnPickup", nullptr, nullptr, Z_Construct_UFunction_APickup_OnPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnPickup_Statics::PropPointers), sizeof(Pickup_eventOnPickup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnPickup_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickup_OnPickup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Pickup_eventOnPickup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APickup_OnPickup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickup_OnPickup_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APickup Function OnPickup

// Begin Class APickup
void APickup::StaticRegisterNativesAPickup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickup);
UClass* Z_Construct_UClass_APickup_NoRegister()
{
	return APickup::StaticClass();
}
struct Z_Construct_UClass_APickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Pickup.h" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APickup_OnPickup, "OnPickup" }, // 3736915963
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickup_Statics::ClassParams = {
	&APickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams), Z_Construct_UClass_APickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickup()
{
	if (!Z_Registration_Info_UClass_APickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickup.OuterSingleton, Z_Construct_UClass_APickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickup.OuterSingleton;
}
template<> RPGCOMBAT_API UClass* StaticClass<APickup>()
{
	return APickup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
APickup::~APickup() {}
// End Class APickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Pickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickup, APickup::StaticClass, TEXT("APickup"), &Z_Registration_Info_UClass_APickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickup), 3845005931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Pickup_h_3360225628(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Pickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_Pickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
