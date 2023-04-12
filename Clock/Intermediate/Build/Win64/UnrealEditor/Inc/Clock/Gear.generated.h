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
#ifdef CLOCK_Gear_generated_h
#error "Gear.generated.h already included, missing '#pragma once' in Gear.h"
#endif
#define CLOCK_Gear_generated_h

#define FID_Marouflards_Source_Clock_Gear_h_12_SPARSE_DATA
#define FID_Marouflards_Source_Clock_Gear_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopRotatingMovement); \
	DECLARE_FUNCTION(execPropagateSpeed); \
	DECLARE_FUNCTION(execOnGearTeethOverlapEnd); \
	DECLARE_FUNCTION(execOnGearTeethOverlapBegin); \
	DECLARE_FUNCTION(execOnGearOverlapEnd); \
	DECLARE_FUNCTION(execOnGearOverlapBegin);


#define FID_Marouflards_Source_Clock_Gear_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopRotatingMovement); \
	DECLARE_FUNCTION(execPropagateSpeed); \
	DECLARE_FUNCTION(execOnGearTeethOverlapEnd); \
	DECLARE_FUNCTION(execOnGearTeethOverlapBegin); \
	DECLARE_FUNCTION(execOnGearOverlapEnd); \
	DECLARE_FUNCTION(execOnGearOverlapBegin);


#define FID_Marouflards_Source_Clock_Gear_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGear(); \
	friend struct Z_Construct_UClass_AGear_Statics; \
public: \
	DECLARE_CLASS(AGear, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(AGear)


#define FID_Marouflards_Source_Clock_Gear_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGear(); \
	friend struct Z_Construct_UClass_AGear_Statics; \
public: \
	DECLARE_CLASS(AGear, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Clock"), NO_API) \
	DECLARE_SERIALIZER(AGear)


#define FID_Marouflards_Source_Clock_Gear_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGear(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGear) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGear); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGear); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGear(AGear&&); \
	NO_API AGear(const AGear&); \
public:


#define FID_Marouflards_Source_Clock_Gear_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGear(AGear&&); \
	NO_API AGear(const AGear&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGear); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGear); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGear)


#define FID_Marouflards_Source_Clock_Gear_h_9_PROLOG
#define FID_Marouflards_Source_Clock_Gear_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_Gear_h_12_SPARSE_DATA \
	FID_Marouflards_Source_Clock_Gear_h_12_RPC_WRAPPERS \
	FID_Marouflards_Source_Clock_Gear_h_12_INCLASS \
	FID_Marouflards_Source_Clock_Gear_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Marouflards_Source_Clock_Gear_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Marouflards_Source_Clock_Gear_h_12_SPARSE_DATA \
	FID_Marouflards_Source_Clock_Gear_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_Gear_h_12_INCLASS_NO_PURE_DECLS \
	FID_Marouflards_Source_Clock_Gear_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOCK_API UClass* StaticClass<class AGear>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Marouflards_Source_Clock_Gear_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
