// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGCombat/FloorSwitch.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorSwitch() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
RPGCOMBAT_API UClass* Z_Construct_UClass_AFloorSwitch();
RPGCOMBAT_API UClass* Z_Construct_UClass_AFloorSwitch_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGCombat();
// End Cross Module References

// Begin Class AFloorSwitch Function LowerDoor
static const FName NAME_AFloorSwitch_LowerDoor = FName(TEXT("LowerDoor"));
void AFloorSwitch::LowerDoor()
{
	UFunction* Func = FindFunctionChecked(NAME_AFloorSwitch_LowerDoor);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "LowerDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFloorSwitch_LowerDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorSwitch_LowerDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFloorSwitch Function LowerDoor

// Begin Class AFloorSwitch Function LowerFloorSwitch
static const FName NAME_AFloorSwitch_LowerFloorSwitch = FName(TEXT("LowerFloorSwitch"));
void AFloorSwitch::LowerFloorSwitch()
{
	UFunction* Func = FindFunctionChecked(NAME_AFloorSwitch_LowerFloorSwitch);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "LowerFloorSwitch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFloorSwitch Function LowerFloorSwitch

// Begin Class AFloorSwitch Function OnBeginOverlap
struct Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics
{
	struct FloorSwitch_eventOnBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorSwitch_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorSwitch_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorSwitch_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorSwitch_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((FloorSwitch_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FloorSwitch_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorSwitch_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::FloorSwitch_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::FloorSwitch_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFloorSwitch::execOnBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AFloorSwitch Function OnBeginOverlap

// Begin Class AFloorSwitch Function OnEndOverlap
struct Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics
{
	struct FloorSwitch_eventOnEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorSwitch_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorSwitch_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorSwitch_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorSwitch_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::FloorSwitch_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::FloorSwitch_eventOnEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFloorSwitch_OnEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorSwitch_OnEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFloorSwitch::execOnEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AFloorSwitch Function OnEndOverlap

// Begin Class AFloorSwitch Function RaiseDoor
static const FName NAME_AFloorSwitch_RaiseDoor = FName(TEXT("RaiseDoor"));
void AFloorSwitch::RaiseDoor()
{
	UFunction* Func = FindFunctionChecked(NAME_AFloorSwitch_RaiseDoor);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "RaiseDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFloorSwitch_RaiseDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorSwitch_RaiseDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFloorSwitch Function RaiseDoor

// Begin Class AFloorSwitch Function RaiseFloorSwitch
static const FName NAME_AFloorSwitch_RaiseFloorSwitch = FName(TEXT("RaiseFloorSwitch"));
void AFloorSwitch::RaiseFloorSwitch()
{
	UFunction* Func = FindFunctionChecked(NAME_AFloorSwitch_RaiseFloorSwitch);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "RaiseFloorSwitch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFloorSwitch Function RaiseFloorSwitch

// Begin Class AFloorSwitch Function UpdateDoorLocation
struct Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics
{
	struct FloorSwitch_eventUpdateDoorLocation_Parms
	{
		float Z;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorSwitch_eventUpdateDoorLocation_Parms, Z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::NewProp_Z,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "UpdateDoorLocation", nullptr, nullptr, Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::FloorSwitch_eventUpdateDoorLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::FloorSwitch_eventUpdateDoorLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFloorSwitch::execUpdateDoorLocation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDoorLocation(Z_Param_Z);
	P_NATIVE_END;
}
// End Class AFloorSwitch Function UpdateDoorLocation

// Begin Class AFloorSwitch Function UpdateFloorSwitchLocation
struct Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics
{
	struct FloorSwitch_eventUpdateFloorSwitchLocation_Parms
	{
		float Z;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FloorSwitch_eventUpdateFloorSwitchLocation_Parms, Z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::NewProp_Z,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloorSwitch, nullptr, "UpdateFloorSwitchLocation", nullptr, nullptr, Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::FloorSwitch_eventUpdateFloorSwitchLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::FloorSwitch_eventUpdateFloorSwitchLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFloorSwitch::execUpdateFloorSwitchLocation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFloorSwitchLocation(Z_Param_Z);
	P_NATIVE_END;
}
// End Class AFloorSwitch Function UpdateFloorSwitchLocation

// Begin Class AFloorSwitch
void AFloorSwitch::StaticRegisterNativesAFloorSwitch()
{
	UClass* Class = AFloorSwitch::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBeginOverlap", &AFloorSwitch::execOnBeginOverlap },
		{ "OnEndOverlap", &AFloorSwitch::execOnEndOverlap },
		{ "UpdateDoorLocation", &AFloorSwitch::execUpdateDoorLocation },
		{ "UpdateFloorSwitchLocation", &AFloorSwitch::execUpdateFloorSwitchLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorSwitch);
UClass* Z_Construct_UClass_AFloorSwitch_NoRegister()
{
	return AFloorSwitch::StaticClass();
}
struct Z_Construct_UClass_AFloorSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FloorSwitch.h" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Floor Switch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overlap volume for functionality to be triggered\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overlap volume for functionality to be triggered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorSwitch_MetaData[] = {
		{ "Category", "Floor Switch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Switch for character to step on\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch for character to step on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[] = {
		{ "Category", "Floor Switch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Door to move when the floor switch is stepped on\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Door to move when the floor switch is stepped on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialDoorLocation_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialFloorSwitchLocation_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchTime_MetaData[] = {
		{ "Category", "Floor Switch" },
		{ "ModuleRelativePath", "FloorSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorSwitch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Door;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialDoorLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialFloorSwitchLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwitchTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloorSwitch_LowerDoor, "LowerDoor" }, // 1955528555
		{ &Z_Construct_UFunction_AFloorSwitch_LowerFloorSwitch, "LowerFloorSwitch" }, // 2082747969
		{ &Z_Construct_UFunction_AFloorSwitch_OnBeginOverlap, "OnBeginOverlap" }, // 1084996012
		{ &Z_Construct_UFunction_AFloorSwitch_OnEndOverlap, "OnEndOverlap" }, // 4069350344
		{ &Z_Construct_UFunction_AFloorSwitch_RaiseDoor, "RaiseDoor" }, // 914147151
		{ &Z_Construct_UFunction_AFloorSwitch_RaiseFloorSwitch, "RaiseFloorSwitch" }, // 1937588423
		{ &Z_Construct_UFunction_AFloorSwitch_UpdateDoorLocation, "UpdateDoorLocation" }, // 2289250932
		{ &Z_Construct_UFunction_AFloorSwitch_UpdateFloorSwitchLocation, "UpdateFloorSwitchLocation" }, // 309644568
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorSwitch, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch = { "FloorSwitch", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorSwitch, FloorSwitch), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorSwitch_MetaData), NewProp_FloorSwitch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorSwitch, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Door_MetaData), NewProp_Door_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialDoorLocation = { "InitialDoorLocation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorSwitch, InitialDoorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialDoorLocation_MetaData), NewProp_InitialDoorLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialFloorSwitchLocation = { "InitialFloorSwitchLocation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorSwitch, InitialFloorSwitchLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialFloorSwitchLocation_MetaData), NewProp_InitialFloorSwitchLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTime = { "SwitchTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorSwitch, SwitchTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchTime_MetaData), NewProp_SwitchTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_TriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_FloorSwitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_Door,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialDoorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_InitialFloorSwitchLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorSwitch_Statics::NewProp_SwitchTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFloorSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorSwitch_Statics::ClassParams = {
	&AFloorSwitch::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFloorSwitch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFloorSwitch()
{
	if (!Z_Registration_Info_UClass_AFloorSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorSwitch.OuterSingleton, Z_Construct_UClass_AFloorSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFloorSwitch.OuterSingleton;
}
template<> RPGCOMBAT_API UClass* StaticClass<AFloorSwitch>()
{
	return AFloorSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorSwitch);
AFloorSwitch::~AFloorSwitch() {}
// End Class AFloorSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFloorSwitch, AFloorSwitch::StaticClass, TEXT("AFloorSwitch"), &Z_Registration_Info_UClass_AFloorSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorSwitch), 3351622833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_4224220229(TEXT("/Script/RPGCombat"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_RPG_Combat_RPGCombat_Source_RPGCombat_FloorSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
