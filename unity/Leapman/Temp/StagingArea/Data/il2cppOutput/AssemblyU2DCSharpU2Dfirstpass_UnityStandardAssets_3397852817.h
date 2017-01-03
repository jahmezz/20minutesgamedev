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
// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.WheelCollider
struct WheelCollider_t2281208037;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Car.WheelEffects
struct  WheelEffects_t3397852817  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.WheelEffects::SkidTrailPrefab
	Transform_t1659122786 * ___SkidTrailPrefab_2;
	// UnityEngine.ParticleSystem UnityStandardAssets.Vehicles.Car.WheelEffects::skidParticles
	ParticleSystem_t381473177 * ___skidParticles_4;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.WheelEffects::m_AudioSource
	AudioSource_t1740077639 * ___m_AudioSource_5;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.WheelEffects::m_SkidTrail
	Transform_t1659122786 * ___m_SkidTrail_6;
	// UnityEngine.WheelCollider UnityStandardAssets.Vehicles.Car.WheelEffects::m_WheelCollider
	WheelCollider_t2281208037 * ___m_WheelCollider_7;
	// System.Boolean UnityStandardAssets.Vehicles.Car.WheelEffects::<skidding>k__BackingField
	bool ___U3CskiddingU3Ek__BackingField_8;
	// System.Boolean UnityStandardAssets.Vehicles.Car.WheelEffects::<PlayingAudio>k__BackingField
	bool ___U3CPlayingAudioU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_SkidTrailPrefab_2() { return static_cast<int32_t>(offsetof(WheelEffects_t3397852817, ___SkidTrailPrefab_2)); }
	inline Transform_t1659122786 * get_SkidTrailPrefab_2() const { return ___SkidTrailPrefab_2; }
	inline Transform_t1659122786 ** get_address_of_SkidTrailPrefab_2() { return &___SkidTrailPrefab_2; }
	inline void set_SkidTrailPrefab_2(Transform_t1659122786 * value)
	{
		___SkidTrailPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___SkidTrailPrefab_2, value);
	}

	inline static int32_t get_offset_of_skidParticles_4() { return static_cast<int32_t>(offsetof(WheelEffects_t3397852817, ___skidParticles_4)); }
	inline ParticleSystem_t381473177 * get_skidParticles_4() const { return ___skidParticles_4; }
	inline ParticleSystem_t381473177 ** get_address_of_skidParticles_4() { return &___skidParticles_4; }
	inline void set_skidParticles_4(ParticleSystem_t381473177 * value)
	{
		___skidParticles_4 = value;
		Il2CppCodeGenWriteBarrier(&___skidParticles_4, value);
	}

	inline static int32_t get_offset_of_m_AudioSource_5() { return static_cast<int32_t>(offsetof(WheelEffects_t3397852817, ___m_AudioSource_5)); }
	inline AudioSource_t1740077639 * get_m_AudioSource_5() const { return ___m_AudioSource_5; }
	inline AudioSource_t1740077639 ** get_address_of_m_AudioSource_5() { return &___m_AudioSource_5; }
	inline void set_m_AudioSource_5(AudioSource_t1740077639 * value)
	{
		___m_AudioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_AudioSource_5, value);
	}

	inline static int32_t get_offset_of_m_SkidTrail_6() { return static_cast<int32_t>(offsetof(WheelEffects_t3397852817, ___m_SkidTrail_6)); }
	inline Transform_t1659122786 * get_m_SkidTrail_6() const { return ___m_SkidTrail_6; }
	inline Transform_t1659122786 ** get_address_of_m_SkidTrail_6() { return &___m_SkidTrail_6; }
	inline void set_m_SkidTrail_6(Transform_t1659122786 * value)
	{
		___m_SkidTrail_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_SkidTrail_6, value);
	}

	inline static int32_t get_offset_of_m_WheelCollider_7() { return static_cast<int32_t>(offsetof(WheelEffects_t3397852817, ___m_WheelCollider_7)); }
	inline WheelCollider_t2281208037 * get_m_WheelCollider_7() const { return ___m_WheelCollider_7; }
	inline WheelCollider_t2281208037 ** get_address_of_m_WheelCollider_7() { return &___m_WheelCollider_7; }
	inline void set_m_WheelCollider_7(WheelCollider_t2281208037 * value)
	{
		___m_WheelCollider_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_WheelCollider_7, value);
	}

	inline static int32_t get_offset_of_U3CskiddingU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WheelEffects_t3397852817, ___U3CskiddingU3Ek__BackingField_8)); }
	inline bool get_U3CskiddingU3Ek__BackingField_8() const { return ___U3CskiddingU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CskiddingU3Ek__BackingField_8() { return &___U3CskiddingU3Ek__BackingField_8; }
	inline void set_U3CskiddingU3Ek__BackingField_8(bool value)
	{
		___U3CskiddingU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CPlayingAudioU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(WheelEffects_t3397852817, ___U3CPlayingAudioU3Ek__BackingField_9)); }
	inline bool get_U3CPlayingAudioU3Ek__BackingField_9() const { return ___U3CPlayingAudioU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CPlayingAudioU3Ek__BackingField_9() { return &___U3CPlayingAudioU3Ek__BackingField_9; }
	inline void set_U3CPlayingAudioU3Ek__BackingField_9(bool value)
	{
		___U3CPlayingAudioU3Ek__BackingField_9 = value;
	}
};

struct WheelEffects_t3397852817_StaticFields
{
public:
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.WheelEffects::skidTrailsDetachedParent
	Transform_t1659122786 * ___skidTrailsDetachedParent_3;

public:
	inline static int32_t get_offset_of_skidTrailsDetachedParent_3() { return static_cast<int32_t>(offsetof(WheelEffects_t3397852817_StaticFields, ___skidTrailsDetachedParent_3)); }
	inline Transform_t1659122786 * get_skidTrailsDetachedParent_3() const { return ___skidTrailsDetachedParent_3; }
	inline Transform_t1659122786 ** get_address_of_skidTrailsDetachedParent_3() { return &___skidTrailsDetachedParent_3; }
	inline void set_skidTrailsDetachedParent_3(Transform_t1659122786 * value)
	{
		___skidTrailsDetachedParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___skidTrailsDetachedParent_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
