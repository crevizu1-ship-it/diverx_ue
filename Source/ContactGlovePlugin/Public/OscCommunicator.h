// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ContactGlovePacketListener.h"
#include "osc/OscReceivedElements.h"
#include "ip/UdpSocket.h"
#include "osc/OscOutboundPacketStream.h"

#define OUTPUT_BUFFER_SIZE 256

#define CLIENT_PORT 25790
#define SERVER_PORT 25788
#define ADDRESS "127.0.0.1"


class CONTACTGLOVEPLUGIN_API FOscCommunicator
{
public:
	FOscCommunicator();
	~FOscCommunicator();

	void Run();
	void Break();
	bool IsRunning() const;
	void Send(const osc::OutboundPacketStream& Message);
	void OnMessageReceived(const osc::ReceivedMessage& Message) const;
	void BindAddress(FString Address, TFunction<void(osc::ReceivedMessage)> Action);
	
private:
	FContactGlovePacketListener PacketListener;
	// UdpTransmitSocket Client;
	// UdpListeningReceiveSocket Server;

	// TSharedPtr<FContactGlovePacketListener> PacketListener;
	// TSharedPtr<UdpTransmitSocket> Client;
	// TSharedPtr<UdpListeningReceiveSocket> Server;

	TMap<FString, TFunction<void(osc::ReceivedMessage)>> ActionBind;
	FCriticalSection Mutex;

	bool bIsRunning = false;
};
