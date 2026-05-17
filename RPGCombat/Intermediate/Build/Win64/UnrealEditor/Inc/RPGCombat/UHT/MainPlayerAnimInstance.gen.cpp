// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/MainPlayerAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayerAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
RPGCOMBAT_API UClass* Z_Construct_UClass_AMainPlayer_NoRegister();
RPGCOMBAT_API UClass* Z_Construct_UClass_UMainPlayerAnimInstance();
RPGCOMBAT_API UClass* Z_Construct_UClass_UMainPlayerAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References

// Begin Class UMainPlayerAnimInstance Function UpdateAnimationProperties
struct Z_Construct_UFunction_UMainPlayerAnimInstance_UpdateAnimationProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationProperties" },
		{ "ModuleRelativePath", "MainPlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainPlayerAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainPlayerAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainPlayerAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainPlayerAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainPlayerAnimInstance_UpdateAnimationProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainPlayerAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainPlayerAnimInstance::execUpdateAnimationProperties)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAnimationProperties();
	P_NATIVE_END;
}
// End Class UMainPlayerAnimInstance Function UpdateAnimationProperties

// Begin Class UMainPlayerAnimInstance
void UMainPlayerAnimInstance::StaticRegisterNativesUMainPlayerAnimInstance()
{
	UClass* Class = UMainPlayerAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateAnimationProperties", &UMainPlayerAnimInstance::execUpdateAnimationProperties },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainPlayerAnimInstance);
UClass* Z_Construct_UClass_UMainPlayerAnimInstance_NoRegister()
{
	return UMainPlayerAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UMainPlayerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MainPlayerAnimInstance.h" },
		{ "ModuleRelativePath", "MainPlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainPlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainPlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainPlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainPlayer_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainPlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static void NewProp_bIsInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainPlayerAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 3588849144
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainPlayerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainPlayerAnimInstance_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainPlayerAnimInstance, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
void Z_Construct_UClass_UMainPlayerAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
{
	((UMainPlayerAnimInstance*)Obj)->bIsInAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMainPlayerAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMainPlayerAnimInstance), &Z_Construct_UClass_UMainPlayerAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInAir_MetaData), NewProp_bIsInAir_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainPlayerAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainPlayerAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pawn_MetaData), NewProp_Pawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainPlayerAnimInstance_Statics::NewProp_MainPlayer = { "MainPlayer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainPlayerAnimInstance, MainPlayer), Z_Construct_UClass_AMainPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainPlayer_MetaData), NewProp_MainPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainPlayerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainPlayerAnimInstance_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainPlayerAnimInstance_Statics::NewProp_bIsInAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainPlayerAnimInstance_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainPlayerAnimInstance_Statics::NewProp_MainPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainPlayerAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainPlayerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainPlayerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainPlayerAnimInstance_Statics::ClassParams = {
	&UMainPlayerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainPlayerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainPlayerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainPlayerAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainPlayerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UMainPlayerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UMainPlayerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainPlayerAnimInstance.OuterSingleton;
}
template<> RPGCOMBAT_API UClass* StaticClass<UMainPlayerAnimInstance>()
{
	return UMainPlayerAnimInstance::StaticClass();
}
UMainPlayerAnimInstance::UMainPlayerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainPlayerAnimInstance);
UMainPlayerAnimInstance::~UMainPlayerAnimInstance() {}
// End Class UMainPlayerAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainPlayerAnimInstance, UMainPlayerAnimInstance::StaticClass, TEXT("UMainPlayerAnimInstance"), &Z_Registration_Info_UClass_UMainPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainPlayerAnimInstance), 1327439920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerAnimInstance_h_832012534(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_MainPlayerAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
