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
// UnityEngine.UI.Text
struct Text_t9039225;

#include "AssemblyU2DCSharp_MovingObject3243022669.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t2393081601  : public MovingObject_t3243022669
{
public:
	// System.Int32 Player::wallDamage
	int32_t ___wallDamage_7;
	// System.Int32 Player::pointsPerFood
	int32_t ___pointsPerFood_8;
	// System.Int32 Player::pointsPerSoda
	int32_t ___pointsPerSoda_9;
	// System.Single Player::restartLevelDelay
	float ___restartLevelDelay_10;
	// UnityEngine.AudioClip Player::moveSound1
	AudioClip_t794140988 * ___moveSound1_11;
	// UnityEngine.AudioClip Player::moveSound2
	AudioClip_t794140988 * ___moveSound2_12;
	// UnityEngine.AudioClip Player::eatSound1
	AudioClip_t794140988 * ___eatSound1_13;
	// UnityEngine.AudioClip Player::eatSound2
	AudioClip_t794140988 * ___eatSound2_14;
	// UnityEngine.AudioClip Player::drinkSound1
	AudioClip_t794140988 * ___drinkSound1_15;
	// UnityEngine.AudioClip Player::drinkSound2
	AudioClip_t794140988 * ___drinkSound2_16;
	// UnityEngine.AudioClip Player::gameOverSound
	AudioClip_t794140988 * ___gameOverSound_17;
	// UnityEngine.Vector2 Player::touchOrigin
	Vector2_t4282066565  ___touchOrigin_18;
	// UnityEngine.Animator Player::animator
	Animator_t2776330603 * ___animator_19;
	// System.Int32 Player::food
	int32_t ___food_20;
	// UnityEngine.UI.Text Player::foodText
	Text_t9039225 * ___foodText_21;

public:
	inline static int32_t get_offset_of_wallDamage_7() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___wallDamage_7)); }
	inline int32_t get_wallDamage_7() const { return ___wallDamage_7; }
	inline int32_t* get_address_of_wallDamage_7() { return &___wallDamage_7; }
	inline void set_wallDamage_7(int32_t value)
	{
		___wallDamage_7 = value;
	}

	inline static int32_t get_offset_of_pointsPerFood_8() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___pointsPerFood_8)); }
	inline int32_t get_pointsPerFood_8() const { return ___pointsPerFood_8; }
	inline int32_t* get_address_of_pointsPerFood_8() { return &___pointsPerFood_8; }
	inline void set_pointsPerFood_8(int32_t value)
	{
		___pointsPerFood_8 = value;
	}

	inline static int32_t get_offset_of_pointsPerSoda_9() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___pointsPerSoda_9)); }
	inline int32_t get_pointsPerSoda_9() const { return ___pointsPerSoda_9; }
	inline int32_t* get_address_of_pointsPerSoda_9() { return &___pointsPerSoda_9; }
	inline void set_pointsPerSoda_9(int32_t value)
	{
		___pointsPerSoda_9 = value;
	}

	inline static int32_t get_offset_of_restartLevelDelay_10() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___restartLevelDelay_10)); }
	inline float get_restartLevelDelay_10() const { return ___restartLevelDelay_10; }
	inline float* get_address_of_restartLevelDelay_10() { return &___restartLevelDelay_10; }
	inline void set_restartLevelDelay_10(float value)
	{
		___restartLevelDelay_10 = value;
	}

	inline static int32_t get_offset_of_moveSound1_11() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___moveSound1_11)); }
	inline AudioClip_t794140988 * get_moveSound1_11() const { return ___moveSound1_11; }
	inline AudioClip_t794140988 ** get_address_of_moveSound1_11() { return &___moveSound1_11; }
	inline void set_moveSound1_11(AudioClip_t794140988 * value)
	{
		___moveSound1_11 = value;
		Il2CppCodeGenWriteBarrier(&___moveSound1_11, value);
	}

	inline static int32_t get_offset_of_moveSound2_12() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___moveSound2_12)); }
	inline AudioClip_t794140988 * get_moveSound2_12() const { return ___moveSound2_12; }
	inline AudioClip_t794140988 ** get_address_of_moveSound2_12() { return &___moveSound2_12; }
	inline void set_moveSound2_12(AudioClip_t794140988 * value)
	{
		___moveSound2_12 = value;
		Il2CppCodeGenWriteBarrier(&___moveSound2_12, value);
	}

	inline static int32_t get_offset_of_eatSound1_13() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___eatSound1_13)); }
	inline AudioClip_t794140988 * get_eatSound1_13() const { return ___eatSound1_13; }
	inline AudioClip_t794140988 ** get_address_of_eatSound1_13() { return &___eatSound1_13; }
	inline void set_eatSound1_13(AudioClip_t794140988 * value)
	{
		___eatSound1_13 = value;
		Il2CppCodeGenWriteBarrier(&___eatSound1_13, value);
	}

	inline static int32_t get_offset_of_eatSound2_14() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___eatSound2_14)); }
	inline AudioClip_t794140988 * get_eatSound2_14() const { return ___eatSound2_14; }
	inline AudioClip_t794140988 ** get_address_of_eatSound2_14() { return &___eatSound2_14; }
	inline void set_eatSound2_14(AudioClip_t794140988 * value)
	{
		___eatSound2_14 = value;
		Il2CppCodeGenWriteBarrier(&___eatSound2_14, value);
	}

	inline static int32_t get_offset_of_drinkSound1_15() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___drinkSound1_15)); }
	inline AudioClip_t794140988 * get_drinkSound1_15() const { return ___drinkSound1_15; }
	inline AudioClip_t794140988 ** get_address_of_drinkSound1_15() { return &___drinkSound1_15; }
	inline void set_drinkSound1_15(AudioClip_t794140988 * value)
	{
		___drinkSound1_15 = value;
		Il2CppCodeGenWriteBarrier(&___drinkSound1_15, value);
	}

	inline static int32_t get_offset_of_drinkSound2_16() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___drinkSound2_16)); }
	inline AudioClip_t794140988 * get_drinkSound2_16() const { return ___drinkSound2_16; }
	inline AudioClip_t794140988 ** get_address_of_drinkSound2_16() { return &___drinkSound2_16; }
	inline void set_drinkSound2_16(AudioClip_t794140988 * value)
	{
		___drinkSound2_16 = value;
		Il2CppCodeGenWriteBarrier(&___drinkSound2_16, value);
	}

	inline static int32_t get_offset_of_gameOverSound_17() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___gameOverSound_17)); }
	inline AudioClip_t794140988 * get_gameOverSound_17() const { return ___gameOverSound_17; }
	inline AudioClip_t794140988 ** get_address_of_gameOverSound_17() { return &___gameOverSound_17; }
	inline void set_gameOverSound_17(AudioClip_t794140988 * value)
	{
		___gameOverSound_17 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverSound_17, value);
	}

	inline static int32_t get_offset_of_touchOrigin_18() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___touchOrigin_18)); }
	inline Vector2_t4282066565  get_touchOrigin_18() const { return ___touchOrigin_18; }
	inline Vector2_t4282066565 * get_address_of_touchOrigin_18() { return &___touchOrigin_18; }
	inline void set_touchOrigin_18(Vector2_t4282066565  value)
	{
		___touchOrigin_18 = value;
	}

	inline static int32_t get_offset_of_animator_19() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___animator_19)); }
	inline Animator_t2776330603 * get_animator_19() const { return ___animator_19; }
	inline Animator_t2776330603 ** get_address_of_animator_19() { return &___animator_19; }
	inline void set_animator_19(Animator_t2776330603 * value)
	{
		___animator_19 = value;
		Il2CppCodeGenWriteBarrier(&___animator_19, value);
	}

	inline static int32_t get_offset_of_food_20() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___food_20)); }
	inline int32_t get_food_20() const { return ___food_20; }
	inline int32_t* get_address_of_food_20() { return &___food_20; }
	inline void set_food_20(int32_t value)
	{
		___food_20 = value;
	}

	inline static int32_t get_offset_of_foodText_21() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___foodText_21)); }
	inline Text_t9039225 * get_foodText_21() const { return ___foodText_21; }
	inline Text_t9039225 ** get_address_of_foodText_21() { return &___foodText_21; }
	inline void set_foodText_21(Text_t9039225 * value)
	{
		___foodText_21 = value;
		Il2CppCodeGenWriteBarrier(&___foodText_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
