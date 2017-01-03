#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// timedTrigger
struct  timedTrigger_t3365055105  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Image timedTrigger::cross
	Image_t538875265 * ___cross_2;
	// System.Single timedTrigger::countdown
	float ___countdown_3;
	// UnityEngine.Vector2 timedTrigger::startPosition
	Vector2_t4282066565  ___startPosition_4;

public:
	inline static int32_t get_offset_of_cross_2() { return static_cast<int32_t>(offsetof(timedTrigger_t3365055105, ___cross_2)); }
	inline Image_t538875265 * get_cross_2() const { return ___cross_2; }
	inline Image_t538875265 ** get_address_of_cross_2() { return &___cross_2; }
	inline void set_cross_2(Image_t538875265 * value)
	{
		___cross_2 = value;
		Il2CppCodeGenWriteBarrier(&___cross_2, value);
	}

	inline static int32_t get_offset_of_countdown_3() { return static_cast<int32_t>(offsetof(timedTrigger_t3365055105, ___countdown_3)); }
	inline float get_countdown_3() const { return ___countdown_3; }
	inline float* get_address_of_countdown_3() { return &___countdown_3; }
	inline void set_countdown_3(float value)
	{
		___countdown_3 = value;
	}

	inline static int32_t get_offset_of_startPosition_4() { return static_cast<int32_t>(offsetof(timedTrigger_t3365055105, ___startPosition_4)); }
	inline Vector2_t4282066565  get_startPosition_4() const { return ___startPosition_4; }
	inline Vector2_t4282066565 * get_address_of_startPosition_4() { return &___startPosition_4; }
	inline void set_startPosition_4(Vector2_t4282066565  value)
	{
		___startPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
