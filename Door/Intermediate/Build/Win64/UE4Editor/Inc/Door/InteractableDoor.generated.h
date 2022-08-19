// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DOOR_InteractableDoor_generated_h
#error "InteractableDoor.generated.h already included, missing '#pragma once' in InteractableDoor.h"
#endif
#define DOOR_InteractableDoor_generated_h

#define Door_Source_Door_Public_InteractableDoor_h_17_SPARSE_DATA
#define Door_Source_Door_Public_InteractableDoor_h_17_RPC_WRAPPERS
#define Door_Source_Door_Public_InteractableDoor_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Door_Source_Door_Public_InteractableDoor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableDoor(); \
	friend struct Z_Construct_UClass_AInteractableDoor_Statics; \
public: \
	DECLARE_CLASS(AInteractableDoor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Door"), NO_API) \
	DECLARE_SERIALIZER(AInteractableDoor)


#define Door_Source_Door_Public_InteractableDoor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAInteractableDoor(); \
	friend struct Z_Construct_UClass_AInteractableDoor_Statics; \
public: \
	DECLARE_CLASS(AInteractableDoor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Door"), NO_API) \
	DECLARE_SERIALIZER(AInteractableDoor)


#define Door_Source_Door_Public_InteractableDoor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractableDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractableDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableDoor(AInteractableDoor&&); \
	NO_API AInteractableDoor(const AInteractableDoor&); \
public:


#define Door_Source_Door_Public_InteractableDoor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableDoor(AInteractableDoor&&); \
	NO_API AInteractableDoor(const AInteractableDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableDoor)


#define Door_Source_Door_Public_InteractableDoor_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DoorInteractionComponent() { return STRUCT_OFFSET(AInteractableDoor, DoorInteractionComponent); }


#define Door_Source_Door_Public_InteractableDoor_h_14_PROLOG
#define Door_Source_Door_Public_InteractableDoor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Door_Source_Door_Public_InteractableDoor_h_17_PRIVATE_PROPERTY_OFFSET \
	Door_Source_Door_Public_InteractableDoor_h_17_SPARSE_DATA \
	Door_Source_Door_Public_InteractableDoor_h_17_RPC_WRAPPERS \
	Door_Source_Door_Public_InteractableDoor_h_17_INCLASS \
	Door_Source_Door_Public_InteractableDoor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Door_Source_Door_Public_InteractableDoor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Door_Source_Door_Public_InteractableDoor_h_17_PRIVATE_PROPERTY_OFFSET \
	Door_Source_Door_Public_InteractableDoor_h_17_SPARSE_DATA \
	Door_Source_Door_Public_InteractableDoor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Door_Source_Door_Public_InteractableDoor_h_17_INCLASS_NO_PURE_DECLS \
	Door_Source_Door_Public_InteractableDoor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DOOR_API UClass* StaticClass<class AInteractableDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Door_Source_Door_Public_InteractableDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
