// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MCGEN_MCGenGameMode_generated_h
#error "MCGenGameMode.generated.h already included, missing '#pragma once' in MCGenGameMode.h"
#endif
#define MCGEN_MCGenGameMode_generated_h

#define MCGen_Source_MCGen_MCGenGameMode_h_12_RPC_WRAPPERS
#define MCGen_Source_MCGen_MCGenGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MCGen_Source_MCGen_MCGenGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMCGenGameMode(); \
	friend MCGEN_API class UClass* Z_Construct_UClass_AMCGenGameMode(); \
public: \
	DECLARE_CLASS(AMCGenGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MCGen"), MCGEN_API) \
	DECLARE_SERIALIZER(AMCGenGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MCGen_Source_MCGen_MCGenGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMCGenGameMode(); \
	friend MCGEN_API class UClass* Z_Construct_UClass_AMCGenGameMode(); \
public: \
	DECLARE_CLASS(AMCGenGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MCGen"), MCGEN_API) \
	DECLARE_SERIALIZER(AMCGenGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MCGen_Source_MCGen_MCGenGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MCGEN_API AMCGenGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMCGenGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MCGEN_API, AMCGenGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCGenGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MCGEN_API AMCGenGameMode(AMCGenGameMode&&); \
	MCGEN_API AMCGenGameMode(const AMCGenGameMode&); \
public:


#define MCGen_Source_MCGen_MCGenGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MCGEN_API AMCGenGameMode(AMCGenGameMode&&); \
	MCGEN_API AMCGenGameMode(const AMCGenGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MCGEN_API, AMCGenGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCGenGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMCGenGameMode)


#define MCGen_Source_MCGen_MCGenGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define MCGen_Source_MCGen_MCGenGameMode_h_9_PROLOG
#define MCGen_Source_MCGen_MCGenGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCGen_Source_MCGen_MCGenGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	MCGen_Source_MCGen_MCGenGameMode_h_12_RPC_WRAPPERS \
	MCGen_Source_MCGen_MCGenGameMode_h_12_INCLASS \
	MCGen_Source_MCGen_MCGenGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MCGen_Source_MCGen_MCGenGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCGen_Source_MCGen_MCGenGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	MCGen_Source_MCGen_MCGenGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MCGen_Source_MCGen_MCGenGameMode_h_12_INCLASS_NO_PURE_DECLS \
	MCGen_Source_MCGen_MCGenGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MCGen_Source_MCGen_MCGenGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
