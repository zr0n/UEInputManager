/*
* This file is part of the UEInputManager distribution (https://github.com/zr0n/UEInputManager or https://zr0n.github.io/blog/inputmanager/).
* Copyright (c) 2018 Luiz Fernando.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, version 3.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
#include "InputManagerModule.h"
#include "InputManagerLibrary.h"


#include "Runtime/CoreUObject/Public/UObject/UObjectIterator.h"

 
UInputManagerLibrary::UInputManagerLibrary(const FObjectInitializer& Initializer) {

}

bool UInputManagerLibrary::ReBindAxisKey(FInputAxisKeyMapping NewBinding)
{
	UInputSettings* Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
	if (!Settings) return false;

	TArray<FInputAxisKeyMapping>& Axi = Settings->AxisMappings;


	bool Found = false;
	for (FInputAxisKeyMapping& Each : Axi)
	{
		if (Each.AxisName.ToString().Equals(NewBinding.AxisName.ToString()) && Each.Scale == NewBinding.Scale)
		{
			Each.Key = NewBinding.Key;
			Found = true;
			break;
		}
	}

	if (Found)
	{
		//Persistence (Save to disk)
		const_cast<UInputSettings*>(Settings)->SaveKeyMappings();

		//Save in Saved/Config/Windows/Input.ini
		for (TObjectIterator<UPlayerInput> It; It; ++It)
		{
			It->ForceRebuildingKeyMaps(true);
		}
	}
	return Found;
}

bool UInputManagerLibrary::ReBindActionKey(FInputActionKeyMapping NewBinding)
{
	UInputSettings* Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
	if (!Settings) return false;

	TArray<FInputActionKeyMapping>& Actions = Settings->ActionMappings;

	bool Found = false;
	for (FInputActionKeyMapping& Each : Actions)
	{
		if (Each.ActionName.ToString().Equals(NewBinding.ActionName.ToString())
			) {
			Each = NewBinding;
			Found = true;
			break;
		}
	}

	if (Found)
	{
		//Persistence
		const_cast<UInputSettings*>(Settings)->SaveKeyMappings();

		//Save in Saved/Config/Windows/Input.ini
		for (TObjectIterator<UPlayerInput> It; It; ++It)
		{
			It->ForceRebuildingKeyMaps(true);
		}
	}
	return Found;
}

void UInputManagerLibrary::GetActionKeyByName(FName ActionName, bool & Found, FInputActionKeyMapping & Key)
{
	Found = false;
	UInputSettings* Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
	if (!Settings) return;

	TArray<FInputActionKeyMapping>& Actions = Settings->ActionMappings;

	
	for (const FInputActionKeyMapping&  Each : Actions)
	{
		if (Each.ActionName.ToString().Equals(ActionName.ToString())) {
			Key = Each;
			Found = true;
			break;
		}
	}

}

void UInputManagerLibrary::GetAxisKeyByName(FName ActionName, float AxisValue, bool & Found, FInputAxisKeyMapping & Key)
{
	Found = false;
	UInputSettings* Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
	if (!Settings) return;

	TArray<FInputAxisKeyMapping>& Axis = Settings->AxisMappings;


	for (const FInputAxisKeyMapping& Each : Axis)
	{
		if (Each.AxisName.ToString().Equals(ActionName.ToString()) && Each.Scale == AxisValue) {
			Key = Each;
			Found = true;
			break;
		}
	}
}

void UInputManagerLibrary::GetAllActionKeys(TArray<FInputActionKeyMapping>& Keys)
{
	Keys.Empty();
	UInputSettings* Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
	if (!Settings) return;

	Keys = Settings->ActionMappings;
}

void UInputManagerLibrary::GetAllAxisKeys(TArray<FInputAxisKeyMapping>& Keys)
{
	Keys.Empty();
	UInputSettings* Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
	if (!Settings) return;

	Keys = Settings->AxisMappings;
}
