#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.Animator
struct Animator_t2776330603;

#include "AssemblyU2DCSharp_Completed_MovingObject454195449.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Completed.Player
struct  Player_t3910536429  : public MovingObject_t454195449
{
public:
	// System.Single Completed.Player::restartLevelDelay
	float ___restartLevelDelay_7;
	// System.Int32 Completed.Player::pointsPerFood
	int32_t ___pointsPerFood_8;
	// System.Int32 Completed.Player::pointsPerSoda
	int32_t ___pointsPerSoda_9;
	// System.Int32 Completed.Player::wallDamage
	int32_t ___wallDamage_10;
	// UnityEngine.UI.Text Completed.Player::foodText
	Text_t9039225 * ___foodText_11;
	// UnityEngine.AudioClip Completed.Player::moveSound1
	AudioClip_t794140988 * ___moveSound1_12;
	// UnityEngine.AudioClip Completed.Player::moveSound2
	AudioClip_t794140988 * ___moveSound2_13;
	// UnityEngine.AudioClip Completed.Player::eatSound1
	AudioClip_t794140988 * ___eatSound1_14;
	// UnityEngine.AudioClip Completed.Player::eatSound2
	AudioClip_t794140988 * ___eatSound2_15;
	// UnityEngine.AudioClip Completed.Player::drinkSound1
	AudioClip_t794140988 * ___drinkSound1_16;
	// UnityEngine.AudioClip Completed.Player::drinkSound2
	AudioClip_t794140988 * ___drinkSound2_17;
	// UnityEngine.AudioClip Completed.Player::gameOverSound
	AudioClip_t794140988 * ___gameOverSound_18;
	// UnityEngine.Animator Completed.Player::animator
	Animator_t2776330603 * ___animator_19;
	// System.Int32 Completed.Player::food
	int32_t ___food_20;
	// UnityEngine.Vector2 Completed.Player::touchOrigin
	Vector2_t4282066565  ___touchOrigin_21;

public:
	inline static int32_t get_offset_of_restartLevelDelay_7() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___restartLevelDelay_7)); }
	inline float get_restartLevelDelay_7() const { return ___restartLevelDelay_7; }
	inline float* get_address_of_restartLevelDelay_7() { return &___restartLevelDelay_7; }
	inline void set_restartLevelDelay_7(float value)
	{
		___restartLevelDelay_7 = value;
	}

	inline static int32_t get_offset_of_pointsPerFood_8() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___pointsPerFood_8)); }
	inline int32_t get_pointsPerFood_8() const { return ___pointsPerFood_8; }
	inline int32_t* get_address_of_pointsPerFood_8() { return &___pointsPerFood_8; }
	inline void set_pointsPerFood_8(int32_t value)
	{
		___pointsPerFood_8 = value;
	}

	inline static int32_t get_offset_of_pointsPerSoda_9() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___pointsPerSoda_9)); }
	inline int32_t get_pointsPerSoda_9() const { return ___pointsPerSoda_9; }
	inline int32_t* get_address_of_pointsPerSoda_9() { return &___pointsPerSoda_9; }
	inline void set_pointsPerSoda_9(int32_t value)
	{
		___pointsPerSoda_9 = value;
	}

	inline static int32_t get_offset_of_wallDamage_10() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___wallDamage_10)); }
	inline int32_t get_wallDamage_10() const { return ___wallDamage_10; }
	inline int32_t* get_address_of_wallDamage_10() { return &___wallDamage_10; }
	inline void set_wallDamage_10(int32_t value)
	{
		___wallDamage_10 = value;
	}

	inline static int32_t get_offset_of_foodText_11() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___foodText_11)); }
	inline Text_t9039225 * get_foodText_11() const { return ___foodText_11; }
	inline Text_t9039225 ** get_address_of_foodText_11() { return &___foodText_11; }
	inline void set_foodText_11(Text_t9039225 * value)
	{
		___foodText_11 = value;
		Il2CppCodeGenWriteBarrier(&___foodText_11, value);
	}

	inline static int32_t get_offset_of_moveSound1_12() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___moveSound1_12)); }
	inline AudioClip_t794140988 * get_moveSound1_12() const { return ___moveSound1_12; }
	inline AudioClip_t794140988 ** get_address_of_moveSound1_12() { return &___moveSound1_12; }
	inline void set_moveSound1_12(AudioClip_t794140988 * value)
	{
		___moveSound1_12 = value;
		Il2CppCodeGenWriteBarrier(&___moveSound1_12, value);
	}

	inline static int32_t get_offset_of_moveSound2_13() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___moveSound2_13)); }
	inline AudioClip_t794140988 * get_moveSound2_13() const { return ___moveSound2_13; }
	inline AudioClip_t794140988 ** get_address_of_moveSound2_13() { return &___moveSound2_13; }
	inline void set_moveSound2_13(AudioClip_t794140988 * value)
	{
		___moveSound2_13 = value;
		Il2CppCodeGenWriteBarrier(&___moveSound2_13, value);
	}

	inline static int32_t get_offset_of_eatSound1_14() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___eatSound1_14)); }
	inline AudioClip_t794140988 * get_eatSound1_14() const { return ___eatSound1_14; }
	inline AudioClip_t794140988 ** get_address_of_eatSound1_14() { return &___eatSound1_14; }
	inline void set_eatSound1_14(AudioClip_t794140988 * value)
	{
		___eatSound1_14 = value;
		Il2CppCodeGenWriteBarrier(&___eatSound1_14, value);
	}

	inline static int32_t get_offset_of_eatSound2_15() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___eatSound2_15)); }
	inline AudioClip_t794140988 * get_eatSound2_15() const { return ___eatSound2_15; }
	inline AudioClip_t794140988 ** get_address_of_eatSound2_15() { return &___eatSound2_15; }
	inline void set_eatSound2_15(AudioClip_t794140988 * value)
	{
		___eatSound2_15 = value;
		Il2CppCodeGenWriteBarrier(&___eatSound2_15, value);
	}

	inline static int32_t get_offset_of_drinkSound1_16() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___drinkSound1_16)); }
	inline AudioClip_t794140988 * get_drinkSound1_16() const { return ___drinkSound1_16; }
	inline AudioClip_t794140988 ** get_address_of_drinkSound1_16() { return &___drinkSound1_16; }
	inline void set_drinkSound1_16(AudioClip_t794140988 * value)
	{
		___drinkSound1_16 = value;
		Il2CppCodeGenWriteBarrier(&___drinkSound1_16, value);
	}

	inline static int32_t get_offset_of_drinkSound2_17() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___drinkSound2_17)); }
	inline AudioClip_t794140988 * get_drinkSound2_17() const { return ___drinkSound2_17; }
	inline AudioClip_t794140988 ** get_address_of_drinkSound2_17() { return &___drinkSound2_17; }
	inline void set_drinkSound2_17(AudioClip_t794140988 * value)
	{
		___drinkSound2_17 = value;
		Il2CppCodeGenWriteBarrier(&___drinkSound2_17, value);
	}

	inline static int32_t get_offset_of_gameOverSound_18() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___gameOverSound_18)); }
	inline AudioClip_t794140988 * get_gameOverSound_18() const { return ___gameOverSound_18; }
	inline AudioClip_t794140988 ** get_address_of_gameOverSound_18() { return &___gameOverSound_18; }
	inline void set_gameOverSound_18(AudioClip_t794140988 * value)
	{
		___gameOverSound_18 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverSound_18, value);
	}

	inline static int32_t get_offset_of_animator_19() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___animator_19)); }
	inline Animator_t2776330603 * get_animator_19() const { return ___animator_19; }
	inline Animator_t2776330603 ** get_address_of_animator_19() { return &___animator_19; }
	inline void set_animator_19(Animator_t2776330603 * value)
	{
		___animator_19 = value;
		Il2CppCodeGenWriteBarrier(&___animator_19, value);
	}

	inline static int32_t get_offset_of_food_20() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___food_20)); }
	inline int32_t get_food_20() const { return ___food_20; }
	inline int32_t* get_address_of_food_20() { return &___food_20; }
	inline void set_food_20(int32_t value)
	{
		___food_20 = value;
	}

	inline static int32_t get_offset_of_touchOrigin_21() { return static_cast<int32_t>(offsetof(Player_t3910536429, ___touchOrigin_21)); }
	inline Vector2_t4282066565  get_touchOrigin_21() const { return ___touchOrigin_21; }
	inline Vector2_t4282066565 * get_address_of_touchOrigin_21() { return &___touchOrigin_21; }
	inline void set_touchOrigin_21(Vector2_t4282066565  value)
	{
		___touchOrigin_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
