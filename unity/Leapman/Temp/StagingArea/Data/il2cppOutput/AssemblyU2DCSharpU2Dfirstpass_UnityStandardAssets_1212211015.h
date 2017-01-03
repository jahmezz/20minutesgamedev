#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Car.Suspension
struct  Suspension_t1212211015  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject UnityStandardAssets.Vehicles.Car.Suspension::wheel
	GameObject_t3674682005 * ___wheel_2;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Car.Suspension::m_TargetOriginalPosition
	Vector3_t4282066566  ___m_TargetOriginalPosition_3;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Car.Suspension::m_Origin
	Vector3_t4282066566  ___m_Origin_4;

public:
	inline static int32_t get_offset_of_wheel_2() { return static_cast<int32_t>(offsetof(Suspension_t1212211015, ___wheel_2)); }
	inline GameObject_t3674682005 * get_wheel_2() const { return ___wheel_2; }
	inline GameObject_t3674682005 ** get_address_of_wheel_2() { return &___wheel_2; }
	inline void set_wheel_2(GameObject_t3674682005 * value)
	{
		___wheel_2 = value;
		Il2CppCodeGenWriteBarrier(&___wheel_2, value);
	}

	inline static int32_t get_offset_of_m_TargetOriginalPosition_3() { return static_cast<int32_t>(offsetof(Suspension_t1212211015, ___m_TargetOriginalPosition_3)); }
	inline Vector3_t4282066566  get_m_TargetOriginalPosition_3() const { return ___m_TargetOriginalPosition_3; }
	inline Vector3_t4282066566 * get_address_of_m_TargetOriginalPosition_3() { return &___m_TargetOriginalPosition_3; }
	inline void set_m_TargetOriginalPosition_3(Vector3_t4282066566  value)
	{
		___m_TargetOriginalPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_Origin_4() { return static_cast<int32_t>(offsetof(Suspension_t1212211015, ___m_Origin_4)); }
	inline Vector3_t4282066566  get_m_Origin_4() const { return ___m_Origin_4; }
	inline Vector3_t4282066566 * get_address_of_m_Origin_4() { return &___m_Origin_4; }
	inline void set_m_Origin_4(Vector3_t4282066566  value)
	{
		___m_Origin_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
