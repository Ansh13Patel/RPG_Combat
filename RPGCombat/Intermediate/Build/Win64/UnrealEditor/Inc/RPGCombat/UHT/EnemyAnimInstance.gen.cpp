// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/EnemyAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
RPGCOMBAT_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
RPGCOMBAT_API UClass* Z_Construct_UClass_UEnemyAnimInstance();
RPGCOMBAT_API UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References

// Begin Class UEnemyAnimInstance Function UpdateAnimationProperties
struct Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationProperties" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyAnimInstance::execUpdateAnimationProperties)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAnimationProperties();
	P_NATIVE_END;
}
// End Class UEnemyAnimInstance Function UpdateAnimationProperties

// Begin Class UEnemyAnimInstance
void UEnemyAnimInstance::StaticRegisterNativesUEnemyAnimInstance()
{
	UClass* Class = UEnemyAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateAnimationProperties", &UEnemyAnimInstance::execUpdateAnimationProperties },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyAnimInstance);
UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister()
{
	return UEnemyAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UEnemyAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "EnemyAnimInstance.h" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 3367979894
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyAnimInstance, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pawn_MetaData), NewProp_Pawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyAnimInstance, Enemy), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemy_MetaData), NewProp_Enemy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Enemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams = {
	&UEnemyAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyAnimInstance()
{
	if (!Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton, Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton;
}
template<> RPGCOMBAT_API UClass* StaticClass<UEnemyAnimInstance>()
{
	return UEnemyAnimInstance::StaticClass();
}
UEnemyAnimInstance::UEnemyAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAnimInstance);
UEnemyAnimInstance::~UEnemyAnimInstance() {}
// End Class UEnemyAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_EnemyAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyAnimInstance, UEnemyAnimInstance::StaticClass, TEXT("UEnemyAnimInstance"), &Z_Registration_Info_UClass_UEnemyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyAnimInstance), 3270241197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_EnemyAnimInstance_h_516597057(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_EnemyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_EnemyAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
