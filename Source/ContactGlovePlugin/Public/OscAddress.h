#pragma once

class OscAddress
{
public:
	// Send Address
	inline static const char * VibrationAddress = "/DivingStation/HapticVibration";
	inline static const char * HapticsAddress = "/DivingStation/CollisionSignal";

	// Receive Address
	inline static const FString LeftFlexAddress = TEXT("/DivingStation/FingerRotLeft");
	inline static const FString RightFlexAddress = TEXT("/DivingStation/FingerRotRight");
	inline static const FString ControllerAddress = TEXT("/DivingStation/ControllerInput");
};
