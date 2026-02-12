#pragma once
#include "ControllerData.h"
#include "FlexData.h"

class IContactGloveCallback
{
public:
	virtual ~IContactGloveCallback() = default;
	virtual void OnLeftFlexDataReceived(FFlexData Data) = 0;
	virtual void OnRightFlexDataReceived(FFlexData Data) = 0;
	virtual void OnControllerDataReceived(FControllerData Data) = 0;
	virtual void OnControllerButtonPressed(const EHandSides Hand, const EControllerBoolInputType Type) = 0;
	virtual void OnControllerButtonReleased(const EHandSides Hand, const EControllerBoolInputType Type) = 0;
};
