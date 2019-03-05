// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
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
#ifdef PAINTBALL_TILTON_Paintball_TiltonProjectile_generated_h
#error "Paintball_TiltonProjectile.generated.h already included, missing '#pragma once' in Paintball_TiltonProjectile.h"
#endif
#define PAINTBALL_TILTON_Paintball_TiltonProjectile_generated_h

#define Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_RPC_WRAPPERS \
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
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaintball_TiltonProjectile(); \
	friend PAINTBALL_TILTON_API class UClass* Z_Construct_UClass_APaintball_TiltonProjectile(); \
public: \
	DECLARE_CLASS(APaintball_TiltonProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Paintball_Tilton"), NO_API) \
	DECLARE_SERIALIZER(APaintball_TiltonProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPaintball_TiltonProjectile(); \
	friend PAINTBALL_TILTON_API class UClass* Z_Construct_UClass_APaintball_TiltonProjectile(); \
public: \
	DECLARE_CLASS(APaintball_TiltonProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Paintball_Tilton"), NO_API) \
	DECLARE_SERIALIZER(APaintball_TiltonProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaintball_TiltonProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaintball_TiltonProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaintball_TiltonProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaintball_TiltonProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaintball_TiltonProjectile(APaintball_TiltonProjectile&&); \
	NO_API APaintball_TiltonProjectile(const APaintball_TiltonProjectile&); \
public:


#define Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaintball_TiltonProjectile(APaintball_TiltonProjectile&&); \
	NO_API APaintball_TiltonProjectile(const APaintball_TiltonProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaintball_TiltonProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaintball_TiltonProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaintball_TiltonProjectile)


#define Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APaintball_TiltonProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APaintball_TiltonProjectile, ProjectileMovement); }


#define Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_9_PROLOG
#define Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_RPC_WRAPPERS \
	Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_INCLASS \
	Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Paintball_Tilton_Source_Paintball_Tilton_Paintball_TiltonProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
