// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

DECLARE_LOG_CATEGORY_EXTERN(LogContactGlove, Log, All);

#include "ContactGloveInputDevice.h"
#include "IInputDeviceModule.h"
#include "Modules/ModuleManager.h"


class FContactGlovePluginModule : public IInputDeviceModule
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	static FContactGlovePluginModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FContactGlovePluginModule>("ContactGlovePlugin");
	}

	static bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("ContactGlovePlugin");
	}
	
	virtual TSharedPtr<IInputDevice> CreateInputDevice(
		const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler) override;

	TSharedPtr<class FContactGloveInputDevice> GetInputDevice();
	
private:
	TSharedPtr<class FContactGloveInputDevice> ContactGloveInputDevice;

	TArray<UContactGloveComponent*>  DeferredComponentList;
};
