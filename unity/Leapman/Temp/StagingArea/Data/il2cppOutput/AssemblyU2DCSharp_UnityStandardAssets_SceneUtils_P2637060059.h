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
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_SceneUtils_P1413530022.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_SceneUtils_P2912369701.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem
struct  DemoParticleSystem_t2637060059  : public Il2CppObject
{
public:
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::transform
	Transform_t1659122786 * ___transform_0;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/Mode UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::mode
	int32_t ___mode_1;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/AlignMode UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::align
	int32_t ___align_2;
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::maxCount
	int32_t ___maxCount_3;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::minDist
	float ___minDist_4;
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::camOffset
	int32_t ___camOffset_5;
	// System.String UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::instructionText
	String_t* ___instructionText_6;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t2637060059, ___transform_0)); }
	inline Transform_t1659122786 * get_transform_0() const { return ___transform_0; }
	inline Transform_t1659122786 ** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(Transform_t1659122786 * value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier(&___transform_0, value);
	}

	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t2637060059, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_align_2() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t2637060059, ___align_2)); }
	inline int32_t get_align_2() const { return ___align_2; }
	inline int32_t* get_address_of_align_2() { return &___align_2; }
	inline void set_align_2(int32_t value)
	{
		___align_2 = value;
	}

	inline static int32_t get_offset_of_maxCount_3() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t2637060059, ___maxCount_3)); }
	inline int32_t get_maxCount_3() const { return ___maxCount_3; }
	inline int32_t* get_address_of_maxCount_3() { return &___maxCount_3; }
	inline void set_maxCount_3(int32_t value)
	{
		___maxCount_3 = value;
	}

	inline static int32_t get_offset_of_minDist_4() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t2637060059, ___minDist_4)); }
	inline float get_minDist_4() const { return ___minDist_4; }
	inline float* get_address_of_minDist_4() { return &___minDist_4; }
	inline void set_minDist_4(float value)
	{
		___minDist_4 = value;
	}

	inline static int32_t get_offset_of_camOffset_5() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t2637060059, ___camOffset_5)); }
	inline int32_t get_camOffset_5() const { return ___camOffset_5; }
	inline int32_t* get_address_of_camOffset_5() { return &___camOffset_5; }
	inline void set_camOffset_5(int32_t value)
	{
		___camOffset_5 = value;
	}

	inline static int32_t get_offset_of_instructionText_6() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t2637060059, ___instructionText_6)); }
	inline String_t* get_instructionText_6() const { return ___instructionText_6; }
	inline String_t** get_address_of_instructionText_6() { return &___instructionText_6; }
	inline void set_instructionText_6(String_t* value)
	{
		___instructionText_6 = value;
		Il2CppCodeGenWriteBarrier(&___instructionText_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
