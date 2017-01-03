#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>
struct Dictionary_2_t2210081399;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2817869650.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Water.Water
struct  Water_t1031722193  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::waterMode
	int32_t ___waterMode_2;
	// System.Boolean UnityStandardAssets.Water.Water::disablePixelLights
	bool ___disablePixelLights_3;
	// System.Int32 UnityStandardAssets.Water.Water::textureSize
	int32_t ___textureSize_4;
	// System.Single UnityStandardAssets.Water.Water::clipPlaneOffset
	float ___clipPlaneOffset_5;
	// UnityEngine.LayerMask UnityStandardAssets.Water.Water::reflectLayers
	LayerMask_t3236759763  ___reflectLayers_6;
	// UnityEngine.LayerMask UnityStandardAssets.Water.Water::refractLayers
	LayerMask_t3236759763  ___refractLayers_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera> UnityStandardAssets.Water.Water::m_ReflectionCameras
	Dictionary_2_t2210081399 * ___m_ReflectionCameras_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera> UnityStandardAssets.Water.Water::m_RefractionCameras
	Dictionary_2_t2210081399 * ___m_RefractionCameras_9;
	// UnityEngine.RenderTexture UnityStandardAssets.Water.Water::m_ReflectionTexture
	RenderTexture_t1963041563 * ___m_ReflectionTexture_10;
	// UnityEngine.RenderTexture UnityStandardAssets.Water.Water::m_RefractionTexture
	RenderTexture_t1963041563 * ___m_RefractionTexture_11;
	// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::m_HardwareWaterSupport
	int32_t ___m_HardwareWaterSupport_12;
	// System.Int32 UnityStandardAssets.Water.Water::m_OldReflectionTextureSize
	int32_t ___m_OldReflectionTextureSize_13;
	// System.Int32 UnityStandardAssets.Water.Water::m_OldRefractionTextureSize
	int32_t ___m_OldRefractionTextureSize_14;

