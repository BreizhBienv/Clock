// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Clock/GameManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}
// Cross Module References
	CLOCK_API UClass* Z_Construct_UClass_AGameManager_NoRegister();
	CLOCK_API UClass* Z_Construct_UClass_AGameManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Clock();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameManager::execSetEndMenu)
	{
		P_GET_OBJECT(UWidgetComponent,Z_Param_widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndMenu(Z_Param_widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameManager::execSetGameMenu)
	{
		P_GET_OBJECT(UWidgetComponent,Z_Param_widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameMenu(Z_Param_widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameManager::execGetEndBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEndBool();
		P_NATIVE_END;
	}
	void AGameManager::StaticRegisterNativesAGameManager()
	{
		UClass* Class = AGameManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEndBool", &AGameManager::execGetEndBool },
			{ "SetEndMenu", &AGameManager::execSetEndMenu },
			{ "SetGameMenu", &AGameManager::execSetGameMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameManager_GetEndBool_Statics
	{
		struct GameManager_eventGetEndBool_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameManager_GetEndBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameManager_eventGetEndBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameManager_GetEndBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameManager_eventGetEndBool_Parms), &Z_Construct_UFunction_AGameManager_GetEndBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameManager_GetEndBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_GetEndBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_GetEndBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameManager_GetEndBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameManager, nullptr, "GetEndBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameManager_GetEndBool_Statics::GameManager_eventGetEndBool_Parms), Z_Construct_UFunction_AGameManager_GetEndBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_GetEndBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameManager_GetEndBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_GetEndBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameManager_GetEndBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameManager_GetEndBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameManager_SetEndMenu_Statics
	{
		struct GameManager_eventSetEndMenu_Parms
		{
			UWidgetComponent* widget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManager_eventSetEndMenu_Parms, widget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::NewProp_widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::NewProp_widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::NewProp_widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameManager, nullptr, "SetEndMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::GameManager_eventSetEndMenu_Parms), Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameManager_SetEndMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameManager_SetEndMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameManager_SetGameMenu_Statics
	{
		struct GameManager_eventSetGameMenu_Parms
		{
			UWidgetComponent* widget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManager_eventSetGameMenu_Parms, widget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::NewProp_widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::NewProp_widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::NewProp_widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameManager, nullptr, "SetGameMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::GameManager_eventSetGameMenu_Parms), Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameManager_SetGameMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameManager_SetGameMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameManager);
	UClass* Z_Construct_UClass_AGameManager_NoRegister()
	{
		return AGameManager::StaticClass();
	}
	struct Z_Construct_UClass_AGameManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Clock,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameManager_GetEndBool, "GetEndBool" }, // 2536248040
		{ &Z_Construct_UFunction_AGameManager_SetEndMenu, "SetEndMenu" }, // 912771943
		{ &Z_Construct_UFunction_AGameManager_SetGameMenu, "SetGameMenu" }, // 2265930272
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameManager.h" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameManager_Statics::ClassParams = {
		&AGameManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameManager()
	{
		if (!Z_Registration_Info_UClass_AGameManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameManager.OuterSingleton, Z_Construct_UClass_AGameManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameManager.OuterSingleton;
	}
	template<> CLOCK_API UClass* StaticClass<AGameManager>()
	{
		return AGameManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameManager);
	struct Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_GameManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_GameManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameManager, AGameManager::StaticClass, TEXT("AGameManager"), &Z_Registration_Info_UClass_AGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameManager), 792109716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_GameManager_h_3043443647(TEXT("/Script/Clock"),
		Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_GameManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Marouflards_Source_Clock_GameManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
