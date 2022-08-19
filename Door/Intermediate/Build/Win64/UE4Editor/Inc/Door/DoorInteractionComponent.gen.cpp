// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Door/Public/DoorInteractionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorInteractionComponent() {}
// Cross Module References
	DOOR_API UClass* Z_Construct_UClass_UDoorInteractionComponent_NoRegister();
	DOOR_API UClass* Z_Construct_UClass_UDoorInteractionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Door();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	void UDoorInteractionComponent::StaticRegisterNativesUDoorInteractionComponent()
	{
	}
	UClass* Z_Construct_UClass_UDoorInteractionComponent_NoRegister()
	{
		return UDoorInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDoorInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_desiredRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_desiredRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeToRotate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeToRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_triggerBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_openCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_openCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Door,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_desiredRotation_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_desiredRotation = { "desiredRotation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractionComponent, desiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_desiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_desiredRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_timeToRotate_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_timeToRotate = { "timeToRotate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractionComponent, timeToRotate), METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_timeToRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_timeToRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_triggerBox_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_triggerBox = { "triggerBox", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractionComponent, triggerBox), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_triggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_triggerBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_openCurve_MetaData[] = {
		{ "Category", "DoorInteractionComponent" },
		{ "ModuleRelativePath", "Public/DoorInteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_openCurve = { "openCurve", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractionComponent, openCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_openCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_openCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorInteractionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_desiredRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_timeToRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_triggerBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractionComponent_Statics::NewProp_openCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorInteractionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorInteractionComponent_Statics::ClassParams = {
		&UDoorInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoorInteractionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoorInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorInteractionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoorInteractionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorInteractionComponent, 2951147123);
	template<> DOOR_API UClass* StaticClass<UDoorInteractionComponent>()
	{
		return UDoorInteractionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorInteractionComponent(Z_Construct_UClass_UDoorInteractionComponent, &UDoorInteractionComponent::StaticClass, TEXT("/Script/Door"), TEXT("UDoorInteractionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorInteractionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
