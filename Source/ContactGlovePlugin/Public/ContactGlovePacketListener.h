// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "osc/OscPacketListener.h"

class FOscCommunicator;

class CONTACTGLOVEPLUGIN_API FContactGlovePacketListener : public osc::OscPacketListener
{
public:
	FContactGlovePacketListener(FOscCommunicator * C);
	virtual void ProcessMessage(const osc::ReceivedMessage& M, const IpEndpointName& RemoteEndpoint) override;
private:
	FOscCommunicator * Communicator;
};