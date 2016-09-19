#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2369589051;
// BoardManager
struct BoardManager_t1245355527;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<Enemy>
struct List_1_t1435286072;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2369589051  : public MonoBehaviour_t667441552
{
public:
	// System.Single GameManager::levelStartDelay
	float ___levelStartDelay_2;
	// System.Single GameManager::turnDelay
	float ___turnDelay_3;
	// BoardManager GameManager::boardScript
	BoardManager_t1245355527 * ___boardScript_5;
	// System.Int32 GameManager::playerFoodPoints
	int32_t ___playerFoodPoints_6;
	// System.Boolean GameManager::playersTurn
	bool ___playersTurn_7;
	// UnityEngine.UI.Text GameManager::levelText
	Text_t9039225 * ___levelText_8;
	// UnityEngine.GameObject GameManager::levelImage
	GameObject_t3674682005 * ___levelImage_9;
	// System.Int32 GameManager::level
	int32_t ___level_10;
	// System.Collections.Generic.List`1<Enemy> GameManager::enemies
	List_1_t1435286072 * ___enemies_11;
	// System.Boolean GameManager::enemiesMoving
	bool ___enemiesMoving_12;
	// System.Boolean GameManager::doingSetup
	bool ___doingSetup_13;

public:
	inline static int32_t get_offset_of_levelStartDelay_2() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___levelStartDelay_2)); }
	inline float get_levelStartDelay_2() const { return ___levelStartDelay_2; }
	inline float* get_address_of_levelStartDelay_2() { return &___levelStartDelay_2; }
	inline void set_levelStartDelay_2(float value)
	{
		___levelStartDelay_2 = value;
	}

	inline static int32_t get_offset_of_turnDelay_3() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___turnDelay_3)); }
	inline float get_turnDelay_3() const { return ___turnDelay_3; }
	inline float* get_address_of_turnDelay_3() { return &___turnDelay_3; }
	inline void set_turnDelay_3(float value)
	{
		___turnDelay_3 = value;
	}

	inline static int32_t get_offset_of_boardScript_5() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___boardScript_5)); }
	inline BoardManager_t1245355527 * get_boardScript_5() const { return ___boardScript_5; }
	inline BoardManager_t1245355527 ** get_address_of_boardScript_5() { return &___boardScript_5; }
	inline void set_boardScript_5(BoardManager_t1245355527 * value)
	{
		___boardScript_5 = value;
		Il2CppCodeGenWriteBarrier(&___boardScript_5, value);
	}

	inline static int32_t get_offset_of_playerFoodPoints_6() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___playerFoodPoints_6)); }
	inline int32_t get_playerFoodPoints_6() const { return ___playerFoodPoints_6; }
	inline int32_t* get_address_of_playerFoodPoints_6() { return &___playerFoodPoints_6; }
	inline void set_playerFoodPoints_6(int32_t value)
	{
		___playerFoodPoints_6 = value;
	}

	inline static int32_t get_offset_of_playersTurn_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___playersTurn_7)); }
	inline bool get_playersTurn_7() const { return ___playersTurn_7; }
	inline bool* get_address_of_playersTurn_7() { return &___playersTurn_7; }
	inline void set_playersTurn_7(bool value)
	{
		___playersTurn_7 = value;
	}

	inline static int32_t get_offset_of_levelText_8() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___levelText_8)); }
	inline Text_t9039225 * get_levelText_8() const { return ___levelText_8; }
	inline Text_t9039225 ** get_address_of_levelText_8() { return &___levelText_8; }
	inline void set_levelText_8(Text_t9039225 * value)
	{
		___levelText_8 = value;
		Il2CppCodeGenWriteBarrier(&___levelText_8, value);
	}

	inline static int32_t get_offset_of_levelImage_9() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___levelImage_9)); }
	inline GameObject_t3674682005 * get_levelImage_9() const { return ___levelImage_9; }
	inline GameObject_t3674682005 ** get_address_of_levelImage_9() { return &___levelImage_9; }
	inline void set_levelImage_9(GameObject_t3674682005 * value)
	{
		___levelImage_9 = value;
		Il2CppCodeGenWriteBarrier(&___levelImage_9, value);
	}

	inline static int32_t get_offset_of_level_10() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___level_10)); }
	inline int32_t get_level_10() const { return ___level_10; }
	inline int32_t* get_address_of_level_10() { return &___level_10; }
	inline void set_level_10(int32_t value)
	{
		___level_10 = value;
	}

	inline static int32_t get_offset_of_enemies_11() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___enemies_11)); }
	inline List_1_t1435286072 * get_enemies_11() const { return ___enemies_11; }
	inline List_1_t1435286072 ** get_address_of_enemies_11() { return &___enemies_11; }
	inline void set_enemies_11(List_1_t1435286072 * value)
	{
		___enemies_11 = value;
		Il2CppCodeGenWriteBarrier(&___enemies_11, value);
	}

	inline static int32_t get_offset_of_enemiesMoving_12() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___enemiesMoving_12)); }
	inline bool get_enemiesMoving_12() const { return ___enemiesMoving_12; }
	inline bool* get_address_of_enemiesMoving_12() { return &___enemiesMoving_12; }
	inline void set_enemiesMoving_12(bool value)
	{
		___enemiesMoving_12 = value;
	}

	inline static int32_t get_offset_of_doingSetup_13() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___doingSetup_13)); }
	inline bool get_doingSetup_13() const { return ___doingSetup_13; }
	inline bool* get_address_of_doingSetup_13() { return &___doingSetup_13; }
	inline void set_doingSetup_13(bool value)
	{
		___doingSetup_13 = value;
	}
};

struct GameManager_t2369589051_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t2369589051 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GameManager_t2369589051_StaticFields, ___instance_4)); }
	inline GameManager_t2369589051 * get_instance_4() const { return ___instance_4; }
	inline GameManager_t2369589051 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GameManager_t2369589051 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
