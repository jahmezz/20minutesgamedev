#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[]
struct DemoParticleSystemU5BU5D_t2317074010;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList
struct  DemoParticleSystemList_t744298265  : public Il2CppObject
{
public:
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[] UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList::items
	DemoParticleSystemU5BU5D_t2317074010* ___items_0;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(DemoParticleSystemList_t744298265, ___items_0)); }
	inline DemoParticleSystemU5BU5D_t2317074010* get_items_0() const { return ___items_0; }
	inline DemoParticleSystemU5BU5D_t2317074010** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(DemoParticleSystemU5BU5D_t2317074010* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier(&___items_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
