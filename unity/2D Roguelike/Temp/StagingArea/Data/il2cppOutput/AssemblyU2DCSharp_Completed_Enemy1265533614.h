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
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "AssemblyU2DCSharp_Completed_MovingObject454195449.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Completed.Enemy
struct  Enemy_t1265533614  : public MovingObject_t454195449
{
public:
	// System.Int32 Completed.Enemy::playerDamage
	int32_t ___playerDamage_7;
	// UnityEngine.AudioClip Completed.Enemy::attackSound1
	AudioClip_t794140988 * ___attackSound1_8;
	// UnityEngine.AudioClip Completed.Enemy::attackSound2
	AudioClip_t794140988 * ___attackSound2_9;
	// UnityEngine.Animator Completed.Enemy::animator
	Animator_t2776330603 * ___animator_10;
	// UnityEngine.Transform Completed.Enemy::target
	Transform_t1659122786 * ___target_11;
	// System.Boolean Completed.Enemy::skipMove
	bool ___skipMove_12;

public:
	inline static int32_t get_offset_of_playerDamage_7() { return static_cast<int32_t>(offsetof(Enemy_t1265533614, ___playerDamage_7)); }
	inline int32_t get_playerDamage_7() const { return ___playerDamage_7; }
	inline int32_t* get_address_of_playerDamage_7() { return &___playerDamage_7; }
	inline void set_playerDamage_7(int32_t value)
	{
		___playerDamage_7 = value;
	}

	inline static int32_t get_offset_of_attackSound1_8() { return static_cast<int32_t>(offsetof(Enemy_t1265533614, ___attackSound1_8)); }
	inline AudioClip_t794140988 * get_attackSound1_8() const { return ___attackSound1_8; }
	inline AudioClip_t794140988 ** get_address_of_attackSound1_8() { return &___attackSound1_8; }
	inline void set_attackSound1_8(AudioClip_t794140988 * value)
	{
		___attackSound1_8 = value;
		Il2CppCodeGenWriteBarrier(&___attackSound1_8, value);
	}

	inline static int32_t get_offset_of_attackSound2_9() { return static_cast<int32_t>(offsetof(Enemy_t1265533614, ___attackSound2_9)); }
	inline AudioClip_t794140988 * get_attackSound2_9() const { return ___attackSound2_9; }
	inline AudioClip_t794140988 ** get_address_of_attackSound2_9() { return &___attackSound2_9; }
	inline void set_attackSound2_9(AudioClip_t794140988 * value)
	{
		___attackSound2_9 = value;
		Il2CppCodeGenWriteBarrier(&___attackSound2_9, value);
	}

	inline static int32_t get_offset_of_animator_10() { return static_cast<int32_t>(offsetof(Enemy_t1265533614, ___animator_10)); }
	inline Animator_t2776330603 * get_animator_10() const { return ___animator_10; }
	inline Animator_t2776330603 ** get_address_of_animator_10() { return &___animator_10; }
	inline void set_animator_10(Animator_t2776330603 * value)
	{
		___animator_10 = value;
		Il2CppCodeGenWriteBarrier(&___animator_10, value);
	}

	inline static int32_t get_offset_of_target_11() { return static_cast<int32_t>(offsetof(Enemy_t1265533614, ___target_11)); }
	inline Transform_t1659122786 * get_target_11() const { return ___target_11; }
	inline Transform_t1659122786 ** get_address_of_target_11() { return &___target_11; }
	inline void set_target_11(Transform_t1659122786 * value)
	{
		___target_11 = value;
		Il2CppCodeGenWriteBarrier(&___target_11, value);
	}

	inline static int32_t get_offset_of_skipMove_12() { return static_cast<int32_t>(offsetof(Enemy_t1265533614, ___skipMove_12)); }
	inline bool get_skipMove_12() const { return ___skipMove_12; }
	inline bool* get_address_of_skipMove_12() { return &___skipMove_12; }
	inline void set_skipMove_12(bool value)
	{
		___skipMove_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
