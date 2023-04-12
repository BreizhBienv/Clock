// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clock/StartingGear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartingGear() {}
// Cross Module References
	CLOCK_API UClass* Z_Construct_UClass_AStartingGear_NoRegister();
	CLOCK_API UClass* Z_Construct_UClass_AStartingGear();
	CLOCK_API UClass* Z_Construct_UClass_AGear();
	UPackage* Z_Construct_UPackage__Script_Clock();
// End Cross Module References
	DEFINE_FUNCTION(AStartingGear::execPropagateSpeedFromStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PropagateSpeedFromStart();
		P_NATIVE_END;
	}
	void AStartingGear::StaticRegisterNativesAStartingGear()
	{
		UClass* Class = AStartingGear::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PropagateSpeedFromStart", &AStartingGear::execPropagateSpeedFromStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStartingGear_PropagateSpeedFromStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStartingGear_PropagateSpeedFromStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StartingGear.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStartingGear_PropagateSpeedFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStartingGear, nullptr, "PropagateSpeedFromStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStartingGear_PropagateSpeedFromStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStartingGear_PropagateSpeedFromStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStartingGear_PropagateSpeedFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStartingGear_PropagateSpeedFromStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStartingGear);
	UClass* Z_Construct_UClass_AStartingGear_NoRegister()
	{
		return AStartingGear::StaticClass();
	}
	struct Z_Construct_UClass_AStartingGear_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseRotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagOfStartingGearTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagOfStartingGearTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStartingGear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGear,
		(UObject* (*)())Z_Construct_UPackage__Script_Clock,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStartingGear_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStartingGear_PropagateSpeedFromStart, "PropagateSpeedFromStart" }, // 2068204785
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartingGear_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StartingGear.h" },
		{ "ModuleRelativePath", "StartingGear.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartingGear_Statics::NewProp_BaseRotationSpeed_MetaData[] = {
		{ "Category", "variable" },
		{ "ModuleRelativePath", "StartingGear.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStartingGear_Statics::NewProp_BaseRotationSpeed = { "BaseRotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStartingGear, BaseRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AStartingGear_Statics::NewProp_BaseRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStartingGear_Statics::NewProp_BaseRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStartingGear_Statics::NewProp_TagOfStartingGearTag_MetaData[] = {
		{ "Category", "Tag" },
		{ "ModuleRelativePath", "StartingGear.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AStartingGear_Statics::NewProp_TagOfStartingGearTag = { "TagOfStartingGearTag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStartingGear, TagOfStartingGearTag), METADATA_PARAMS(Z_Construct_UClass_AStartingGear_Statics::NewProp_TagOfStartingGearTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStartingGear_Statics::NewProp_TagOfStartingGearTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStartingGear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartingGear_Statics::NewProp_BaseRotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStartingGear_Statics::NewProp_TagOfStartingGearTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStartingGear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStartingGear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStartingGear_Statics::ClassParams = {
		&AStartingGear::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStartingGear_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStartingGear_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStartingGear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStartingGear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStartingGear()
	{
		if (!Z_Registration_Info_UClass_AStartingGear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStartingGear.OuterSingleton, Z_Construct_UClass_AStartingGear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStartingGear.OuterSingleton;
	}
	template<> CLOCK_API UClass* StaticClass<AStartingGear>()
	{
		return AStartingGear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStartingGear);
	struct Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_StartingGear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_StartingGear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStartingGear, AStartingGear::StaticClass, TEXT("AStartingGear"), &Z_Registration_Info_UClass_AStartingGear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStartingGear), 4182757937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_StartingGear_h_1890858893(TEXT("/Script/Clock"),
		Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_StartingGear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_StartingGear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
