#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wall
struct  Wall_t2688490  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Sprite Wall::dmgSprite
	Sprite_t3199167241 * ___dmgSprite_2;
	// System.Int32 Wall::hp
	int32_t ___hp_3;
	// UnityEngine.SpriteRenderer Wall::spriteRenderer
	SpriteRenderer_t2548470764 * ___spriteRenderer_4;
	// UnityEngine.AudioClip Wall::chopSound1
	AudioClip_t794140988 * ___chopSound1_5;
	// UnityEngine.AudioClip Wall::chopSound2
	AudioClip_t794140988 * ___chopSound2_6;

public:
	inline static int32_t get_offset_of_dmgSprite_2() { return static_cast<int32_t>(offsetof(Wall_t2688490, ___dmgSprite_2)); }
	inline Sprite_t3199167241 * get_dmgSprite_2() const { return ___dmgSprite_2; }
	inline Sprite_t3199167241 ** get_address_of_dmgSprite_2() { return &___dmgSprite_2; }
	inline void set_dmgSprite_2(Sprite_t3199167241 * value)
	{
		___dmgSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___dmgSprite_2, value);
	}

	inline static int32_t get_offset_of_hp_3() { return static_cast<int32_t>(offsetof(Wall_t2688490, ___hp_3)); }
	inline int32_t get_hp_3() const { return ___hp_3; }
	inline int32_t* get_address_of_hp_3() { return &___hp_3; }
	inline void set_hp_3(int32_t value)
	{
		___hp_3 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_4() { return static_cast<int32_t>(offsetof(Wall_t2688490, ___spriteRenderer_4)); }
	inline SpriteRenderer_t2548470764 * get_spriteRenderer_4() const { return ___spriteRenderer_4; }
	inline SpriteRenderer_t2548470764 ** get_address_of_spriteRenderer_4() { return &___spriteRenderer_4; }
	inline void set_spriteRenderer_4(SpriteRenderer_t2548470764 * value)
	{
		___spriteRenderer_4 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_4, value);
	}

	inline static int32_t get_offset_of_chopSound1_5() { return static_cast<int32_t>(offsetof(Wall_t2688490, ___chopSound1_5)); }
	inline AudioClip_t794140988 * get_chopSound1_5() const { return ___chopSound1_5; }
	inline AudioClip_t794140988 ** get_address_of_chopSound1_5() { return &___chopSound1_5; }
	inline void set_chopSound1_5(AudioClip_t794140988 * value)
	{
		___chopSound1_5 = value;
		Il2CppCodeGenWriteBarrier(&___chopSound1_5, value);
	}

	inline static int32_t get_offset_of_chopSound2_6() { return static_cast<int32_t>(offsetof(Wall_t2688490, ___chopSound2_6)); }
	inline AudioClip_t794140988 * get_chopSound2_6() const { return ___chopSound2_6; }
	inline AudioClip_t794140988 ** get_address_of_chopSound2_6() { return &___chopSound2_6; }
	inline void set_chopSound2_6(AudioClip_t794140988 * value)
	{
		___chopSound2_6 = value;
		Il2CppCodeGenWriteBarrier(&___chopSound2_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
