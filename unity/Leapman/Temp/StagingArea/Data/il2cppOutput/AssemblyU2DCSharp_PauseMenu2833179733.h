#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Toggle
struct Toggle_t110812896;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseMenu
struct  PauseMenu_t2833179733  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Toggle PauseMenu::m_MenuToggle
	Toggle_t110812896 * ___m_MenuToggle_2;
	// System.Single PauseMenu::m_TimeScaleRef
	float ___m_TimeScaleRef_3;
	// System.Single PauseMenu::m_VolumeRef
	float ___m_VolumeRef_4;
	// System.Boolean PauseMenu::m_Paused
	bool ___m_Paused_5;

public:
	inline static int32_t get_offset_of_m_MenuToggle_2() { return static_cast<int32_t>(offsetof(PauseMenu_t2833179733, ___m_MenuToggle_2)); }
	inline Toggle_t110812896 * get_m_MenuToggle_2() const { return ___m_MenuToggle_2; }
	inline Toggle_t110812896 ** get_address_of_m_MenuToggle_2() { return &___m_MenuToggle_2; }
	inline void set_m_MenuToggle_2(Toggle_t110812896 * value)
	{
		___m_MenuToggle_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_MenuToggle_2, value);
	}

	inline static int32_t get_offset_of_m_TimeScaleRef_3() { return static_cast<int32_t>(offsetof(PauseMenu_t2833179733, ___m_TimeScaleRef_3)); }
	inline float get_m_TimeScaleRef_3() const { return ___m_TimeScaleRef_3; }
	inline float* get_address_of_m_TimeScaleRef_3() { return &___m_TimeScaleRef_3; }
	inline void set_m_TimeScaleRef_3(float value)
	{
		___m_TimeScaleRef_3 = value;
	}

	inline static int32_t get_offset_of_m_VolumeRef_4() { return static_cast<int32_t>(offsetof(PauseMenu_t2833179733, ___m_VolumeRef_4)); }
	inline float get_m_VolumeRef_4() const { return ___m_VolumeRef_4; }
	inline float* get_address_of_m_VolumeRef_4() { return &___m_VolumeRef_4; }
	inline void set_m_VolumeRef_4(float value)
	{
		___m_VolumeRef_4 = value;
	}

	inline static int32_t get_offset_of_m_Paused_5() { return static_cast<int32_t>(offsetof(PauseMenu_t2833179733, ___m_Paused_5)); }
	inline bool get_m_Paused_5() const { return ___m_Paused_5; }
	inline bool* get_address_of_m_Paused_5() { return &___m_Paused_5; }
	inline void set_m_Paused_5(bool value)
	{
		___m_Paused_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
