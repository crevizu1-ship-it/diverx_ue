#pragma once

#include "ContactGlovePacketListener.h"
#include "OscCommunicator.h"

FContactGlovePacketListener::FContactGlovePacketListener(FOscCommunicator* C)
	: Communicator(C)
{
}

void FContactGlovePacketListener::ProcessMessage(const osc::ReceivedMessage& M, const IpEndpointName& RemoteEndpoint)
{
	Communicator->OnMessageReceived(M);
}
