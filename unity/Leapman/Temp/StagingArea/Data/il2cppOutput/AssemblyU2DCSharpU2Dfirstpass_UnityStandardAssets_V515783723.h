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
// UnityStandardAssets.Vehicles.Car.CarController
struct CarController_t4046949162;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3667327862.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Car.CarAIControl
struct  CarAIControl_t515783723  : public MonoBehaviour_t667441552
{
public:
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_CautiousSpeedFactor
	float ___m_CautiousSpeedFactor_2;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_CautiousMaxAngle
	float ___m_CautiousMaxAngle_3;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_CautiousMaxDistance
	float ___m_CautiousMaxDistance_4;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_CautiousAngularVelocityFactor
	float ___m_CautiousAngularVelocityFactor_5;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_SteerSensitivity
	float ___m_SteerSensitivity_6;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_AccelSensitivity
	float ___m_AccelSensitivity_7;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_BrakeSensitivity
	float ___m_BrakeSensitivity_8;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_LateralWanderDistance
	float ___m_LateralWanderDistance_9;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_LateralWanderSpeed
	float ___m_LateralWanderSpeed_10;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_AccelWanderAmount
	float ___m_AccelWanderAmount_11;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_AccelWanderSpeed
	float ___m_AccelWanderSpeed_12;
	// UnityStandardAssets.Vehicles.Car.CarAIControl/BrakeCondition UnityStandardAssets.Vehicles.Car.CarAIControl::m_BrakeCondition
	int32_t ___m_BrakeCondition_13;
	// System.Boolean UnityStandardAssets.Vehicles.Car.CarAIControl::m_Driving
	bool ___m_Driving_14;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.CarAIControl::m_Target
	Transform_t1659122786 * ___m_Target_15;
	// System.Boolean UnityStandardAssets.Vehicles.Car.CarAIControl::m_StopWhenTargetReached
	bool ___m_StopWhenTargetReached_16;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_ReachTargetThreshold
	float ___m_ReachTargetThreshold_17;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_RandomPerlin
	float ___m_RandomPerlin_18;
	// UnityStandardAssets.Vehicles.Car.CarController UnityStandardAssets.Vehicles.Car.CarAIControl::m_CarController
	CarController_t4046949162 * ___m_CarController_19;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_AvoidOtherCarTime
	float ___m_AvoidOtherCarTime_20;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_AvoidOtherCarSlowdown
	float ___m_AvoidOtherCarSlowdown_21;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_AvoidPathOffset
	float ___m_AvoidPathOffset_22;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Car.CarAIControl::m_Rigidbody
	Rigidbody_t3346577219 * ___m_Rigidbody_23;

public:
	inline static int32_t get_offset_of_m_CautiousSpeedFactor_2() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_CautiousSpeedFactor_2)); }
	inline float get_m_CautiousSpeedFactor_2() const { return ___m_CautiousSpeedFactor_2; }
	inline float* get_address_of_m_CautiousSpeedFactor_2() { return &___m_CautiousSpeedFactor_2; }
	inline void set_m_CautiousSpeedFactor_2(float value)
	{
		___m_CautiousSpeedFactor_2 = value;
	}

	inline static int32_t get_offset_of_m_CautiousMaxAngle_3() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_CautiousMaxAngle_3)); }
	inline float get_m_CautiousMaxAngle_3() const { return ___m_CautiousMaxAngle_3; }
	inline float* get_address_of_m_CautiousMaxAngle_3() { return &___m_CautiousMaxAngle_3; }
	inline void set_m_CautiousMaxAngle_3(float value)
	{
		___m_CautiousMaxAngle_3 = value;
	}

	inline static int32_t get_offset_of_m_CautiousMaxDistance_4() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_CautiousMaxDistance_4)); }
	inline float get_m_CautiousMaxDistance_4() const { return ___m_CautiousMaxDistance_4; }
	inline float* get_address_of_m_CautiousMaxDistance_4() { return &___m_CautiousMaxDistance_4; }
	inline void set_m_CautiousMaxDistance_4(float value)
	{
		___m_CautiousMaxDistance_4 = value;
	}

	inline static int32_t get_offset_of_m_CautiousAngularVelocityFactor_5() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_CautiousAngularVelocityFactor_5)); }
	inline float get_m_CautiousAngularVelocityFactor_5() const { return ___m_CautiousAngularVelocityFactor_5; }
	inline float* get_address_of_m_CautiousAngularVelocityFactor_5() { return &___m_CautiousAngularVelocityFactor_5; }
	inline void set_m_CautiousAngularVelocityFactor_5(float value)
	{
		___m_CautiousAngularVelocityFactor_5 = value;
	}

	inline static int32_t get_offset_of_m_SteerSensitivity_6() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_SteerSensitivity_6)); }
	inline float get_m_SteerSensitivity_6() const { return ___m_SteerSensitivity_6; }
	inline float* get_address_of_m_SteerSensitivity_6() { return &___m_SteerSensitivity_6; }
	inline void set_m_SteerSensitivity_6(float value)
	{
		___m_SteerSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_m_AccelSensitivity_7() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_AccelSensitivity_7)); }
	inline float get_m_AccelSensitivity_7() const { return ___m_AccelSensitivity_7; }
	inline float* get_address_of_m_AccelSensitivity_7() { return &___m_AccelSensitivity_7; }
	inline void set_m_AccelSensitivity_7(float value)
	{
		___m_AccelSensitivity_7 = value;
	}

	inline static int32_t get_offset_of_m_BrakeSensitivity_8() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_BrakeSensitivity_8)); }
	inline float get_m_BrakeSensitivity_8() const { return ___m_BrakeSensitivity_8; }
	inline float* get_address_of_m_BrakeSensitivity_8() { return &___m_BrakeSensitivity_8; }
	inline void set_m_BrakeSensitivity_8(float value)
	{
		___m_BrakeSensitivity_8 = value;
	}

	inline static int32_t get_offset_of_m_LateralWanderDistance_9() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_LateralWanderDistance_9)); }
	inline float get_m_LateralWanderDistance_9() const { return ___m_LateralWanderDistance_9; }
	inline float* get_address_of_m_LateralWanderDistance_9() { return &___m_LateralWanderDistance_9; }
	inline void set_m_LateralWanderDistance_9(float value)
	{
		___m_LateralWanderDistance_9 = value;
	}

	inline static int32_t get_offset_of_m_LateralWanderSpeed_10() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_LateralWanderSpeed_10)); }
	inline float get_m_LateralWanderSpeed_10() const { return ___m_LateralWanderSpeed_10; }
	inline float* get_address_of_m_LateralWanderSpeed_10() { return &___m_LateralWanderSpeed_10; }
	inline void set_m_LateralWanderSpeed_10(float value)
	{
		___m_LateralWanderSpeed_10 = value;
	}

	inline static int32_t get_offset_of_m_AccelWanderAmount_11() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_AccelWanderAmount_11)); }
	inline float get_m_AccelWanderAmount_11() const { return ___m_AccelWanderAmount_11; }
	inline float* get_address_of_m_AccelWanderAmount_11() { return &___m_AccelWanderAmount_11; }
	inline void set_m_AccelWanderAmount_11(float value)
	{
		___m_AccelWanderAmount_11 = value;
	}

	inline static int32_t get_offset_of_m_AccelWanderSpeed_12() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_AccelWanderSpeed_12)); }
	inline float get_m_AccelWanderSpeed_12() const { return ___m_AccelWanderSpeed_12; }
	inline float* get_address_of_m_AccelWanderSpeed_12() { return &___m_AccelWanderSpeed_12; }
	inline void set_m_AccelWanderSpeed_12(float value)
	{
		___m_AccelWanderSpeed_12 = value;
	}

	inline static int32_t get_offset_of_m_BrakeCondition_13() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_BrakeCondition_13)); }
	inline int32_t get_m_BrakeCondition_13() const { return ___m_BrakeCondition_13; }
	inline int32_t* get_address_of_m_BrakeCondition_13() { return &___m_BrakeCondition_13; }
	inline void set_m_BrakeCondition_13(int32_t value)
	{
		___m_BrakeCondition_13 = value;
	}

	inline static int32_t get_offset_of_m_Driving_14() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_Driving_14)); }
	inline bool get_m_Driving_14() const { return ___m_Driving_14; }
	inline bool* get_address_of_m_Driving_14() { return &___m_Driving_14; }
	inline void set_m_Driving_14(bool value)
	{
		___m_Driving_14 = value;
	}

	inline static int32_t get_offset_of_m_Target_15() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_Target_15)); }
	inline Transform_t1659122786 * get_m_Target_15() const { return ___m_Target_15; }
	inline Transform_t1659122786 ** get_address_of_m_Target_15() { return &___m_Target_15; }
	inline void set_m_Target_15(Transform_t1659122786 * value)
	{
		___m_Target_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_Target_15, value);
	}

	inline static int32_t get_offset_of_m_StopWhenTargetReached_16() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_StopWhenTargetReached_16)); }
	inline bool get_m_StopWhenTargetReached_16() const { return ___m_StopWhenTargetReached_16; }
	inline bool* get_address_of_m_StopWhenTargetReached_16() { return &___m_StopWhenTargetReached_16; }
	inline void set_m_StopWhenTargetReached_16(bool value)
	{
		___m_StopWhenTargetReached_16 = value;
	}

	inline static int32_t get_offset_of_m_ReachTargetThreshold_17() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_ReachTargetThreshold_17)); }
	inline float get_m_ReachTargetThreshold_17() const { return ___m_ReachTargetThreshold_17; }
	inline float* get_address_of_m_ReachTargetThreshold_17() { return &___m_ReachTargetThreshold_17; }
	inline void set_m_ReachTargetThreshold_17(float value)
	{
		___m_ReachTargetThreshold_17 = value;
	}

	inline static int32_t get_offset_of_m_RandomPerlin_18() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_RandomPerlin_18)); }
	inline float get_m_RandomPerlin_18() const { return ___m_RandomPerlin_18; }
	inline float* get_address_of_m_RandomPerlin_18() { return &___m_RandomPerlin_18; }
	inline void set_m_RandomPerlin_18(float value)
	{
		___m_RandomPerlin_18 = value;
	}

	inline static int32_t get_offset_of_m_CarController_19() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_CarController_19)); }
	inline CarController_t4046949162 * get_m_CarController_19() const { return ___m_CarController_19; }
	inline CarController_t4046949162 ** get_address_of_m_CarController_19() { return &___m_CarController_19; }
	inline void set_m_CarController_19(CarController_t4046949162 * value)
	{
		___m_CarController_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_CarController_19, value);
	}

	inline static int32_t get_offset_of_m_AvoidOtherCarTime_20() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_AvoidOtherCarTime_20)); }
	inline float get_m_AvoidOtherCarTime_20() const { return ___m_AvoidOtherCarTime_20; }
	inline float* get_address_of_m_AvoidOtherCarTime_20() { return &___m_AvoidOtherCarTime_20; }
	inline void set_m_AvoidOtherCarTime_20(float value)
	{
		___m_AvoidOtherCarTime_20 = value;
	}

	inline static int32_t get_offset_of_m_AvoidOtherCarSlowdown_21() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_AvoidOtherCarSlowdown_21)); }
	inline float get_m_AvoidOtherCarSlowdown_21() const { return ___m_AvoidOtherCarSlowdown_21; }
	inline float* get_address_of_m_AvoidOtherCarSlowdown_21() { return &___m_AvoidOtherCarSlowdown_21; }
	inline void set_m_AvoidOtherCarSlowdown_21(float value)
	{
		___m_AvoidOtherCarSlowdown_21 = value;
	}

	inline static int32_t get_offset_of_m_AvoidPathOffset_22() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_AvoidPathOffset_22)); }
	inline float get_m_AvoidPathOffset_22() const { return ___m_AvoidPathOffset_22; }
	inline float* get_address_of_m_AvoidPathOffset_22() { return &___m_AvoidPathOffset_22; }
	inline void set_m_AvoidPathOffset_22(float value)
	{
		___m_AvoidPathOffset_22 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_23() { return static_cast<int32_t>(offsetof(CarAIControl_t515783723, ___m_Rigidbody_23)); }
	inline Rigidbody_t3346577219 * get_m_Rigidbody_23() const { return ___m_Rigidbody_23; }
	inline Rigidbody_t3346577219 ** get_address_of_m_Rigidbody_23() { return &___m_Rigidbody_23; }
	inline void set_m_Rigidbody_23(Rigidbody_t3346577219 * value)
	{
		___m_Rigidbody_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
