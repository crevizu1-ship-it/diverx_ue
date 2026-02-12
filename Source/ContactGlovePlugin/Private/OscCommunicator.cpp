// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "OscCommunicator.h"

#include "AsyncTool.h"
#include "ContactGlovePacketListener.h"
#include "osc/OscOutboundPacketStream.h"


FOscCommunicator::FOscCommunicator()
	: PacketListener (this)
	// , Client( IpEndpointName( ADDRESS, CLIENT_PORT ) )
	// , Server( IpEndpointName( ADDRESS, SERVER_PORT ), &PacketListener )
{
}

FOscCommunicator::~FOscCommunicator()
{
	Break();
}

void FOscCommunicator::Run()
{
	Mutex.Lock();
	if(!bIsRunning)
	{
		bIsRunning = true;
		FAsyncTool::RunLambdaOnBackGroundThread([this]()
		{
			// Server.RunUntilSigInt();
		});
	}
	Mutex.Unlock();
}

void FOscCommunicator::Break()
{
	Mutex.Lock();
	if(bIsRunning)
	{
		// Server.AsynchronousBreak();
		bIsRunning = false;
	}
	Mutex.Unlock();
}

bool FOscCommunicator::IsRunning() const
{
	return bIsRunning;
}

void FOscCommunicator::OnMessageReceived(const osc::ReceivedMessage& Message) const
{
	const char * CharAddress = Message.AddressPattern();
	const FString Address(CharAddress);

	if(const TFunction<void(osc::ReceivedMessage)>& Action = ActionBind.FindRef(Address))
	{
		Action(Message);
	}
}

void FOscCommunicator::Send(const osc::OutboundPacketStream& Message)
{
	// Client.Send(Message.Data(), Message.Size());
}

void FOscCommunicator::BindAddress(FString Address, TFunction<void(osc::ReceivedMessage)> Action)
{
	ActionBind.Add(Address, Action);
}
