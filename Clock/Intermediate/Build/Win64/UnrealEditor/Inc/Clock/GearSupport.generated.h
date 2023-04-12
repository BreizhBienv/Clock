// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CLOCK_GearSupport_generated_h
#error "GearSupport.generated.h already included, missing '#pragma once' in GearSupport.h"
#endif
#define CLOCK_GearSupport_generated_h

#define FID_Marouflards_Source_Clock_GearSupport_h_12_SPARSE_DATA
#define FID_Marouflards_Source_Clock_GearSupport_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Marouflards_Source_Clock_GearSupport_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Marouflards_Source_Clock_GearSupport_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGearSupport(); \
	friend struct Z_Construct_UClass_AGearSupport_Statics; \
public: \
	DECLARE_CLASS(AGearSupport, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(AGearSupport)


#define FID_Marouflards_Source_Clock_GearSupport_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGearSupport(); \
	friend struct Z_Construct_UClass_AGearSupport_Statics; \
public: \
	DECLARE_CLASS(AGearSupport, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(AGearSupport)


#define FID_Marouflards_Source_Clock_GearSupport_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGearSupport(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGearSupport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGearSupport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGearSupport); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGearSupport(AGearSupport&&); \
	NO_API AGearSupport(const AGearSupport&); \
public:


#define FID_Marouflards_Source_Clock_GearSupport_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGearSupport(AGearSupport&&); \
	NO_API AGearSupport(const AGearSupport&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGearSupport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGearSupport); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGearSupport)


#define FID_Marouflards_Source_Clock_GearSupport_h_9_PROLOG
#define FID_Marouflards_Source_Clock_GearSupport_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_GearSupport_h_12_SPARSE_DATA \
	FID_Marouflards_Source_Clock_GearSupport_h_12_RPC_WRAPPERS \
	FID_Marouflards_Source_Clock_GearSupport_h_12_INCLASS \
	FID_Marouflards_Source_Clock_GearSupport_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Marouflards_Source_Clock_GearSupport_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_GearSupport_h_12_SPARSE_DATA \
	FID_Marouflards_Source_Clock_GearSupport_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_GearSupport_h_12_INCLASS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_GearSupport_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOCK_API UClass* StaticClass<class AGearSupport>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Marouflards_Source_Clock_GearSupport_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
