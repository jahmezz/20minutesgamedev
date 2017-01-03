#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t3941751733;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl
struct  AeroplaneAiControl_t403987258  : public MonoBehaviour_t667441552
{
public:
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_RollSensitivity
	float ___m_RollSensitivity_2;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_PitchSensitivity
	float ___m_PitchSensitivity_3;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_LateralWanderDistance
	float ___m_LateralWanderDistance_4;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_LateralWanderSpeed
	float ___m_LateralWanderSpeed_5;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_MaxClimbAngle
	float ___m_MaxClimbAngle_6;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_MaxRollAngle
	float ___m_MaxRollAngle_7;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_SpeedEffect
	float ___m_SpeedEffect_8;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_TakeoffHeight
	float ___m_TakeoffHeight_9;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_Target
	Transform_t1659122786 * ___m_Target_10;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_AeroplaneController
	AeroplaneController_t3941751733 * ___m_AeroplaneController_11;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_RandomPerlin
	float ___m_RandomPerlin_12;
	// System.Boolean UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_TakenOff
	bool ___m_TakenOff_13;

public:
	inline static int32_t get_offset_of_m_RollSensitivity_2() { return static_cast<int32_t>(offsetof(AeroplaneAiControl_t403987258, ___m_RollSensitivity_2)); }
	inline float get_m_RollSensitivity_2() const { return ___m_RollSensitivity_2; }
	inline float* get_address_of_m_RollSensitivity_2() { return &___m_RollSensitivity_2; }
	inline void set_m_RollSensitivity_2(float value)
	{
		___m_RollSensitivity_2 = value;
	}

	inline static int32_t get_offset_of_m_PitchSensitivity_3() { return static_cast<int32_t>(offsetof(AeroplaneAiControl_t403987258, ___m_PitchSensitivity_3)); }
	inline float get_m_PitchSensitivity_3() const { return ___m_PitchSensitivity_3; }
	inline float* get_address_of_m_PitchSensitivity_3() { return &___m_PitchSensitivity_3; }
	inline void set_m_PitchSensitivity_3(float value)
	{
		___m_PitchSensitivity_3 = value;
	}

	inline static int32_t get_offset_of_m_LateralWanderDistance_4() { return static_cast<int32_t>(offsetof(AeroplaneAiControl_t403987258, ___m_LateralWanderDistance_4)); }
	inline float get_m_LateralWanderDistance_4() const { return ___m_LateralWanderDistance_4; }
	inline float* get_address_of_m_LateralWanderDistance_4() { return &___m_LateralWanderDistance_4; }
	inline void set_m_LateralWanderDistance_4(float value)
	{
		___m_LateralWanderDistance_4 = value;
	}

	inline static int32_t get_offset_of_m_LateralWanderSpeed_5() { return static_cast<int32_t>(offsetof(AeroplaneAiControl_t403987258, ___m_LateralWanderSpeed_5)); }
	inline float get_m_LateralWanderSpeed_5() const { return ___m_LateralWanderSpeed_5; }
	inline float* get_address_of_m_LateralWanderSpeed_5() { return &___m_LateralWanderSpeed_5; }
	inline void set_m_LateralWanderSpeed_5(float value)
	{
		___m_LateralWanderSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_MaxClimbAngle_6() { return static_cast<int32_t>(offsetof(AeroplaneAiControl_t403987258, ___m_MaxClimbAngle_6)); }
	inline float get_m_MaxClimbAngle_6() const { return ___m_MaxClimbAngle_6; }
	inline float* get_address_of_m_MaxClimbAngle_6() { return &___m_MaxClimbAngle_6; }
	inline void set_m_MaxClimbAngle_6(float value)
	{
		___m_MaxClimbAngle_6 = value;
	}

	inline static int32_t get_offset_of_m_MaxRollAngle_7() { return static_cast<int32_t>(offsetof(AeroplaneAiControl_t403987258, ___m_MaxRollAngle_7)); }
	inline float get_m_MaxRollAngle_7() const { return ___m_MaxRollAngle_7; }
	inline float* get_address_of_m_MaxRollAngle_7() { return &___m_MaxRollAngle_7; }
	inline void set_m_MaxRollAngle_7(float value)
	{
		___m_MaxRollAngle_7 = value;
	}

	inline static int32_t get_offset_of_m_SpeedEffect_8() { return static_cast<int32_t>(offsetof(AeroplaneAiControl_t403987258, ___m_SpeedEffect_8)); }
	inline float get_m_SpeedEffect_8() const { return ___m_SpeedEffect_8; }
	inline float* get_address_of_m_SpeedEffect_8() { return &___m_SpeedEffect_8; }
	inline void set_m_SpeedEffect_8(float value)
	{
		___m_SpeedEffect_8 = value;
	}

	inline static int32_t get_offset_of_m_TakeoffHeight_9() { return static_cast<int32_t>(offsetof(AeroplaneAiControl_t403987258, ___m_TakeoffHeight_9)); }
	inline float get_m_TakeoffHeight_9() const { return ___m_TakeoffHeight_9; }
	inline float* get_address_of_m_TakeoffHeight_9() { return &___m_TakeoffHeight_9; }
	inline void set_m_TakeoffHeight_9(float value)
	{
		___m_TakeoffHeight_9 = value;
	}

	inline static int32_t get_offset_of_m_Target_10() { return static_cast<int32_t>(offsetof(AeroplaneAiControl_t403987258, ___m_Target_10)); }
	inline Transform_t1659122786 * get_m_Target_10() const { return ___m_Target_10; }
	inline Transform_t1659122786 ** get_address_of_m_Target_10() { return &___m_Target_10; }
	inline void set_m_Target_10(Transform_t1659122786 * value)
	{
		___m_Target_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Target_10, value);
	}

	inline static int32_t get_offset_of_m_AeroplaneController_11() { return static_cast<int32_t>(offsetof(AeroplaneAiControl_t403987258, ___m_AeroplaneController_11)); }
	inline AeroplaneController_t3941751733 * get_m_AeroplaneController_11() const { return ___m_AeroplaneController_11; }
	inline AeroplaneController_t3941751733 ** get_address_of_m_AeroplaneController_11() { return &___m_AeroplaneController_11; }
	inline void set_m_AeroplaneController_11(AeroplaneController_t3941751733 * value)
	{
		___m_AeroplaneController_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_AeroplaneController_11, value);
	}

	inline static int32_t get_offset_of_m_RandomPerlin_12() { return static_cast<int32_t>(offsetof(AeroplaneAiControl_t403987258, ___m_RandomPerlin_12)); }
	inline float get_m_RandomPerlin_12() const { return ___m_RandomPerlin_12; }
	inline float* get_address_of_m_RandomPerlin_12() { return &___m_RandomPerlin_12; }
	inline void set_m_RandomPerlin_12(float value)
	{
		___m_RandomPerlin_12 = value;
	}

	inline static int32_t get_offset_of_m_TakenOff_13() { return static_cast<int32_t>(offsetof(AeroplaneAiControl_t403987258, ___m_TakenOff_13)); }
	inline bool get_m_TakenOff_13() const { return ___m_TakenOff_13; }
	inline bool* get_address_of_m_TakenOff_13() { return &___m_TakenOff_13; }
	inline void set_m_TakenOff_13(bool value)
	{
		___m_TakenOff_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
