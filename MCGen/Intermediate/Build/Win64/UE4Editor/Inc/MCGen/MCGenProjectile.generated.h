// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MCGEN_MCGenProjectile_generated_h
#error "MCGenProjectile.generated.h already included, missing '#pragma once' in MCGenProjectile.h"
#endif
#define MCGEN_MCGenProjectile_generated_h

#define MCGen_Source_MCGen_MCGenProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MCGen_Source_MCGen_MCGenProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define MCGen_Source_MCGen_MCGenProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMCGenProjectile(); \
	friend MCGEN_API class UClass* Z_Construct_UClass_AMCGenProjectile(); \
public: \
	DECLARE_CLASS(AMCGenProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MCGen"), NO_API) \
	DECLARE_SERIALIZER(AMCGenProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MCGen_Source_MCGen_MCGenProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMCGenProjectile(); \
	friend MCGEN_API class UClass* Z_Construct_UClass_AMCGenProjectile(); \
public: \
	DECLARE_CLASS(AMCGenProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MCGen"), NO_API) \
	DECLARE_SERIALIZER(AMCGenProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MCGen_Source_MCGen_MCGenProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMCGenProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMCGenProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMCGenProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCGenProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMCGenProjectile(AMCGenProjectile&&); \
	NO_API AMCGenProjectile(const AMCGenProjectile&); \
public:


#define MCGen_Source_MCGen_MCGenProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMCGenProjectile(AMCGenProjectile&&); \
	NO_API AMCGenProjectile(const AMCGenProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMCGenProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMCGenProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMCGenProjectile)


#define MCGen_Source_MCGen_MCGenProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMCGenProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMCGenProjectile, ProjectileMovement); }


#define MCGen_Source_MCGen_MCGenProjectile_h_9_PROLOG
#define MCGen_Source_MCGen_MCGenProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCGen_Source_MCGen_MCGenProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MCGen_Source_MCGen_MCGenProjectile_h_12_RPC_WRAPPERS \
	MCGen_Source_MCGen_MCGenProjectile_h_12_INCLASS \
	MCGen_Source_MCGen_MCGenProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MCGen_Source_MCGen_MCGenProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MCGen_Source_MCGen_MCGenProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	MCGen_Source_MCGen_MCGenProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MCGen_Source_MCGen_MCGenProjectile_h_12_INCLASS_NO_PURE_DECLS \
	MCGen_Source_MCGen_MCGenProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MCGen_Source_MCGen_MCGenProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
