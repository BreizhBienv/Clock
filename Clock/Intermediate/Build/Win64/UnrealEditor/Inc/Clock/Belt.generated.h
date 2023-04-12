// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOCK_Belt_generated_h
#error "Belt.generated.h already included, missing '#pragma once' in Belt.h"
#endif
#define CLOCK_Belt_generated_h

#define FID_Marouflards_Source_Clock_Belt_h_14_SPARSE_DATA
#define FID_Marouflards_Source_Clock_Belt_h_14_RPC_WRAPPERS
#define FID_Marouflards_Source_Clock_Belt_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Marouflards_Source_Clock_Belt_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABelt(); \
	friend struct Z_Construct_UClass_ABelt_Statics; \
public: \
	DECLARE_CLASS(ABelt, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(ABelt)


#define FID_Marouflards_Source_Clock_Belt_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABelt(); \
	friend struct Z_Construct_UClass_ABelt_Statics; \
public: \
	DECLARE_CLASS(ABelt, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(ABelt)


#define FID_Marouflards_Source_Clock_Belt_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABelt(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABelt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABelt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABelt); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABelt(ABelt&&); \
	NO_API ABelt(const ABelt&); \
public:


#define FID_Marouflards_Source_Clock_Belt_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABelt(ABelt&&); \
	NO_API ABelt(const ABelt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABelt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABelt); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABelt)


#define FID_Marouflards_Source_Clock_Belt_h_11_PROLOG
#define FID_Marouflards_Source_Clock_Belt_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_Belt_h_14_SPARSE_DATA \
	FID_Marouflards_Source_Clock_Belt_h_14_RPC_WRAPPERS \
	FID_Marouflards_Source_Clock_Belt_h_14_INCLASS \
	FID_Marouflards_Source_Clock_Belt_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Marouflards_Source_Clock_Belt_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_Belt_h_14_SPARSE_DATA \
	FID_Marouflards_Source_Clock_Belt_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_Belt_h_14_INCLASS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_Belt_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOCK_API UClass* StaticClass<class ABelt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Marouflards_Source_Clock_Belt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
