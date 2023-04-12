// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clock/EndingGear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndingGear() {}
// Cross Module References
	CLOCK_API UClass* Z_Construct_UClass_AEndingGear_NoRegister();
	CLOCK_API UClass* Z_Construct_UClass_AEndingGear();
	CLOCK_API UClass* Z_Construct_UClass_AGear();
	UPackage* Z_Construct_UPackage__Script_Clock();
// End Cross Module References
	void AEndingGear::StaticRegisterNativesAEndingGear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEndingGear);
	UClass* Z_Construct_UClass_AEndingGear_NoRegister()
	{
		return AEndingGear::StaticClass();
	}
	struct Z_Construct_UClass_AEndingGear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagOfEndingGearTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagOfEndingGearTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEndingGear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGear,
		(UObject* (*)())Z_Construct_UPackage__Script_Clock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndingGear_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EndingGear.h" },
		{ "ModuleRelativePath", "EndingGear.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndingGear_Statics::NewProp_TagOfEndingGearTag_MetaData[] = {
		{ "Category", "Tag" },
		{ "ModuleRelativePath", "EndingGear.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEndingGear_Statics::NewProp_TagOfEndingGearTag = { "TagOfEndingGearTag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEndingGear, TagOfEndingGearTag), METADATA_PARAMS(Z_Construct_UClass_AEndingGear_Statics::NewProp_TagOfEndingGearTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEndingGear_Statics::NewProp_TagOfEndingGearTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEndingGear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEndingGear_Statics::NewProp_TagOfEndingGearTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEndingGear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndingGear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEndingGear_Statics::ClassParams = {
		&AEndingGear::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEndingGear_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEndingGear_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEndingGear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEndingGear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEndingGear()
	{
		if (!Z_Registration_Info_UClass_AEndingGear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEndingGear.OuterSingleton, Z_Construct_UClass_AEndingGear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEndingGear.OuterSingleton;
	}
	template<> CLOCK_API UClass* StaticClass<AEndingGear>()
	{
		return AEndingGear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndingGear);
	struct Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_EndingGear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_EndingGear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEndingGear, AEndingGear::StaticClass, TEXT("AEndingGear"), &Z_Registration_Info_UClass_AEndingGear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEndingGear), 4291128430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_EndingGear_h_3115108234(TEXT("/Script/Clock"),
		Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_EndingGear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_EndingGear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
