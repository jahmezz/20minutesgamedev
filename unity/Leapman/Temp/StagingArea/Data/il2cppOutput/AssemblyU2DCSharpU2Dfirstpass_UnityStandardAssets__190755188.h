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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets._2D.CameraFollow
struct  CameraFollow_t190755188  : public MonoBehaviour_t667441552
{
public:
	// System.Single UnityStandardAssets._2D.CameraFollow::xMargin
	float ___xMargin_2;
	// System.Single UnityStandardAssets._2D.CameraFollow::yMargin
	float ___yMargin_3;
	// System.Single UnityStandardAssets._2D.CameraFollow::xSmooth
	float ___xSmooth_4;
	// System.Single UnityStandardAssets._2D.CameraFollow::ySmooth
	float ___ySmooth_5;
	// UnityEngine.Vector2 UnityStandardAssets._2D.CameraFollow::maxXAndY
	Vector2_t4282066565  ___maxXAndY_6;
	// UnityEngine.Vector2 UnityStandardAssets._2D.CameraFollow::minXAndY
	Vector2_t4282066565  ___minXAndY_7;
	// UnityEngine.Transform UnityStandardAssets._2D.CameraFollow::m_Player
	Transform_t1659122786 * ___m_Player_8;

public:
	inline static int32_t get_offset_of_xMargin_2() { return static_cast<int32_t>(offsetof(CameraFollow_t190755188, ___xMargin_2)); }
	inline float get_xMargin_2() const { return ___xMargin_2; }
	inline float* get_address_of_xMargin_2() { return &___xMargin_2; }
	inline void set_xMargin_2(float value)
	{
		___xMargin_2 = value;
	}

	inline static int32_t get_offset_of_yMargin_3() { return static_cast<int32_t>(offsetof(CameraFollow_t190755188, ___yMargin_3)); }
	inline float get_yMargin_3() const { return ___yMargin_3; }
	inline float* get_address_of_yMargin_3() { return &___yMargin_3; }
	inline void set_yMargin_3(float value)
	{
		___yMargin_3 = value;
	}

	inline static int32_t get_offset_of_xSmooth_4() { return static_cast<int32_t>(offsetof(CameraFollow_t190755188, ___xSmooth_4)); }
	inline float get_xSmooth_4() const { return ___xSmooth_4; }
	inline float* get_address_of_xSmooth_4() { return &___xSmooth_4; }
	inline void set_xSmooth_4(float value)
	{
		___xSmooth_4 = value;
	}

	inline static int32_t get_offset_of_ySmooth_5() { return static_cast<int32_t>(offsetof(CameraFollow_t190755188, ___ySmooth_5)); }
	inline float get_ySmooth_5() const { return ___ySmooth_5; }
	inline float* get_address_of_ySmooth_5() { return &___ySmooth_5; }
	inline void set_ySmooth_5(float value)
	{
		___ySmooth_5 = value;
	}

	inline static int32_t get_offset_of_maxXAndY_6() { return static_cast<int32_t>(offsetof(CameraFollow_t190755188, ___maxXAndY_6)); }
	inline Vector2_t4282066565  get_maxXAndY_6() const { return ___maxXAndY_6; }
	inline Vector2_t4282066565 * get_address_of_maxXAndY_6() { return &___maxXAndY_6; }
	inline void set_maxXAndY_6(Vector2_t4282066565  value)
	{
		___maxXAndY_6 = value;
	}

	inline static int32_t get_offset_of_minXAndY_7() { return static_cast<int32_t>(offsetof(CameraFollow_t190755188, ___minXAndY_7)); }
	inline Vector2_t4282066565  get_minXAndY_7() const { return ___minXAndY_7; }
	inline Vector2_t4282066565 * get_address_of_minXAndY_7() { return &___minXAndY_7; }
	inline void set_minXAndY_7(Vector2_t4282066565  value)
	{
		___minXAndY_7 = value;
	}

	inline static int32_t get_offset_of_m_Player_8() { return static_cast<int32_t>(offsetof(CameraFollow_t190755188, ___m_Player_8)); }
	inline Transform_t1659122786 * get_m_Player_8() const { return ___m_Player_8; }
	inline Transform_t1659122786 ** get_address_of_m_Player_8() { return &___m_Player_8; }
	inline void set_m_Player_8(Transform_t1659122786 * value)
	{
		___m_Player_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Player_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
