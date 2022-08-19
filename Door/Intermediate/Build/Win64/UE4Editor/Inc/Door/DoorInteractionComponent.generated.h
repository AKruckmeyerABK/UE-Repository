// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DOOR_DoorInteractionComponent_generated_h
#error "DoorInteractionComponent.generated.h already included, missing '#pragma once' in DoorInteractionComponent.h"
#endif
#define DOOR_DoorInteractionComponent_generated_h

#define Door_Source_Door_Public_DoorInteractionComponent_h_16_SPARSE_DATA
#define Door_Source_Door_Public_DoorInteractionComponent_h_16_RPC_WRAPPERS
#define Door_Source_Door_Public_DoorInteractionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Door_Source_Door_Public_DoorInteractionComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorInteractionComponent(); \
	friend struct Z_Construct_UClass_UDoorInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Door"), NO_API) \
	DECLARE_SERIALIZER(UDoorInteractionComponent)


#define Door_Source_Door_Public_DoorInteractionComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDoorInteractionComponent(); \
	friend struct Z_Construct_UClass_UDoorInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Door"), NO_API) \
	DECLARE_SERIALIZER(UDoorInteractionComponent)


#define Door_Source_Door_Public_DoorInteractionComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorInteractionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorInteractionComponent(UDoorInteractionComponent&&); \
	NO_API UDoorInteractionComponent(const UDoorInteractionComponent&); \
public:


#define Door_Source_Door_Public_DoorInteractionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorInteractionComponent(UDoorInteractionComponent&&); \
	NO_API UDoorInteractionComponent(const UDoorInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorInteractionComponent)


#define Door_Source_Door_Public_DoorInteractionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__desiredRotation() { return STRUCT_OFFSET(UDoorInteractionComponent, desiredRotation); } \
	FORCEINLINE static uint32 __PPO__timeToRotate() { return STRUCT_OFFSET(UDoorInteractionComponent, timeToRotate); } \
	FORCEINLINE static uint32 __PPO__triggerBox() { return STRUCT_OFFSET(UDoorInteractionComponent, triggerBox); } \
	FORCEINLINE static uint32 __PPO__openCurve() { return STRUCT_OFFSET(UDoorInteractionComponent, openCurve); }


#define Door_Source_Door_Public_DoorInteractionComponent_h_13_PROLOG
#define Door_Source_Door_Public_DoorInteractionComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Door_Source_Door_Public_DoorInteractionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	Door_Source_Door_Public_DoorInteractionComponent_h_16_SPARSE_DATA \
	Door_Source_Door_Public_DoorInteractionComponent_h_16_RPC_WRAPPERS \
	Door_Source_Door_Public_DoorInteractionComponent_h_16_INCLASS \
	Door_Source_Door_Public_DoorInteractionComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Door_Source_Door_Public_DoorInteractionComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Door_Source_Door_Public_DoorInteractionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	Door_Source_Door_Public_DoorInteractionComponent_h_16_SPARSE_DATA \
	Door_Source_Door_Public_DoorInteractionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Door_Source_Door_Public_DoorInteractionComponent_h_16_INCLASS_NO_PURE_DECLS \
	Door_Source_Door_Public_DoorInteractionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DOOR_API UClass* StaticClass<class UDoorInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Door_Source_Door_Public_DoorInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
