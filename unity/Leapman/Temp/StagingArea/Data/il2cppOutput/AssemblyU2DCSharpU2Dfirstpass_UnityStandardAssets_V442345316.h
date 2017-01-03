#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t3941751733;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2473061560.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Aeroplane.LandingGear
struct  LandingGear_t442345316  : public MonoBehaviour_t667441552
{
public:
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.LandingGear::raiseAtAltitude
	float ___raiseAtAltitude_2;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.LandingGear::lowerAtAltitude
	float ___lowerAtAltitude_3;
	// UnityStandardAssets.Vehicles.Aeroplane.LandingGear/GearState UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_State
	int32_t ___m_State_4;
	// UnityEngine.Animator UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_Animator
	Animator_t2776330603 * ___m_Animator_5;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_Rigidbody
	Rigidbody_t3346577219 * ___m_Rigidbody_6;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_Plane
	AeroplaneController_t3941751733 * ___m_Plane_7;

public:
	inline static int32_t get_offset_of_raiseAtAltitude_2() { return static_cast<int32_t>(offsetof(LandingGear_t442345316, ___raiseAtAltitude_2)); }
	inline float get_raiseAtAltitude_2() const { return ___raiseAtAltitude_2; }
	inline float* get_address_of_raiseAtAltitude_2() { return &___raiseAtAltitude_2; }
	inline void set_raiseAtAltitude_2(float value)
	{
		___raiseAtAltitude_2 = value;
	}

	inline static int32_t get_offset_of_lowerAtAltitude_3() { return static_cast<int32_t>(offsetof(LandingGear_t442345316, ___lowerAtAltitude_3)); }
	inline float get_lowerAtAltitude_3() const { return ___lowerAtAltitude_3; }
	inline float* get_address_of_lowerAtAltitude_3() { return &___lowerAtAltitude_3; }
	inline void set_lowerAtAltitude_3(float value)
	{
		___lowerAtAltitude_3 = value;
	}

	inline static int32_t get_offset_of_m_State_4() { return static_cast<int32_t>(offsetof(LandingGear_t442345316, ___m_State_4)); }
	inline int32_t get_m_State_4() const { return ___m_State_4; }
	inline int32_t* get_address_of_m_State_4() { return &___m_State_4; }
	inline void set_m_State_4(int32_t value)
	{
		___m_State_4 = value;
	}

	inline static int32_t get_offset_of_m_Animator_5() { return static_cast<int32_t>(offsetof(LandingGear_t442345316, ___m_Animator_5)); }
	inline Animator_t2776330603 * get_m_Animator_5() const { return ___m_Animator_5; }
	inline Animator_t2776330603 ** get_address_of_m_Animator_5() { return &___m_Animator_5; }
	inline void set_m_Animator_5(Animator_t2776330603 * value)
	{
		___m_Animator_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Animator_5, value);
	}

	inline static int32_t get_offset_of_m_Rigidbody_6() { return static_cast<int32_t>(offsetof(LandingGear_t442345316, ___m_Rigidbody_6)); }
	inline Rigidbody_t3346577219 * get_m_Rigidbody_6() const { return ___m_Rigidbody_6; }
	inline Rigidbody_t3346577219 ** get_address_of_m_Rigidbody_6() { return &___m_Rigidbody_6; }
	inline void set_m_Rigidbody_6(Rigidbody_t3346577219 * value)
	{
		___m_Rigidbody_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_6, value);
	}

	inline static int32_t get_offset_of_m_Plane_7() { return static_cast<int32_t>(offsetof(LandingGear_t442345316, ___m_Plane_7)); }
	inline AeroplaneController_t3941751733 * get_m_Plane_7() const { return ___m_Plane_7; }
	inline AeroplaneController_t3941751733 ** get_address_of_m_Plane_7() { return &___m_Plane_7; }
	inline void set_m_Plane_7(AeroplaneController_t3941751733 * value)
	{
		___m_Plane_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Plane_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
