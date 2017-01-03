#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t3941751733;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis
struct  AeroplaneUserControl4Axis_t573334204  : public MonoBehaviour_t667441552
{
public:
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::maxRollAngle
	float ___maxRollAngle_2;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::maxPitchAngle
	float ___maxPitchAngle_3;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::m_Aeroplane
	AeroplaneController_t3941751733 * ___m_Aeroplane_4;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::m_Throttle
	float ___m_Throttle_5;
	// System.Boolean UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::m_AirBrakes
	bool ___m_AirBrakes_6;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::m_Yaw
	float ___m_Yaw_7;

public:
	inline static int32_t get_offset_of_maxRollAngle_2() { return static_cast<int32_t>(offsetof(AeroplaneUserControl4Axis_t573334204, ___maxRollAngle_2)); }
	inline float get_maxRollAngle_2() const { return ___maxRollAngle_2; }
	inline float* get_address_of_maxRollAngle_2() { return &___maxRollAngle_2; }
	inline void set_maxRollAngle_2(float value)
	{
		___maxRollAngle_2 = value;
	}

	inline static int32_t get_offset_of_maxPitchAngle_3() { return static_cast<int32_t>(offsetof(AeroplaneUserControl4Axis_t573334204, ___maxPitchAngle_3)); }
	inline float get_maxPitchAngle_3() const { return ___maxPitchAngle_3; }
	inline float* get_address_of_maxPitchAngle_3() { return &___maxPitchAngle_3; }
	inline void set_maxPitchAngle_3(float value)
	{
		___maxPitchAngle_3 = value;
	}

	inline static int32_t get_offset_of_m_Aeroplane_4() { return static_cast<int32_t>(offsetof(AeroplaneUserControl4Axis_t573334204, ___m_Aeroplane_4)); }
	inline AeroplaneController_t3941751733 * get_m_Aeroplane_4() const { return ___m_Aeroplane_4; }
	inline AeroplaneController_t3941751733 ** get_address_of_m_Aeroplane_4() { return &___m_Aeroplane_4; }
	inline void set_m_Aeroplane_4(AeroplaneController_t3941751733 * value)
	{
		___m_Aeroplane_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Aeroplane_4, value);
	}

	inline static int32_t get_offset_of_m_Throttle_5() { return static_cast<int32_t>(offsetof(AeroplaneUserControl4Axis_t573334204, ___m_Throttle_5)); }
	inline float get_m_Throttle_5() const { return ___m_Throttle_5; }
	inline float* get_address_of_m_Throttle_5() { return &___m_Throttle_5; }
	inline void set_m_Throttle_5(float value)
	{
		___m_Throttle_5 = value;
	}

	inline static int32_t get_offset_of_m_AirBrakes_6() { return static_cast<int32_t>(offsetof(AeroplaneUserControl4Axis_t573334204, ___m_AirBrakes_6)); }
	inline bool get_m_AirBrakes_6() const { return ___m_AirBrakes_6; }
	inline bool* get_address_of_m_AirBrakes_6() { return &___m_AirBrakes_6; }
	inline void set_m_AirBrakes_6(bool value)
	{
		___m_AirBrakes_6 = value;
	}

	inline static int32_t get_offset_of_m_Yaw_7() { return static_cast<int32_t>(offsetof(AeroplaneUserControl4Axis_t573334204, ___m_Yaw_7)); }
	inline float get_m_Yaw_7() const { return ___m_Yaw_7; }
	inline float* get_address_of_m_Yaw_7() { return &___m_Yaw_7; }
	inline void set_m_Yaw_7(float value)
	{
		___m_Yaw_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
