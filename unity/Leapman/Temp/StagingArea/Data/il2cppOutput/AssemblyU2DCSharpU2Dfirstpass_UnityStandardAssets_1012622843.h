#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio/AdvancedSetttings
struct AdvancedSetttings_t3327081854;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t3941751733;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio
struct  AeroplaneAudio_t1012622843  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineSound
	AudioClip_t794140988 * ___m_EngineSound_2;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineMinThrottlePitch
	float ___m_EngineMinThrottlePitch_3;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineMaxThrottlePitch
	float ___m_EngineMaxThrottlePitch_4;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineFwdSpeedMultiplier
	float ___m_EngineFwdSpeedMultiplier_5;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindSound
	AudioClip_t794140988 * ___m_WindSound_6;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindBasePitch
	float ___m_WindBasePitch_7;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindSpeedPitchFactor
	float ___m_WindSpeedPitchFactor_8;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindMaxSpeedVolume
	float ___m_WindMaxSpeedVolume_9;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio/AdvancedSetttings UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_AdvancedSetttings
	AdvancedSetttings_t3327081854 * ___m_AdvancedSetttings_10;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineSoundSource
	AudioSource_t1740077639 * ___m_EngineSoundSource_11;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindSoundSource
	AudioSource_t1740077639 * ___m_WindSoundSource_12;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_Plane
	AeroplaneController_t3941751733 * ___m_Plane_13;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_Rigidbody
	Rigidbody_t3346577219 * ___m_Rigidbody_14;

