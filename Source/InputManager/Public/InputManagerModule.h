#pragma once

#include "ModuleManager.h"

class FInputManagerModule : public IModuleInterface {

public:

	void StartupModule();
	void ShutdownModule();

};