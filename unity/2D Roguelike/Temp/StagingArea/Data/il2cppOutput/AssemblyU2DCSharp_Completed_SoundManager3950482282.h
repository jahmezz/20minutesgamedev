#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// Completed.SoundManager
struct SoundManager_t3950482282;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Completed.SoundManager
struct  SoundManager_t3950482282  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioSource Completed.SoundManager::efxSource
	AudioSource_t1740077639 * ___efxSource_2;
	// UnityEngine.AudioSource Completed.SoundManager::musicSource
	AudioSource_t1740077639 * ___musicSource_3;
	// System.Single Completed.SoundManager::lowPitchRange
	float ___lowPitchRange_5;
	// System.Single Completed.SoundManager::highPitchRange
	float ___highPitchRange_6;

public:
	inline static int32_t get_offset_of_efxSource_2() { return static_cast<int32_t>(offsetof(SoundManager_t3950482282, ___efxSource_2)); }
	inline AudioSource_t1740077639 * get_efxSource_2() const { return ___efxSource_2; }
	inline AudioSource_t1740077639 ** get_address_of_efxSource_2() { return &___efxSource_2; }
	inline void set_efxSource_2(AudioSource_t1740077639 * value)
	{
		___efxSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___efxSource_2, value);
	}

	inline static int32_t get_offset_of_musicSource_3() { return static_cast<int32_t>(offsetof(SoundManager_t3950482282, ___musicSource_3)); }
	inline AudioSource_t1740077639 * get_musicSource_3() const { return ___musicSource_3; }
	inline AudioSource_t1740077639 ** get_address_of_musicSource_3() { return &___musicSource_3; }
	inline void set_musicSource_3(AudioSource_t1740077639 * value)
	{
		___musicSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicSource_3, value);
	}

	inline static int32_t get_offset_of_lowPitchRange_5() { return static_cast<int32_t>(offsetof(SoundManager_t3950482282, ___lowPitchRange_5)); }
	inline float get_lowPitchRange_5() const { return ___lowPitchRange_5; }
	inline float* get_address_of_lowPitchRange_5() { return &___lowPitchRange_5; }
	inline void set_lowPitchRange_5(float value)
	{
		___lowPitchRange_5 = value;
	}

	inline static int32_t get_offset_of_highPitchRange_6() { return static_cast<int32_t>(offsetof(SoundManager_t3950482282, ___highPitchRange_6)); }
	inline float get_highPitchRange_6() const { return ___highPitchRange_6; }
	inline float* get_address_of_highPitchRange_6() { return &___highPitchRange_6; }
	inline void set_highPitchRange_6(float value)
	{
		___highPitchRange_6 = value;
	}
};

struct SoundManager_t3950482282_StaticFields
{
public:
	// Completed.SoundManager Completed.SoundManager::instance
	SoundManager_t3950482282 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(SoundManager_t3950482282_StaticFields, ___instance_4)); }
	inline SoundManager_t3950482282 * get_instance_4() const { return ___instance_4; }
	inline SoundManager_t3950482282 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(SoundManager_t3950482282 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
