#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.UI.Button
struct Button_t3896396478;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.SceneUtils.SlowMoButton
struct  SlowMoButton_t174812079  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Sprite UnityStandardAssets.SceneUtils.SlowMoButton::FullSpeedTex
	Sprite_t3199167241 * ___FullSpeedTex_2;
	// UnityEngine.Sprite UnityStandardAssets.SceneUtils.SlowMoButton::SlowSpeedTex
	Sprite_t3199167241 * ___SlowSpeedTex_3;
	// System.Single UnityStandardAssets.SceneUtils.SlowMoButton::fullSpeed
	float ___fullSpeed_4;
	// System.Single UnityStandardAssets.SceneUtils.SlowMoButton::slowSpeed
	float ___slowSpeed_5;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.SlowMoButton::button
	Button_t3896396478 * ___button_6;
	// System.Boolean UnityStandardAssets.SceneUtils.SlowMoButton::m_SlowMo
	bool ___m_SlowMo_7;

public:
	inline static int32_t get_offset_of_FullSpeedTex_2() { return static_cast<int32_t>(offsetof(SlowMoButton_t174812079, ___FullSpeedTex_2)); }
	inline Sprite_t3199167241 * get_FullSpeedTex_2() const { return ___FullSpeedTex_2; }
	inline Sprite_t3199167241 ** get_address_of_FullSpeedTex_2() { return &___FullSpeedTex_2; }
	inline void set_FullSpeedTex_2(Sprite_t3199167241 * value)
	{
		___FullSpeedTex_2 = value;
		Il2CppCodeGenWriteBarrier(&___FullSpeedTex_2, value);
	}

	inline static int32_t get_offset_of_SlowSpeedTex_3() { return static_cast<int32_t>(offsetof(SlowMoButton_t174812079, ___SlowSpeedTex_3)); }
	inline Sprite_t3199167241 * get_SlowSpeedTex_3() const { return ___SlowSpeedTex_3; }
	inline Sprite_t3199167241 ** get_address_of_SlowSpeedTex_3() { return &___SlowSpeedTex_3; }
	inline void set_SlowSpeedTex_3(Sprite_t3199167241 * value)
	{
		___SlowSpeedTex_3 = value;
		Il2CppCodeGenWriteBarrier(&___SlowSpeedTex_3, value);
	}

	inline static int32_t get_offset_of_fullSpeed_4() { return static_cast<int32_t>(offsetof(SlowMoButton_t174812079, ___fullSpeed_4)); }
	inline float get_fullSpeed_4() const { return ___fullSpeed_4; }
	inline float* get_address_of_fullSpeed_4() { return &___fullSpeed_4; }
	inline void set_fullSpeed_4(float value)
	{
		___fullSpeed_4 = value;
	}

	inline static int32_t get_offset_of_slowSpeed_5() { return static_cast<int32_t>(offsetof(SlowMoButton_t174812079, ___slowSpeed_5)); }
	inline float get_slowSpeed_5() const { return ___slowSpeed_5; }
	inline float* get_address_of_slowSpeed_5() { return &___slowSpeed_5; }
	inline void set_slowSpeed_5(float value)
	{
		___slowSpeed_5 = value;
	}

	inline static int32_t get_offset_of_button_6() { return static_cast<int32_t>(offsetof(SlowMoButton_t174812079, ___button_6)); }
	inline Button_t3896396478 * get_button_6() const { return ___button_6; }
	inline Button_t3896396478 ** get_address_of_button_6() { return &___button_6; }
	inline void set_button_6(Button_t3896396478 * value)
	{
		___button_6 = value;
		Il2CppCodeGenWriteBarrier(&___button_6, value);
	}

	inline static int32_t get_offset_of_m_SlowMo_7() { return static_cast<int32_t>(offsetof(SlowMoButton_t174812079, ___m_SlowMo_7)); }
	inline bool get_m_SlowMo_7() const { return ___m_SlowMo_7; }
	inline bool* get_address_of_m_SlowMo_7() { return &___m_SlowMo_7; }
	inline void set_m_SlowMo_7(bool value)
	{
		___m_SlowMo_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
