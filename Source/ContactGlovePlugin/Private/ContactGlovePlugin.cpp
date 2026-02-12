// Copyright Epic Games, Inc. All Rights Reserved.

#include "ContactGlovePlugin.h"
#include "ContactGloveInputDevice.h"

#define LOCTEXT_NAMESPACE "FContactGlovePluginModule"

void FContactGlovePluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	IInputDeviceModule::StartupModule();
}

void FContactGlovePluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	IInputDeviceModule::ShutdownModule();
	if(ContactGloveInputDevice)
	{
		ContactGloveInputDevice->Disconnect();
	}
}

TSharedPtr<IInputDevice> FContactGlovePluginModule::CreateInputDevice(
	const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler)
{
	if (!ContactGloveInputDevice.IsValid())
	{
		ContactGloveInputDevice = MakeShareable(new FContactGloveInputDevice(InMessageHandler));
	}
	else
	{
		ContactGloveInputDevice.Get()->SetMessageHandler(InMessageHandler);
		// ContactGloveInputDevice->PLostEarlyInit();
	}
	return ContactGloveInputDevice;
}

TSharedPtr<class FContactGloveInputDevice> FContactGlovePluginModule::GetInputDevice()
{
	return ContactGloveInputDevice;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FContactGlovePluginModule, ContactGlovePlugin)