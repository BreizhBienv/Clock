// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clock/GearBeltComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGearBeltComp() {}
// Cross Module References
	CLOCK_API UClass* Z_Construct_UClass_AGearBeltComp_NoRegister();
	CLOCK_API UClass* Z_Construct_UClass_AGearBeltComp();
	CLOCK_API UClass* Z_Construct_UClass_AGear();
	UPackage* Z_Construct_UPackage__Script_Clock();
// End Cross Module References
	DEFINE_FUNCTION(AGearBeltComp::execSetLinkedGear)
	{
		P_GET_OBJECT(AGearBeltComp,Z_Param_OtherGear);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinkedGear(Z_Param_OtherGear);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGearBeltComp::execGetLinkedGear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGearBeltComp**)Z_Param__Result=P_THIS->GetLinkedGear();
		P_NATIVE_END;
	}
	void AGearBeltComp::StaticRegisterNativesAGearBeltComp()
	{
		UClass* Class = AGearBeltComp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLinkedGear", &AGearBeltComp::execGetLinkedGear },
			{ "SetLinkedGear", &AGearBeltComp::execSetLinkedGear },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGearBeltComp_GetLinkedGear_Statics
	{
		struct GearBeltComp_eventGetLinkedGear_Parms
		{
			AGearBeltComp* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGearBeltComp_GetLinkedGear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GearBeltComp_eventGetLinkedGear_Parms, ReturnValue), Z_Construct_UClass_AGearBeltComp_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGearBeltComp_GetLinkedGear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGearBeltComp_GetLinkedGear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGearBeltComp_GetLinkedGear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GearBeltComp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGearBeltComp_GetLinkedGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGearBeltComp, nullptr, "GetLinkedGear", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGearBeltComp_GetLinkedGear_Statics::GearBeltComp_eventGetLinkedGear_Parms), Z_Construct_UFunction_AGearBeltComp_GetLinkedGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGearBeltComp_GetLinkedGear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGearBeltComp_GetLinkedGear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGearBeltComp_GetLinkedGear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGearBeltComp_GetLinkedGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGearBeltComp_GetLinkedGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGearBeltComp_SetLinkedGear_Statics
	{
		struct GearBeltComp_eventSetLinkedGear_Parms
		{
			AGearBeltComp* OtherGear;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherGear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGearBeltComp_SetLinkedGear_Statics::NewProp_OtherGear = { "OtherGear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GearBeltComp_eventSetLinkedGear_Parms, OtherGear), Z_Construct_UClass_AGearBeltComp_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGearBeltComp_SetLinkedGear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGearBeltComp_SetLinkedGear_Statics::NewProp_OtherGear,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGearBeltComp_SetLinkedGear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GearBeltComp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGearBeltComp_SetLinkedGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGearBeltComp, nullptr, "SetLinkedGear", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGearBeltComp_SetLinkedGear_Statics::GearBeltComp_eventSetLinkedGear_Parms), Z_Construct_UFunction_AGearBeltComp_SetLinkedGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGearBeltComp_SetLinkedGear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGearBeltComp_SetLinkedGear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGearBeltComp_SetLinkedGear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGearBeltComp_SetLinkedGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGearBeltComp_SetLinkedGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGearBeltComp);
	UClass* Z_Construct_UClass_AGearBeltComp_NoRegister()
	{
		return AGearBeltComp::StaticClass();
	}
	struct Z_Construct_UClass_AGearBeltComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGearBeltComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGear,
		(UObject* (*)())Z_Construct_UPackage__Script_Clock,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGearBeltComp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGearBeltComp_GetLinkedGear, "GetLinkedGear" }, // 3575074825
		{ &Z_Construct_UFunction_AGearBeltComp_SetLinkedGear, "SetLinkedGear" }, // 4064425099
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGearBeltComp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GearBeltComp.h" },
		{ "ModuleRelativePath", "GearBeltComp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGearBeltComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGearBeltComp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGearBeltComp_Statics::ClassParams = {
		&AGearBeltComp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGearBeltComp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGearBeltComp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGearBeltComp()
	{
		if (!Z_Registration_Info_UClass_AGearBeltComp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGearBeltComp.OuterSingleton, Z_Construct_UClass_AGearBeltComp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGearBeltComp.OuterSingleton;
	}
	template<> CLOCK_API UClass* StaticClass<AGearBeltComp>()
	{
		return AGearBeltComp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGearBeltComp);
	struct Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_GearBeltComp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_GearBeltComp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGearBeltComp, AGearBeltComp::StaticClass, TEXT("AGearBeltComp"), &Z_Registration_Info_UClass_AGearBeltComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGearBeltComp), 3969625508U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_GearBeltComp_h_411930934(TEXT("/Script/Clock"),
		Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_GearBeltComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_GearBeltComp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
