#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "AssemblyU2DCSharp_MovingObject3243022669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t67100520  : public MovingObject_t3243022669
{
public:
	// System.Int32 Enemy::playerDamage
	int32_t ___playerDamage_7;
	// UnityEngine.Animator Enemy::animator
	Animator_t2776330603 * ___animator_8;
	// UnityEngine.Transform Enemy::target
	Transform_t1659122786 * ___target_9;
	// System.Boolean Enemy::skipMove
	bool ___skipMove_10;
	// UnityEngine.AudioClip Enemy::enemyAttack1
	AudioClip_t794140988 * ___enemyAttack1_11;
	// UnityEngine.AudioClip Enemy::enemyAttack2
	AudioClip_t794140988 * ___enemyAttack2_12;

public:
	inline static int32_t get_offset_of_playerDamage_7() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___playerDamage_7)); }
	inline int32_t get_playerDamage_7() const { return ___playerDamage_7; }
	inline int32_t* get_address_of_playerDamage_7() { return &___playerDamage_7; }
	inline void set_playerDamage_7(int32_t value)
	{
		___playerDamage_7 = value;
	}

	inline static int32_t get_offset_of_animator_8() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___animator_8)); }
	inline Animator_t2776330603 * get_animator_8() const { return ___animator_8; }
	inline Animator_t2776330603 ** get_address_of_animator_8() { return &___animator_8; }
	inline void set_animator_8(Animator_t2776330603 * value)
	{
		___animator_8 = value;
		Il2CppCodeGenWriteBarrier(&___animator_8, value);
	}

	inline static int32_t get_offset_of_target_9() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___target_9)); }
	inline Transform_t1659122786 * get_target_9() const { return ___target_9; }
	inline Transform_t1659122786 ** get_address_of_target_9() { return &___target_9; }
	inline void set_target_9(Transform_t1659122786 * value)
	{
		___target_9 = value;
		Il2CppCodeGenWriteBarrier(&___target_9, value);
	}

	inline static int32_t get_offset_of_skipMove_10() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___skipMove_10)); }
	inline bool get_skipMove_10() const { return ___skipMove_10; }
	inline bool* get_address_of_skipMove_10() { return &___skipMove_10; }
	inline void set_skipMove_10(bool value)
	{
		___skipMove_10 = value;
	}

	inline static int32_t get_offset_of_enemyAttack1_11() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___enemyAttack1_11)); }
	inline AudioClip_t794140988 * get_enemyAttack1_11() const { return ___enemyAttack1_11; }
	inline AudioClip_t794140988 ** get_address_of_enemyAttack1_11() { return &___enemyAttack1_11; }
	inline void set_enemyAttack1_11(AudioClip_t794140988 * value)
	{
		___enemyAttack1_11 = value;
		Il2CppCodeGenWriteBarrier(&___enemyAttack1_11, value);
	}

	inline static int32_t get_offset_of_enemyAttack2_12() { return static_cast<int32_t>(offsetof(Enemy_t67100520, ___enemyAttack2_12)); }
	inline AudioClip_t794140988 * get_enemyAttack2_12() const { return ___enemyAttack2_12; }
	inline AudioClip_t794140988 ** get_address_of_enemyAttack2_12() { return &___enemyAttack2_12; }
	inline void set_enemyAttack2_12(AudioClip_t794140988 * value)
	{
		___enemyAttack2_12 = value;
		Il2CppCodeGenWriteBarrier(&___enemyAttack2_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
