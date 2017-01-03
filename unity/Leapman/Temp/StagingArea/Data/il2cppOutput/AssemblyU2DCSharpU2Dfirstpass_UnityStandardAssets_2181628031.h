#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Material
struct Material_t3870600107;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
struct Dictionary_2_t4254752268;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Water.PlanarReflection
struct  PlanarReflection_t2181628031  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.LayerMask UnityStandardAssets.Water.PlanarReflection::reflectionMask
	LayerMask_t3236759763  ___reflectionMask_2;
	// System.Boolean UnityStandardAssets.Water.PlanarReflection::reflectSkybox
	bool ___reflectSkybox_3;
	// UnityEngine.Color UnityStandardAssets.Water.PlanarReflection::clearColor
	Color_t4194546905  ___clearColor_4;
	// System.String UnityStandardAssets.Water.PlanarReflection::reflectionSampler
	String_t* ___reflectionSampler_5;
	// System.Single UnityStandardAssets.Water.PlanarReflection::clipPlaneOffset
	float ___clipPlaneOffset_6;
	// UnityEngine.Vector3 UnityStandardAssets.Water.PlanarReflection::m_Oldpos
	Vector3_t4282066566  ___m_Oldpos_7;
	// UnityEngine.Camera UnityStandardAssets.Water.PlanarReflection::m_ReflectionCamera
	Camera_t2727095145 * ___m_ReflectionCamera_8;
	// UnityEngine.Material UnityStandardAssets.Water.PlanarReflection::m_SharedMaterial
	Material_t3870600107 * ___m_SharedMaterial_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean> UnityStandardAssets.Water.PlanarReflection::m_HelperCameras
	Dictionary_2_t4254752268 * ___m_HelperCameras_10;

public:
	inline static int32_t get_offset_of_reflectionMask_2() { return static_cast<int32_t>(offsetof(PlanarReflection_t2181628031, ___reflectionMask_2)); }
	inline LayerMask_t3236759763  get_reflectionMask_2() const { return ___reflectionMask_2; }
	inline LayerMask_t3236759763 * get_address_of_reflectionMask_2() { return &___reflectionMask_2; }
	inline void set_reflectionMask_2(LayerMask_t3236759763  value)
	{
		___reflectionMask_2 = value;
	}

	inline static int32_t get_offset_of_reflectSkybox_3() { return static_cast<int32_t>(offsetof(PlanarReflection_t2181628031, ___reflectSkybox_3)); }
	inline bool get_reflectSkybox_3() const { return ___reflectSkybox_3; }
	inline bool* get_address_of_reflectSkybox_3() { return &___reflectSkybox_3; }
	inline void set_reflectSkybox_3(bool value)
	{
		___reflectSkybox_3 = value;
	}

	inline static int32_t get_offset_of_clearColor_4() { return static_cast<int32_t>(offsetof(PlanarReflection_t2181628031, ___clearColor_4)); }
	inline Color_t4194546905  get_clearColor_4() const { return ___clearColor_4; }
	inline Color_t4194546905 * get_address_of_clearColor_4() { return &___clearColor_4; }
	inline void set_clearColor_4(Color_t4194546905  value)
	{
		___clearColor_4 = value;
	}

	inline static int32_t get_offset_of_reflectionSampler_5() { return static_cast<int32_t>(offsetof(PlanarReflection_t2181628031, ___reflectionSampler_5)); }
	inline String_t* get_reflectionSampler_5() const { return ___reflectionSampler_5; }
	inline String_t** get_address_of_reflectionSampler_5() { return &___reflectionSampler_5; }
	inline void set_reflectionSampler_5(String_t* value)
	{
		___reflectionSampler_5 = value;
		Il2CppCodeGenWriteBarrier(&___reflectionSampler_5, value);
	}

	inline static int32_t get_offset_of_clipPlaneOffset_6() { return static_cast<int32_t>(offsetof(PlanarReflection_t2181628031, ___clipPlaneOffset_6)); }
	inline float get_clipPlaneOffset_6() const { return ___clipPlaneOffset_6; }
	inline float* get_address_of_clipPlaneOffset_6() { return &___clipPlaneOffset_6; }
	inline void set_clipPlaneOffset_6(float value)
	{
		___clipPlaneOffset_6 = value;
	}

	inline static int32_t get_offset_of_m_Oldpos_7() { return static_cast<int32_t>(offsetof(PlanarReflection_t2181628031, ___m_Oldpos_7)); }
	inline Vector3_t4282066566  get_m_Oldpos_7() const { return ___m_Oldpos_7; }
	inline Vector3_t4282066566 * get_address_of_m_Oldpos_7() { return &___m_Oldpos_7; }
	inline void set_m_Oldpos_7(Vector3_t4282066566  value)
	{
		___m_Oldpos_7 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionCamera_8() { return static_cast<int32_t>(offsetof(PlanarReflection_t2181628031, ___m_ReflectionCamera_8)); }
	inline Camera_t2727095145 * get_m_ReflectionCamera_8() const { return ___m_ReflectionCamera_8; }
	inline Camera_t2727095145 ** get_address_of_m_ReflectionCamera_8() { return &___m_ReflectionCamera_8; }
	inline void set_m_ReflectionCamera_8(Camera_t2727095145 * value)
	{
		___m_ReflectionCamera_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_ReflectionCamera_8, value);
	}

	inline static int32_t get_offset_of_m_SharedMaterial_9() { return static_cast<int32_t>(offsetof(PlanarReflection_t2181628031, ___m_SharedMaterial_9)); }
	inline Material_t3870600107 * get_m_SharedMaterial_9() const { return ___m_SharedMaterial_9; }
	inline Material_t3870600107 ** get_address_of_m_SharedMaterial_9() { return &___m_SharedMaterial_9; }
	inline void set_m_SharedMaterial_9(Material_t3870600107 * value)
	{
		___m_SharedMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_SharedMaterial_9, value);
	}

	inline static int32_t get_offset_of_m_HelperCameras_10() { return static_cast<int32_t>(offsetof(PlanarReflection_t2181628031, ___m_HelperCameras_10)); }
	inline Dictionary_2_t4254752268 * get_m_HelperCameras_10() const { return ___m_HelperCameras_10; }
	inline Dictionary_2_t4254752268 ** get_address_of_m_HelperCameras_10() { return &___m_HelperCameras_10; }
	inline void set_m_HelperCameras_10(Dictionary_2_t4254752268 * value)
	{
		___m_HelperCameras_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_HelperCameras_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
