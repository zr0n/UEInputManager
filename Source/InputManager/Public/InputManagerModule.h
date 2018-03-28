/*
* This file is part of the UEInputManager distribution (https://github.com/zr0n/UEInputManager or https://zr0n.github.io/blog/inputmanager/).
* Copyright (c) 2018 Luiz Fernando.
*/
#pragma once
#include "InputManagerModule.h"
#include "InputManagerPrivatePCH.h"
#include "ModuleManager.h"

class FInputManagerModule : public IModuleInterface {

public:

	void StartupModule();
	void ShutdownModule();

};