public:
	inline static int32_t get_offset_of_m_EngineSound_2() { return static_cast<int32_t>(offsetof(AeroplaneAudio_t1012622843, ___m_EngineSound_2)); }
	inline AudioClip_t794140988 * get_m_EngineSound_2() const { return ___m_EngineSound_2; }
	inline AudioClip_t794140988 ** get_address_of_m_EngineSound_2() { return &___m_EngineSound_2; }
	inline void set_m_EngineSound_2(AudioClip_t794140988 * value)
	{
		___m_EngineSound_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_EngineSound_2, value);
	}

	inline static int32_t get_offset_of_m_EngineMinThrottlePitch_3() { return static_cast<int32_t>(offsetof(AeroplaneAudio_t1012622843, ___m_EngineMinThrottlePitch_3)); }
	inline float get_m_EngineMinThrottlePitch_3() const { return ___m_EngineMinThrottlePitch_3; }
	inline float* get_address_of_m_EngineMinThrottlePitch_3() { return &___m_EngineMinThrottlePitch_3; }
	inline void set_m_EngineMinThrottlePitch_3(float value)
	{
		___m_EngineMinThrottlePitch_3 = value;
	}

	inline static int32_t get_offset_of_m_EngineMaxThrottlePitch_4() { return static_cast<int32_t>(offsetof(AeroplaneAudio_t1012622843, ___m_EngineMaxThrottlePitch_4)); }
	inline float get_m_EngineMaxThrottlePitch_4() const { return ___m_EngineMaxThrottlePitch_4; }
	inline float* get_address_of_m_EngineMaxThrottlePitch_4() { return &___m_EngineMaxThrottlePitch_4; }
	inline void set_m_EngineMaxThrottlePitch_4(float value)
	{
		___m_EngineMaxThrottlePitch_4 = value;
	}

	inline static int32_t get_offset_of_m_EngineFwdSpeedMultiplier_5() { return static_cast<int32_t>(offsetof(AeroplaneAudio_t1012622843, ___m_EngineFwdSpeedMultiplier_5)); }
	inline float get_m_EngineFwdSpeedMultiplier_5() const { return ___m_EngineFwdSpeedMultiplier_5; }
	inline float* get_address_of_m_EngineFwdSpeedMultiplier_5() { return &___m_EngineFwdSpeedMultiplier_5; }
	inline void set_m_EngineFwdSpeedMultiplier_5(float value)
	{
		___m_EngineFwdSpeedMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_WindSound_6() { return static_cast<int32_t>(offsetof(AeroplaneAudio_t1012622843, ___m_WindSound_6)); }
	inline AudioClip_t794140988 * get_m_WindSound_6() const { return ___m_WindSound_6; }
	inline AudioClip_t794140988 ** get_address_of_m_WindSound_6() { return &___m_WindSound_6; }
	inline void set_m_WindSound_6(AudioClip_t794140988 * value)
	{
		___m_WindSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_WindSound_6, value);
	}

	inline static int32_t get_offset_of_m_WindBasePitch_7() { return static_cast<int32_t>(offsetof(AeroplaneAudio_t1012622843, ___m_WindBasePitch_7)); }
	inline float get_m_WindBasePitch_7() const { return ___m_WindBasePitch_7; }
	inline float* get_address_of_m_WindBasePitch_7() { return &___m_WindBasePitch_7; }
	inline void set_m_WindBasePitch_7(float value)
	{
		___m_WindBasePitch_7 = value;
	}

	inline static int32_t get_offset_of_m_WindSpeedPitchFactor_8() { return static_cast<int32_t>(offsetof(AeroplaneAudio_t1012622843, ___m_WindSpeedPitchFactor_8)); }
	inline float get_m_WindSpeedPitchFactor_8() const { return ___m_WindSpeedPitchFactor_8; }
	inline float* get_address_of_m_WindSpeedPitchFactor_8() { return &___m_WindSpeedPitchFactor_8; }
	inline void set_m_WindSpeedPitchFactor_8(float value)
	{
		___m_WindSpeedPitchFactor_8 = value;
	}

	inline static int32_t get_offset_of_m_WindMaxSpeedVolume_9() { return static_cast<int32_t>(offsetof(AeroplaneAudio_t1012622843, ___m_WindMaxSpeedVolume_9)); }
	inline float get_m_WindMaxSpeedVolume_9() const { return ___m_WindMaxSpeedVolume_9; }
	inline float* get_address_of_m_WindMaxSpeedVolume_9() { return &___m_WindMaxSpeedVolume_9; }
	inline void set_m_WindMaxSpeedVolume_9(float value)
	{
		___m_WindMaxSpeedVolume_9 = value;
	}

	inline static int32_t get_offset_of_m_AdvancedSetttings_10() { return static_cast<int32_t>(offsetof(AeroplaneAudio_t1012622843, ___m_AdvancedSetttings_10)); }
	inline AdvancedSetttings_t3327081854 * get_m_AdvancedSetttings_10() const { return ___m_AdvancedSetttings_10; }
	inline AdvancedSetttings_t3327081854 ** get_address_of_m_AdvancedSetttings_10() { return &___m_AdvancedSetttings_10; }
	inline void set_m_AdvancedSetttings_10(AdvancedSetttings_t3327081854 * value)
	{
		___m_AdvancedSetttings_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_AdvancedSetttings_10, value);
	}

	inline static int32_t get_offset_of_m_EngineSoundSource_11() { return static_cast<int32_t>(offsetof(AeroplaneAudio_t1012622843, ___m_EngineSoundSource_11)); }
	inline AudioSource_t1740077639 * get_m_EngineSoundSource_11() const { return ___m_EngineSoundSource_11; }
	inline AudioSource_t1740077639 ** get_address_of_m_EngineSoundSource_11() { return &___m_EngineSoundSource_11; }
	inline void set_m_EngineSoundSource_11(AudioSource_t1740077639 * value)
	{
		___m_EngineSoundSource_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_EngineSoundSource_11, value);
	}

	inline static int32_t get_offset_of_m_WindSoundSource_12() { return static_cast<int32_t>(offsetof(AeroplaneAudio_t1012622843, ___m_WindSoundSource_12)); }
	inline AudioSource_t1740077639 * get_m_WindSoundSource_12() const { return ___m_WindSoundSource_12; }
	inline AudioSource_t1740077639 ** get_address_of_m_WindSoundSource_12() { return &___m_WindSoundSource_12; }
	inline void set_m_WindSoundSource_12(AudioSource_t1740077639 * value)
	{
		___m_WindSoundSource_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_WindSoundSource_12, value);
	}

	inline static int32_t get_offset_of_m_Plane_13() { return static_cast<int32_t>(offsetof(AeroplaneAudio_t1012622843, ___m_Plane_13)); }
	inline AeroplaneController_t3941751733 * get_m_Plane_13() const { return ___m_Plane_13; }
	inline AeroplaneController_t3941751733 ** get_address_of_m_Plane_13() { return &___m_Plane_13; }
	inline void set_m_Plane_13(AeroplaneController_t3941751733 * value)
	{
		___m_Plane_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_Plane_13, value);
	}

	inline static int32_t get_offset_of_m_Rigidbody_14() { return static_cast<int32_t>(offsetof(AeroplaneAudio_t1012622843, ___m_Rigidbody_14)); }
	inline Rigidbody_t3346577219 * get_m_Rigidbody_14() const { return ___m_Rigidbody_14; }
	inline Rigidbody_t3346577219 ** get_address_of_m_Rigidbody_14() { return &___m_Rigidbody_14; }
	inline void set_m_Rigidbody_14(Rigidbody_t3346577219 * value)
	{
		___m_Rigidbody_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
