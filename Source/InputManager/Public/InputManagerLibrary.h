#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/InputSettings.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "InputManagerLibrary.generated.h"

UCLASS()
class UInputManagerLibrary : public UBlueprintFunctionLibrary{
	GENERATED_UCLASS_BODY()
    public:

        /** Static Functions */
        UFUNCTION(BlueprintCallable, Category = "Input Manager")
		    static bool ReBindAxisKey(FInputAxisKeyMapping NewBinding);

        UFUNCTION(BlueprintCallable, Category = "Input Manager")
            static bool ReBindActionKey(FInputActionKeyMapping NewBinding);

        UFUNCTION(BlueprintPure, Category = "Input Manager")
            static void GetActionKeyByName(FName ActionName, bool& Found, FInputActionKeyMapping& Key);

        UFUNCTION(BlueprintPure, Category = "Input Manager")
            static void GetAxisKeyByName(FName ActionName, float AxisValue,  bool& Found, FInputAxisKeyMapping& Key);

        UFUNCTION(BlueprintPure, Category = "Input Manager")
            static void GetAllActionKeys(TArray<FInputActionKeyMapping>& Keys);

        UFUNCTION(BlueprintPure, Category = "Input Manager")
            static void GetAllAxisKeys(TArray<FInputAxisKeyMapping>& Keys);
};
