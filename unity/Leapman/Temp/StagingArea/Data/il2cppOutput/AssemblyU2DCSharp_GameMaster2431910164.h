#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameMaster
struct GameMaster_t2431910164;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameMaster
struct  GameMaster_t2431910164  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text GameMaster::levelText
	Text_t9039225 * ___levelText_4;
	// UnityEngine.Transform GameMaster::playerPrefab
	Transform_t1659122786 * ___playerPrefab_6;
	// UnityEngine.Transform GameMaster::spawnPoint
	Transform_t1659122786 * ___spawnPoint_7;

public:
	inline static int32_t get_offset_of_levelText_4() { return static_cast<int32_t>(offsetof(GameMaster_t2431910164, ___levelText_4)); }
	inline Text_t9039225 * get_levelText_4() const { return ___levelText_4; }
	inline Text_t9039225 ** get_address_of_levelText_4() { return &___levelText_4; }
	inline void set_levelText_4(Text_t9039225 * value)
	{
		___levelText_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelText_4, value);
	}

	inline static int32_t get_offset_of_playerPrefab_6() { return static_cast<int32_t>(offsetof(GameMaster_t2431910164, ___playerPrefab_6)); }
	inline Transform_t1659122786 * get_playerPrefab_6() const { return ___playerPrefab_6; }
	inline Transform_t1659122786 ** get_address_of_playerPrefab_6() { return &___playerPrefab_6; }
	inline void set_playerPrefab_6(Transform_t1659122786 * value)
	{
		___playerPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerPrefab_6, value);
	}

	inline static int32_t get_offset_of_spawnPoint_7() { return static_cast<int32_t>(offsetof(GameMaster_t2431910164, ___spawnPoint_7)); }
	inline Transform_t1659122786 * get_spawnPoint_7() const { return ___spawnPoint_7; }
	inline Transform_t1659122786 ** get_address_of_spawnPoint_7() { return &___spawnPoint_7; }
	inline void set_spawnPoint_7(Transform_t1659122786 * value)
	{
		___spawnPoint_7 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPoint_7, value);
	}
};

struct GameMaster_t2431910164_StaticFields
{
public:
	// GameMaster GameMaster::gm
	GameMaster_t2431910164 * ___gm_2;
	// System.Int32 GameMaster::spawnDelay
	int32_t ___spawnDelay_3;
	// System.Boolean GameMaster::levelEnd
	bool ___levelEnd_5;

public:
	inline static int32_t get_offset_of_gm_2() { return static_cast<int32_t>(offsetof(GameMaster_t2431910164_StaticFields, ___gm_2)); }
	inline GameMaster_t2431910164 * get_gm_2() const { return ___gm_2; }
	inline GameMaster_t2431910164 ** get_address_of_gm_2() { return &___gm_2; }
	inline void set_gm_2(GameMaster_t2431910164 * value)
	{
		___gm_2 = value;
		Il2CppCodeGenWriteBarrier(&___gm_2, value);
	}

	inline static int32_t get_offset_of_spawnDelay_3() { return static_cast<int32_t>(offsetof(GameMaster_t2431910164_StaticFields, ___spawnDelay_3)); }
	inline int32_t get_spawnDelay_3() const { return ___spawnDelay_3; }
	inline int32_t* get_address_of_spawnDelay_3() { return &___spawnDelay_3; }
	inline void set_spawnDelay_3(int32_t value)
	{
		___spawnDelay_3 = value;
	}

	inline static int32_t get_offset_of_levelEnd_5() { return static_cast<int32_t>(offsetof(GameMaster_t2431910164_StaticFields, ___levelEnd_5)); }
	inline bool get_levelEnd_5() const { return ___levelEnd_5; }
	inline bool* get_address_of_levelEnd_5() { return &___levelEnd_5; }
	inline void set_levelEnd_5(bool value)
	{
		___levelEnd_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
