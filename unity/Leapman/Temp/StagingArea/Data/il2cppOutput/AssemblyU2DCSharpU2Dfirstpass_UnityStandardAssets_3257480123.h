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
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2376705138;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t3941751733;
// UnityEngine.Renderer
struct Renderer_t3076687687;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator
struct  AeroplanePropellerAnimator_t3257480123  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorModel
	Transform_t1659122786 * ___m_PropellorModel_3;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlur
	Transform_t1659122786 * ___m_PropellorBlur_4;
	// UnityEngine.Texture2D[] UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlurTextures
	Texture2DU5BU5D_t2376705138* ___m_PropellorBlurTextures_5;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_ThrottleBlurStart
	float ___m_ThrottleBlurStart_6;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_ThrottleBlurEnd
	float ___m_ThrottleBlurEnd_7;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_MaxRpm
	float ___m_MaxRpm_8;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_Plane
	AeroplaneController_t3941751733 * ___m_Plane_9;
	// System.Int32 UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlurState
	int32_t ___m_PropellorBlurState_10;
	// UnityEngine.Renderer UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorModelRenderer
	Renderer_t3076687687 * ___m_PropellorModelRenderer_11;
	// UnityEngine.Renderer UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlurRenderer
	Renderer_t3076687687 * ___m_PropellorBlurRenderer_12;

public:
	inline static int32_t get_offset_of_m_PropellorModel_3() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t3257480123, ___m_PropellorModel_3)); }
	inline Transform_t1659122786 * get_m_PropellorModel_3() const { return ___m_PropellorModel_3; }
	inline Transform_t1659122786 ** get_address_of_m_PropellorModel_3() { return &___m_PropellorModel_3; }
	inline void set_m_PropellorModel_3(Transform_t1659122786 * value)
	{
		___m_PropellorModel_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_PropellorModel_3, value);
	}

	inline static int32_t get_offset_of_m_PropellorBlur_4() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t3257480123, ___m_PropellorBlur_4)); }
	inline Transform_t1659122786 * get_m_PropellorBlur_4() const { return ___m_PropellorBlur_4; }
	inline Transform_t1659122786 ** get_address_of_m_PropellorBlur_4() { return &___m_PropellorBlur_4; }
	inline void set_m_PropellorBlur_4(Transform_t1659122786 * value)
	{
		___m_PropellorBlur_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_PropellorBlur_4, value);
	}

	inline static int32_t get_offset_of_m_PropellorBlurTextures_5() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t3257480123, ___m_PropellorBlurTextures_5)); }
	inline Texture2DU5BU5D_t2376705138* get_m_PropellorBlurTextures_5() const { return ___m_PropellorBlurTextures_5; }
	inline Texture2DU5BU5D_t2376705138** get_address_of_m_PropellorBlurTextures_5() { return &___m_PropellorBlurTextures_5; }
	inline void set_m_PropellorBlurTextures_5(Texture2DU5BU5D_t2376705138* value)
	{
		___m_PropellorBlurTextures_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_PropellorBlurTextures_5, value);
	}

	inline static int32_t get_offset_of_m_ThrottleBlurStart_6() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t3257480123, ___m_ThrottleBlurStart_6)); }
	inline float get_m_ThrottleBlurStart_6() const { return ___m_ThrottleBlurStart_6; }
	inline float* get_address_of_m_ThrottleBlurStart_6() { return &___m_ThrottleBlurStart_6; }
	inline void set_m_ThrottleBlurStart_6(float value)
	{
		___m_ThrottleBlurStart_6 = value;
	}

	inline static int32_t get_offset_of_m_ThrottleBlurEnd_7() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t3257480123, ___m_ThrottleBlurEnd_7)); }
	inline float get_m_ThrottleBlurEnd_7() const { return ___m_ThrottleBlurEnd_7; }
	inline float* get_address_of_m_ThrottleBlurEnd_7() { return &___m_ThrottleBlurEnd_7; }
	inline void set_m_ThrottleBlurEnd_7(float value)
	{
		___m_ThrottleBlurEnd_7 = value;
	}

	inline static int32_t get_offset_of_m_MaxRpm_8() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t3257480123, ___m_MaxRpm_8)); }
	inline float get_m_MaxRpm_8() const { return ___m_MaxRpm_8; }
	inline float* get_address_of_m_MaxRpm_8() { return &___m_MaxRpm_8; }
	inline void set_m_MaxRpm_8(float value)
	{
		___m_MaxRpm_8 = value;
	}

	inline static int32_t get_offset_of_m_Plane_9() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t3257480123, ___m_Plane_9)); }
	inline AeroplaneController_t3941751733 * get_m_Plane_9() const { return ___m_Plane_9; }
	inline AeroplaneController_t3941751733 ** get_address_of_m_Plane_9() { return &___m_Plane_9; }
	inline void set_m_Plane_9(AeroplaneController_t3941751733 * value)
	{
		___m_Plane_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Plane_9, value);
	}

	inline static int32_t get_offset_of_m_PropellorBlurState_10() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t3257480123, ___m_PropellorBlurState_10)); }
	inline int32_t get_m_PropellorBlurState_10() const { return ___m_PropellorBlurState_10; }
	inline int32_t* get_address_of_m_PropellorBlurState_10() { return &___m_PropellorBlurState_10; }
	inline void set_m_PropellorBlurState_10(int32_t value)
	{
		___m_PropellorBlurState_10 = value;
	}

	inline static int32_t get_offset_of_m_PropellorModelRenderer_11() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t3257480123, ___m_PropellorModelRenderer_11)); }
	inline Renderer_t3076687687 * get_m_PropellorModelRenderer_11() const { return ___m_PropellorModelRenderer_11; }
	inline Renderer_t3076687687 ** get_address_of_m_PropellorModelRenderer_11() { return &___m_PropellorModelRenderer_11; }
	inline void set_m_PropellorModelRenderer_11(Renderer_t3076687687 * value)
	{
		___m_PropellorModelRenderer_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_PropellorModelRenderer_11, value);
	}

	inline static int32_t get_offset_of_m_PropellorBlurRenderer_12() { return static_cast<int32_t>(offsetof(AeroplanePropellerAnimator_t3257480123, ___m_PropellorBlurRenderer_12)); }
	inline Renderer_t3076687687 * get_m_PropellorBlurRenderer_12() const { return ___m_PropellorBlurRenderer_12; }
	inline Renderer_t3076687687 ** get_address_of_m_PropellorBlurRenderer_12() { return &___m_PropellorBlurRenderer_12; }
	inline void set_m_PropellorBlurRenderer_12(Renderer_t3076687687 * value)
	{
		___m_PropellorBlurRenderer_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_PropellorBlurRenderer_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
