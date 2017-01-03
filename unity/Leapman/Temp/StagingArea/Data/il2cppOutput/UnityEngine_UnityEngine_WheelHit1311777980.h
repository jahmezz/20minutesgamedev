#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider
struct Collider_t2939674232;

#include "mscorlib_System_ValueType1744280289.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WheelHit
struct  WheelHit_t1311777980 
{
public:
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_Point
	Vector3_t4282066566  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_Normal
	Vector3_t4282066566  ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_ForwardDir
	Vector3_t4282066566  ___m_ForwardDir_2;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_SidewaysDir
	Vector3_t4282066566  ___m_SidewaysDir_3;
	// System.Single UnityEngine.WheelHit::m_Force
	float ___m_Force_4;
	// System.Single UnityEngine.WheelHit::m_ForwardSlip
	float ___m_ForwardSlip_5;
	// System.Single UnityEngine.WheelHit::m_SidewaysSlip
	float ___m_SidewaysSlip_6;
	// UnityEngine.Collider UnityEngine.WheelHit::m_Collider
	Collider_t2939674232 * ___m_Collider_7;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(WheelHit_t1311777980, ___m_Point_0)); }
	inline Vector3_t4282066566  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t4282066566 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t4282066566  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(WheelHit_t1311777980, ___m_Normal_1)); }
	inline Vector3_t4282066566  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t4282066566 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t4282066566  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ForwardDir_2() { return static_cast<int32_t>(offsetof(WheelHit_t1311777980, ___m_ForwardDir_2)); }
	inline Vector3_t4282066566  get_m_ForwardDir_2() const { return ___m_ForwardDir_2; }
	inline Vector3_t4282066566 * get_address_of_m_ForwardDir_2() { return &___m_ForwardDir_2; }
	inline void set_m_ForwardDir_2(Vector3_t4282066566  value)
	{
		___m_ForwardDir_2 = value;
	}

	inline static int32_t get_offset_of_m_SidewaysDir_3() { return static_cast<int32_t>(offsetof(WheelHit_t1311777980, ___m_SidewaysDir_3)); }
	inline Vector3_t4282066566  get_m_SidewaysDir_3() const { return ___m_SidewaysDir_3; }
	inline Vector3_t4282066566 * get_address_of_m_SidewaysDir_3() { return &___m_SidewaysDir_3; }
	inline void set_m_SidewaysDir_3(Vector3_t4282066566  value)
	{
		___m_SidewaysDir_3 = value;
	}

	inline static int32_t get_offset_of_m_Force_4() { return static_cast<int32_t>(offsetof(WheelHit_t1311777980, ___m_Force_4)); }
	inline float get_m_Force_4() const { return ___m_Force_4; }
	inline float* get_address_of_m_Force_4() { return &___m_Force_4; }
	inline void set_m_Force_4(float value)
	{
		___m_Force_4 = value;
	}

	inline static int32_t get_offset_of_m_ForwardSlip_5() { return static_cast<int32_t>(offsetof(WheelHit_t1311777980, ___m_ForwardSlip_5)); }
	inline float get_m_ForwardSlip_5() const { return ___m_ForwardSlip_5; }
	inline float* get_address_of_m_ForwardSlip_5() { return &___m_ForwardSlip_5; }
	inline void set_m_ForwardSlip_5(float value)
	{
		___m_ForwardSlip_5 = value;
	}

	inline static int32_t get_offset_of_m_SidewaysSlip_6() { return static_cast<int32_t>(offsetof(WheelHit_t1311777980, ___m_SidewaysSlip_6)); }
	inline float get_m_SidewaysSlip_6() const { return ___m_SidewaysSlip_6; }
	inline float* get_address_of_m_SidewaysSlip_6() { return &___m_SidewaysSlip_6; }
	inline void set_m_SidewaysSlip_6(float value)
	{
		___m_SidewaysSlip_6 = value;
	}

	inline static int32_t get_offset_of_m_Collider_7() { return static_cast<int32_t>(offsetof(WheelHit_t1311777980, ___m_Collider_7)); }
	inline Collider_t2939674232 * get_m_Collider_7() const { return ___m_Collider_7; }
	inline Collider_t2939674232 ** get_address_of_m_Collider_7() { return &___m_Collider_7; }
	inline void set_m_Collider_7(Collider_t2939674232 * value)
	{
		___m_Collider_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Collider_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.WheelHit
struct WheelHit_t1311777980_marshaled_pinvoke
{
	Vector3_t4282066566_marshaled_pinvoke ___m_Point_0;
	Vector3_t4282066566_marshaled_pinvoke ___m_Normal_1;
	Vector3_t4282066566_marshaled_pinvoke ___m_ForwardDir_2;
	Vector3_t4282066566_marshaled_pinvoke ___m_SidewaysDir_3;
	float ___m_Force_4;
	float ___m_ForwardSlip_5;
	float ___m_SidewaysSlip_6;
	Collider_t2939674232 * ___m_Collider_7;
};
// Native definition for marshalling of: UnityEngine.WheelHit
struct WheelHit_t1311777980_marshaled_com
{
	Vector3_t4282066566_marshaled_com ___m_Point_0;
	Vector3_t4282066566_marshaled_com ___m_Normal_1;
	Vector3_t4282066566_marshaled_com ___m_ForwardDir_2;
	Vector3_t4282066566_marshaled_com ___m_SidewaysDir_3;
	float ___m_Force_4;
	float ___m_ForwardSlip_5;
	float ___m_SidewaysSlip_6;
	Collider_t2939674232 * ___m_Collider_7;
};