public:
	inline static int32_t get_offset_of_waterMode_2() { return static_cast<int32_t>(offsetof(Water_t1031722193, ___waterMode_2)); }
	inline int32_t get_waterMode_2() const { return ___waterMode_2; }
	inline int32_t* get_address_of_waterMode_2() { return &___waterMode_2; }
	inline void set_waterMode_2(int32_t value)
	{
		___waterMode_2 = value;
	}

	inline static int32_t get_offset_of_disablePixelLights_3() { return static_cast<int32_t>(offsetof(Water_t1031722193, ___disablePixelLights_3)); }
	inline bool get_disablePixelLights_3() const { return ___disablePixelLights_3; }
	inline bool* get_address_of_disablePixelLights_3() { return &___disablePixelLights_3; }
	inline void set_disablePixelLights_3(bool value)
	{
		___disablePixelLights_3 = value;
	}

	inline static int32_t get_offset_of_textureSize_4() { return static_cast<int32_t>(offsetof(Water_t1031722193, ___textureSize_4)); }
	inline int32_t get_textureSize_4() const { return ___textureSize_4; }
	inline int32_t* get_address_of_textureSize_4() { return &___textureSize_4; }
	inline void set_textureSize_4(int32_t value)
	{
		___textureSize_4 = value;
	}

	inline static int32_t get_offset_of_clipPlaneOffset_5() { return static_cast<int32_t>(offsetof(Water_t1031722193, ___clipPlaneOffset_5)); }
	inline float get_clipPlaneOffset_5() const { return ___clipPlaneOffset_5; }
	inline float* get_address_of_clipPlaneOffset_5() { return &___clipPlaneOffset_5; }
	inline void set_clipPlaneOffset_5(float value)
	{
		___clipPlaneOffset_5 = value;
	}

	inline static int32_t get_offset_of_reflectLayers_6() { return static_cast<int32_t>(offsetof(Water_t1031722193, ___reflectLayers_6)); }
	inline LayerMask_t3236759763  get_reflectLayers_6() const { return ___reflectLayers_6; }
	inline LayerMask_t3236759763 * get_address_of_reflectLayers_6() { return &___reflectLayers_6; }
	inline void set_reflectLayers_6(LayerMask_t3236759763  value)
	{
		___reflectLayers_6 = value;
	}

	inline static int32_t get_offset_of_refractLayers_7() { return static_cast<int32_t>(offsetof(Water_t1031722193, ___refractLayers_7)); }
	inline LayerMask_t3236759763  get_refractLayers_7() const { return ___refractLayers_7; }
	inline LayerMask_t3236759763 * get_address_of_refractLayers_7() { return &___refractLayers_7; }
	inline void set_refractLayers_7(LayerMask_t3236759763  value)
	{
		___refractLayers_7 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionCameras_8() { return static_cast<int32_t>(offsetof(Water_t1031722193, ___m_ReflectionCameras_8)); }
	inline Dictionary_2_t2210081399 * get_m_ReflectionCameras_8() const { return ___m_ReflectionCameras_8; }
	inline Dictionary_2_t2210081399 ** get_address_of_m_ReflectionCameras_8() { return &___m_ReflectionCameras_8; }
	inline void set_m_ReflectionCameras_8(Dictionary_2_t2210081399 * value)
	{
		___m_ReflectionCameras_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_ReflectionCameras_8, value);
	}

	inline static int32_t get_offset_of_m_RefractionCameras_9() { return static_cast<int32_t>(offsetof(Water_t1031722193, ___m_RefractionCameras_9)); }
	inline Dictionary_2_t2210081399 * get_m_RefractionCameras_9() const { return ___m_RefractionCameras_9; }
	inline Dictionary_2_t2210081399 ** get_address_of_m_RefractionCameras_9() { return &___m_RefractionCameras_9; }
	inline void set_m_RefractionCameras_9(Dictionary_2_t2210081399 * value)
	{
		___m_RefractionCameras_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_RefractionCameras_9, value);
	}

	inline static int32_t get_offset_of_m_ReflectionTexture_10() { return static_cast<int32_t>(offsetof(Water_t1031722193, ___m_ReflectionTexture_10)); }
	inline RenderTexture_t1963041563 * get_m_ReflectionTexture_10() const { return ___m_ReflectionTexture_10; }
	inline RenderTexture_t1963041563 ** get_address_of_m_ReflectionTexture_10() { return &___m_ReflectionTexture_10; }
	inline void set_m_ReflectionTexture_10(RenderTexture_t1963041563 * value)
	{
		___m_ReflectionTexture_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_ReflectionTexture_10, value);
	}

	inline static int32_t get_offset_of_m_RefractionTexture_11() { return static_cast<int32_t>(offsetof(Water_t1031722193, ___m_RefractionTexture_11)); }
	inline RenderTexture_t1963041563 * get_m_RefractionTexture_11() const { return ___m_RefractionTexture_11; }
	inline RenderTexture_t1963041563 ** get_address_of_m_RefractionTexture_11() { return &___m_RefractionTexture_11; }
	inline void set_m_RefractionTexture_11(RenderTexture_t1963041563 * value)
	{
		___m_RefractionTexture_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_RefractionTexture_11, value);
	}

	inline static int32_t get_offset_of_m_HardwareWaterSupport_12() { return static_cast<int32_t>(offsetof(Water_t1031722193, ___m_HardwareWaterSupport_12)); }
	inline int32_t get_m_HardwareWaterSupport_12() const { return ___m_HardwareWaterSupport_12; }
	inline int32_t* get_address_of_m_HardwareWaterSupport_12() { return &___m_HardwareWaterSupport_12; }
	inline void set_m_HardwareWaterSupport_12(int32_t value)
	{
		___m_HardwareWaterSupport_12 = value;
	}

	inline static int32_t get_offset_of_m_OldReflectionTextureSize_13() { return static_cast<int32_t>(offsetof(Water_t1031722193, ___m_OldReflectionTextureSize_13)); }
	inline int32_t get_m_OldReflectionTextureSize_13() const { return ___m_OldReflectionTextureSize_13; }
	inline int32_t* get_address_of_m_OldReflectionTextureSize_13() { return &___m_OldReflectionTextureSize_13; }
	inline void set_m_OldReflectionTextureSize_13(int32_t value)
	{
		___m_OldReflectionTextureSize_13 = value;
	}

	inline static int32_t get_offset_of_m_OldRefractionTextureSize_14() { return static_cast<int32_t>(offsetof(Water_t1031722193, ___m_OldRefractionTextureSize_14)); }
	inline int32_t get_m_OldRefractionTextureSize_14() const { return ___m_OldRefractionTextureSize_14; }
	inline int32_t* get_address_of_m_OldRefractionTextureSize_14() { return &___m_OldRefractionTextureSize_14; }
	inline void set_m_OldRefractionTextureSize_14(int32_t value)
	{
		___m_OldRefractionTextureSize_14 = value;
	}
};

struct Water_t1031722193_StaticFields
{
public:
	// System.Boolean UnityStandardAssets.Water.Water::s_InsideWater
	bool ___s_InsideWater_15;

public:
	inline static int32_t get_offset_of_s_InsideWater_15() { return static_cast<int32_t>(offsetof(Water_t1031722193_StaticFields, ___s_InsideWater_15)); }
	inline bool get_s_InsideWater_15() const { return ___s_InsideWater_15; }
	inline bool* get_address_of_s_InsideWater_15() { return &___s_InsideWater_15; }
	inline void set_s_InsideWater_15(bool value)
	{
		___s_InsideWater_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
