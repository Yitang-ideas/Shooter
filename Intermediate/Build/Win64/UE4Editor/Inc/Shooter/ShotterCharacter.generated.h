// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_ShotterCharacter_generated_h
#error "ShotterCharacter.generated.h already included, missing '#pragma once' in ShotterCharacter.h"
#endif
#define SHOOTER_ShotterCharacter_generated_h

#define Shooter_Source_Shooter_ShotterCharacter_h_12_SPARSE_DATA
#define Shooter_Source_Shooter_ShotterCharacter_h_12_RPC_WRAPPERS
#define Shooter_Source_Shooter_ShotterCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_ShotterCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShotterCharacter(); \
	friend struct Z_Construct_UClass_AShotterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShotterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShotterCharacter)


#define Shooter_Source_Shooter_ShotterCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShotterCharacter(); \
	friend struct Z_Construct_UClass_AShotterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShotterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShotterCharacter)


#define Shooter_Source_Shooter_ShotterCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShotterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShotterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShotterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShotterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShotterCharacter(AShotterCharacter&&); \
	NO_API AShotterCharacter(const AShotterCharacter&); \
public:


#define Shooter_Source_Shooter_ShotterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShotterCharacter(AShotterCharacter&&); \
	NO_API AShotterCharacter(const AShotterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShotterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShotterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShotterCharacter)


#define Shooter_Source_Shooter_ShotterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AShotterCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AShotterCharacter, FollowCamera); }


#define Shooter_Source_Shooter_ShotterCharacter_h_9_PROLOG
#define Shooter_Source_Shooter_ShotterCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_ShotterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_ShotterCharacter_h_12_SPARSE_DATA \
	Shooter_Source_Shooter_ShotterCharacter_h_12_RPC_WRAPPERS \
	Shooter_Source_Shooter_ShotterCharacter_h_12_INCLASS \
	Shooter_Source_Shooter_ShotterCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_ShotterCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_ShotterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_ShotterCharacter_h_12_SPARSE_DATA \
	Shooter_Source_Shooter_ShotterCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_ShotterCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_ShotterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class AShotterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_ShotterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
