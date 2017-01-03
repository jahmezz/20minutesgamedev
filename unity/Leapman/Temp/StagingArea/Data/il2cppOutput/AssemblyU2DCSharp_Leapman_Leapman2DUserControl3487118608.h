#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Leapman.LeapmanCharacter2D
struct LeapmanCharacter2D_t338350411;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leapman.Leapman2DUserControl
struct  Leapman2DUserControl_t3487118608  : public MonoBehaviour_t667441552
{
public:
	// Leapman.LeapmanCharacter2D Leapman.Leapman2DUserControl::Character
	LeapmanCharacter2D_t338350411 * ___Character_2;
	// System.Boolean Leapman.Leapman2DUserControl::IsJump
	bool ___IsJump_3;
	// System.Boolean Leapman.Leapman2DUserControl::IsDash
	bool ___IsDash_4;
	// System.Boolean Leapman.Leapman2DUserControl::IsBlink
	bool ___IsBlink_5;
	// System.Boolean Leapman.Leapman2DUserControl::WasBlink
	bool ___WasBlink_6;

public:
	inline static int32_t get_offset_of_Character_2() { return static_cast<int32_t>(offsetof(Leapman2DUserControl_t3487118608, ___Character_2)); }
	inline LeapmanCharacter2D_t338350411 * get_Character_2() const { return ___Character_2; }
	inline LeapmanCharacter2D_t338350411 ** get_address_of_Character_2() { return &___Character_2; }
	inline void set_Character_2(LeapmanCharacter2D_t338350411 * value)
	{
		___Character_2 = value;
		Il2CppCodeGenWriteBarrier(&___Character_2, value);
	}

	inline static int32_t get_offset_of_IsJump_3() { return static_cast<int32_t>(offsetof(Leapman2DUserControl_t3487118608, ___IsJump_3)); }
	inline bool get_IsJump_3() const { return ___IsJump_3; }
	inline bool* get_address_of_IsJump_3() { return &___IsJump_3; }
	inline void set_IsJump_3(bool value)
	{
		___IsJump_3 = value;
	}

	inline static int32_t get_offset_of_IsDash_4() { return static_cast<int32_t>(offsetof(Leapman2DUserControl_t3487118608, ___IsDash_4)); }
	inline bool get_IsDash_4() const { return ___IsDash_4; }
	inline bool* get_address_of_IsDash_4() { return &___IsDash_4; }
	inline void set_IsDash_4(bool value)
	{
		___IsDash_4 = value;
	}

	inline static int32_t get_offset_of_IsBlink_5() { return static_cast<int32_t>(offsetof(Leapman2DUserControl_t3487118608, ___IsBlink_5)); }
	inline bool get_IsBlink_5() const { return ___IsBlink_5; }
	inline bool* get_address_of_IsBlink_5() { return &___IsBlink_5; }
	inline void set_IsBlink_5(bool value)
	{
		___IsBlink_5 = value;
	}

	inline static int32_t get_offset_of_WasBlink_6() { return static_cast<int32_t>(offsetof(Leapman2DUserControl_t3487118608, ___WasBlink_6)); }
	inline bool get_WasBlink_6() const { return ___WasBlink_6; }
	inline bool* get_address_of_WasBlink_6() { return &___WasBlink_6; }
	inline void set_WasBlink_6(bool value)
	{
		___WasBlink_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
