#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Water.PlanarReflection
struct PlanarReflection_t2181628031;
// UnityStandardAssets.Water.WaterBase
struct WaterBase_t1333257282;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Water.WaterTile
struct  WaterTile_t1333800991  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.Water.PlanarReflection UnityStandardAssets.Water.WaterTile::reflection
	PlanarReflection_t2181628031 * ___reflection_2;
	// UnityStandardAssets.Water.WaterBase UnityStandardAssets.Water.WaterTile::waterBase
	WaterBase_t1333257282 * ___waterBase_3;

public:
	inline static int32_t get_offset_of_reflection_2() { return static_cast<int32_t>(offsetof(WaterTile_t1333800991, ___reflection_2)); }
	inline PlanarReflection_t2181628031 * get_reflection_2() const { return ___reflection_2; }
	inline PlanarReflection_t2181628031 ** get_address_of_reflection_2() { return &___reflection_2; }
	inline void set_reflection_2(PlanarReflection_t2181628031 * value)
	{
		___reflection_2 = value;
		Il2CppCodeGenWriteBarrier(&___reflection_2, value);
	}

	inline static int32_t get_offset_of_waterBase_3() { return static_cast<int32_t>(offsetof(WaterTile_t1333800991, ___waterBase_3)); }
	inline WaterBase_t1333257282 * get_waterBase_3() const { return ___waterBase_3; }
	inline WaterBase_t1333257282 ** get_address_of_waterBase_3() { return &___waterBase_3; }
	inline void set_waterBase_3(WaterBase_t1333257282 * value)
	{
		___waterBase_3 = value;
		Il2CppCodeGenWriteBarrier(&___waterBase_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
