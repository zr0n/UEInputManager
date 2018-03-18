// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputAxisKeyMapping;
struct FInputActionKeyMapping;
#ifdef INPUTMANAGER_InputManagerLibrary_generated_h
#error "InputManagerLibrary.generated.h already included, missing '#pragma once' in InputManagerLibrary.h"
#endif
#define INPUTMANAGER_InputManagerLibrary_generated_h

#define InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllAxisKeys) \
	{ \
		P_GET_TARRAY_REF(FInputAxisKeyMapping,Z_Param_Out_Keys); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInputManagerLibrary::GetAllAxisKeys(Z_Param_Out_Keys); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActionKeys) \
	{ \
		P_GET_TARRAY_REF(FInputActionKeyMapping,Z_Param_Out_Keys); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInputManagerLibrary::GetAllActionKeys(Z_Param_Out_Keys); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisKeyByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_GET_UBOOL_REF(Z_Param_Out_Found); \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInputManagerLibrary::GetAxisKeyByName(Z_Param_ActionName,Z_Param_AxisValue,Z_Param_Out_Found,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActionKeyByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_GET_UBOOL_REF(Z_Param_Out_Found); \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInputManagerLibrary::GetActionKeyByName(Z_Param_ActionName,Z_Param_Out_Found,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReBindActionKey) \
	{ \
		P_GET_STRUCT(FInputActionKeyMapping,Z_Param_NewBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UInputManagerLibrary::ReBindActionKey(Z_Param_NewBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReBindAxisKey) \
	{ \
		P_GET_STRUCT(FInputAxisKeyMapping,Z_Param_NewBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UInputManagerLibrary::ReBindAxisKey(Z_Param_NewBinding); \
		P_NATIVE_END; \
	}


#define InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllAxisKeys) \
	{ \
		P_GET_TARRAY_REF(FInputAxisKeyMapping,Z_Param_Out_Keys); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInputManagerLibrary::GetAllAxisKeys(Z_Param_Out_Keys); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActionKeys) \
	{ \
		P_GET_TARRAY_REF(FInputActionKeyMapping,Z_Param_Out_Keys); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInputManagerLibrary::GetAllActionKeys(Z_Param_Out_Keys); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAxisKeyByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AxisValue); \
		P_GET_UBOOL_REF(Z_Param_Out_Found); \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInputManagerLibrary::GetAxisKeyByName(Z_Param_ActionName,Z_Param_AxisValue,Z_Param_Out_Found,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActionKeyByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActionName); \
		P_GET_UBOOL_REF(Z_Param_Out_Found); \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UInputManagerLibrary::GetActionKeyByName(Z_Param_ActionName,Z_Param_Out_Found,Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReBindActionKey) \
	{ \
		P_GET_STRUCT(FInputActionKeyMapping,Z_Param_NewBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UInputManagerLibrary::ReBindActionKey(Z_Param_NewBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReBindAxisKey) \
	{ \
		P_GET_STRUCT(FInputAxisKeyMapping,Z_Param_NewBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UInputManagerLibrary::ReBindAxisKey(Z_Param_NewBinding); \
		P_NATIVE_END; \
	}


#define InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputManagerLibrary(); \
	friend INPUTMANAGER_API class UClass* Z_Construct_UClass_UInputManagerLibrary(); \
public: \
	DECLARE_CLASS(UInputManagerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/InputManager"), NO_API) \
	DECLARE_SERIALIZER(UInputManagerLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUInputManagerLibrary(); \
	friend INPUTMANAGER_API class UClass* Z_Construct_UClass_UInputManagerLibrary(); \
public: \
	DECLARE_CLASS(UInputManagerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/InputManager"), NO_API) \
	DECLARE_SERIALIZER(UInputManagerLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputManagerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputManagerLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputManagerLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputManagerLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputManagerLibrary(UInputManagerLibrary&&); \
	NO_API UInputManagerLibrary(const UInputManagerLibrary&); \
public:


#define InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputManagerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputManagerLibrary(UInputManagerLibrary&&); \
	NO_API UInputManagerLibrary(const UInputManagerLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputManagerLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputManagerLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputManagerLibrary)


#define InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_PRIVATE_PROPERTY_OFFSET
#define InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_10_PROLOG
#define InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_RPC_WRAPPERS \
	InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_INCLASS \
	InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_INCLASS_NO_PURE_DECLS \
	InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InputManagerLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InputManagerDemo_Plugins_InputManager_Source_InputManager_Public_InputManagerLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
