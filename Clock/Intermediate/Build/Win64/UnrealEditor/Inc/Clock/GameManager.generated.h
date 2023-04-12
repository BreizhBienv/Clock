// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidgetComponent;
#ifdef CLOCK_GameManager_generated_h
#error "GameManager.generated.h already included, missing '#pragma once' in GameManager.h"
#endif
#define CLOCK_GameManager_generated_h

#define FID_Marouflards_Source_Clock_GameManager_h_14_SPARSE_DATA
#define FID_Marouflards_Source_Clock_GameManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEndMenu); \
	DECLARE_FUNCTION(execSetGameMenu); \
	DECLARE_FUNCTION(execGetEndBool);


#define FID_Marouflards_Source_Clock_GameManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEndMenu); \
	DECLARE_FUNCTION(execSetGameMenu); \
	DECLARE_FUNCTION(execGetEndBool);


#define FID_Marouflards_Source_Clock_GameManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define FID_Marouflards_Source_Clock_GameManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define FID_Marouflards_Source_Clock_GameManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameManager(AGameManager&&); \
	NO_API AGameManager(const AGameManager&); \
public:


#define FID_Marouflards_Source_Clock_GameManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameManager(AGameManager&&); \
	NO_API AGameManager(const AGameManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameManager)


#define FID_Marouflards_Source_Clock_GameManager_h_11_PROLOG
#define FID_Marouflards_Source_Clock_GameManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_GameManager_h_14_SPARSE_DATA \
	FID_Marouflards_Source_Clock_GameManager_h_14_RPC_WRAPPERS \
	FID_Marouflards_Source_Clock_GameManager_h_14_INCLASS \
	FID_Marouflards_Source_Clock_GameManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Marouflards_Source_Clock_GameManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_GameManager_h_14_SPARSE_DATA \
	FID_Marouflards_Source_Clock_GameManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_GameManager_h_14_INCLASS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_GameManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOCK_API UClass* StaticClass<class AGameManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Marouflards_Source_Clock_GameManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
