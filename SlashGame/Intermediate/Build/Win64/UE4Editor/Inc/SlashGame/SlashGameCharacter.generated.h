// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLASHGAME_SlashGameCharacter_generated_h
#error "SlashGameCharacter.generated.h already included, missing '#pragma once' in SlashGameCharacter.h"
#endif
#define SLASHGAME_SlashGameCharacter_generated_h

#define SlashGame_Source_SlashGame_SlashGameCharacter_h_12_RPC_WRAPPERS
#define SlashGame_Source_SlashGame_SlashGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SlashGame_Source_SlashGame_SlashGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlashGameCharacter(); \
	friend SLASHGAME_API class UClass* Z_Construct_UClass_ASlashGameCharacter(); \
public: \
	DECLARE_CLASS(ASlashGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SlashGame"), NO_API) \
	DECLARE_SERIALIZER(ASlashGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SlashGame_Source_SlashGame_SlashGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASlashGameCharacter(); \
	friend SLASHGAME_API class UClass* Z_Construct_UClass_ASlashGameCharacter(); \
public: \
	DECLARE_CLASS(ASlashGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SlashGame"), NO_API) \
	DECLARE_SERIALIZER(ASlashGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SlashGame_Source_SlashGame_SlashGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASlashGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASlashGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlashGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlashGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlashGameCharacter(ASlashGameCharacter&&); \
	NO_API ASlashGameCharacter(const ASlashGameCharacter&); \
public:


#define SlashGame_Source_SlashGame_SlashGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASlashGameCharacter(ASlashGameCharacter&&); \
	NO_API ASlashGameCharacter(const ASlashGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlashGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlashGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlashGameCharacter)


#define SlashGame_Source_SlashGame_SlashGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASlashGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASlashGameCharacter, FollowCamera); }


#define SlashGame_Source_SlashGame_SlashGameCharacter_h_9_PROLOG
#define SlashGame_Source_SlashGame_SlashGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlashGame_Source_SlashGame_SlashGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SlashGame_Source_SlashGame_SlashGameCharacter_h_12_RPC_WRAPPERS \
	SlashGame_Source_SlashGame_SlashGameCharacter_h_12_INCLASS \
	SlashGame_Source_SlashGame_SlashGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SlashGame_Source_SlashGame_SlashGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlashGame_Source_SlashGame_SlashGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SlashGame_Source_SlashGame_SlashGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SlashGame_Source_SlashGame_SlashGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	SlashGame_Source_SlashGame_SlashGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SlashGame_Source_SlashGame_SlashGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
