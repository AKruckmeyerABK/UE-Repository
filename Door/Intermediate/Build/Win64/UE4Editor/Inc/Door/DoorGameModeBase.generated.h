// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DOOR_DoorGameModeBase_generated_h
#error "DoorGameModeBase.generated.h already included, missing '#pragma once' in DoorGameModeBase.h"
#endif
#define DOOR_DoorGameModeBase_generated_h

#define Door_Source_Door_DoorGameModeBase_h_15_SPARSE_DATA
#define Door_Source_Door_DoorGameModeBase_h_15_RPC_WRAPPERS
#define Door_Source_Door_DoorGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Door_Source_Door_DoorGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorGameModeBase(); \
	friend struct Z_Construct_UClass_ADoorGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ADoorGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Door"), NO_API) \
	DECLARE_SERIALIZER(ADoorGameModeBase)


#define Door_Source_Door_DoorGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADoorGameModeBase(); \
	friend struct Z_Construct_UClass_ADoorGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ADoorGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Door"), NO_API) \
	DECLARE_SERIALIZER(ADoorGameModeBase)


#define Door_Source_Door_DoorGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorGameModeBase(ADoorGameModeBase&&); \
	NO_API ADoorGameModeBase(const ADoorGameModeBase&); \
public:


#define Door_Source_Door_DoorGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorGameModeBase(ADoorGameModeBase&&); \
	NO_API ADoorGameModeBase(const ADoorGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorGameModeBase)


#define Door_Source_Door_DoorGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Door_Source_Door_DoorGameModeBase_h_12_PROLOG
#define Door_Source_Door_DoorGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Door_Source_Door_DoorGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Door_Source_Door_DoorGameModeBase_h_15_SPARSE_DATA \
	Door_Source_Door_DoorGameModeBase_h_15_RPC_WRAPPERS \
	Door_Source_Door_DoorGameModeBase_h_15_INCLASS \
	Door_Source_Door_DoorGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Door_Source_Door_DoorGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Door_Source_Door_DoorGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Door_Source_Door_DoorGameModeBase_h_15_SPARSE_DATA \
	Door_Source_Door_DoorGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Door_Source_Door_DoorGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Door_Source_Door_DoorGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DOOR_API UClass* StaticClass<class ADoorGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Door_Source_Door_DoorGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
