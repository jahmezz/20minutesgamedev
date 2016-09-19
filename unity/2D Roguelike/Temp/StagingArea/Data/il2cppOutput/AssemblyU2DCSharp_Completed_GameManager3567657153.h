#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Completed.GameManager
struct GameManager_t3567657153;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// Completed.BoardManager
struct BoardManager_t2751495603;
// System.Collections.Generic.List`1<Completed.Enemy>
struct List_1_t2633719166;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Completed.GameManager
struct  GameManager_t3567657153  : public MonoBehaviour_t667441552
{
public:
	// System.Single Completed.GameManager::levelStartDelay
	float ___levelStartDelay_2;
	// System.Single Completed.GameManager::turnDelay
	float ___turnDelay_3;
	// System.Int32 Completed.GameManager::playerFoodPoints
	int32_t ___playerFoodPoints_4;
	// System.Boolean Completed.GameManager::playersTurn
	bool ___playersTurn_6;
	// UnityEngine.UI.Text Completed.GameManager::levelText
	Text_t9039225 * ___levelText_7;
	// UnityEngine.GameObject Completed.GameManager::levelImage
	GameObject_t3674682005 * ___levelImage_8;
	// Completed.BoardManager Completed.GameManager::boardScript
	BoardManager_t2751495603 * ___boardScript_9;
	// System.Int32 Completed.GameManager::level
	int32_t ___level_10;
	// System.Collections.Generic.List`1<Completed.Enemy> Completed.GameManager::enemies
	List_1_t2633719166 * ___enemies_11;
	// System.Boolean Completed.GameManager::enemiesMoving
	bool ___enemiesMoving_12;
	// System.Boolean Completed.GameManager::doingSetup
	bool ___doingSetup_13;

public:
	inline static int32_t get_offset_of_levelStartDelay_2() { return static_cast<int32_t>(offsetof(GameManager_t3567657153, ___levelStartDelay_2)); }
	inline float get_levelStartDelay_2() const { return ___levelStartDelay_2; }
	inline float* get_address_of_levelStartDelay_2() { return &___levelStartDelay_2; }
	inline void set_levelStartDelay_2(float value)
	{
		___levelStartDelay_2 = value;
	}

	inline static int32_t get_offset_of_turnDelay_3() { return static_cast<int32_t>(offsetof(GameManager_t3567657153, ___turnDelay_3)); }
	inline float get_turnDelay_3() const { return ___turnDelay_3; }
	inline float* get_address_of_turnDelay_3() { return &___turnDelay_3; }
	inline void set_turnDelay_3(float value)
	{
		___turnDelay_3 = value;
	}

	inline static int32_t get_offset_of_playerFoodPoints_4() { return static_cast<int32_t>(offsetof(GameManager_t3567657153, ___playerFoodPoints_4)); }
	inline int32_t get_playerFoodPoints_4() const { return ___playerFoodPoints_4; }
	inline int32_t* get_address_of_playerFoodPoints_4() { return &___playerFoodPoints_4; }
	inline void set_playerFoodPoints_4(int32_t value)
	{
		___playerFoodPoints_4 = value;
	}

	inline static int32_t get_offset_of_playersTurn_6() { return static_cast<int32_t>(offsetof(GameManager_t3567657153, ___playersTurn_6)); }
	inline bool get_playersTurn_6() const { return ___playersTurn_6; }
	inline bool* get_address_of_playersTurn_6() { return &___playersTurn_6; }
	inline void set_playersTurn_6(bool value)
	{
		___playersTurn_6 = value;
	}

	inline static int32_t get_offset_of_levelText_7() { return static_cast<int32_t>(offsetof(GameManager_t3567657153, ___levelText_7)); }
	inline Text_t9039225 * get_levelText_7() const { return ___levelText_7; }
	inline Text_t9039225 ** get_address_of_levelText_7() { return &___levelText_7; }
	inline void set_levelText_7(Text_t9039225 * value)
	{
		___levelText_7 = value;
		Il2CppCodeGenWriteBarrier(&___levelText_7, value);
	}

	inline static int32_t get_offset_of_levelImage_8() { return static_cast<int32_t>(offsetof(GameManager_t3567657153, ___levelImage_8)); }
	inline GameObject_t3674682005 * get_levelImage_8() const { return ___levelImage_8; }
	inline GameObject_t3674682005 ** get_address_of_levelImage_8() { return &___levelImage_8; }
	inline void set_levelImage_8(GameObject_t3674682005 * value)
	{
		___levelImage_8 = value;
		Il2CppCodeGenWriteBarrier(&___levelImage_8, value);
	}

	inline static int32_t get_offset_of_boardScript_9() { return static_cast<int32_t>(offsetof(GameManager_t3567657153, ___boardScript_9)); }
	inline BoardManager_t2751495603 * get_boardScript_9() const { return ___boardScript_9; }
	inline BoardManager_t2751495603 ** get_address_of_boardScript_9() { return &___boardScript_9; }
	inline void set_boardScript_9(BoardManager_t2751495603 * value)
	{
		___boardScript_9 = value;
		Il2CppCodeGenWriteBarrier(&___boardScript_9, value);
	}

	inline static int32_t get_offset_of_level_10() { return static_cast<int32_t>(offsetof(GameManager_t3567657153, ___level_10)); }
	inline int32_t get_level_10() const { return ___level_10; }
	inline int32_t* get_address_of_level_10() { return &___level_10; }
	inline void set_level_10(int32_t value)
	{
		___level_10 = value;
	}

	inline static int32_t get_offset_of_enemies_11() { return static_cast<int32_t>(offsetof(GameManager_t3567657153, ___enemies_11)); }
	inline List_1_t2633719166 * get_enemies_11() const { return ___enemies_11; }
	inline List_1_t2633719166 ** get_address_of_enemies_11() { return &___enemies_11; }
	inline void set_enemies_11(List_1_t2633719166 * value)
	{
		___enemies_11 = value;
		Il2CppCodeGenWriteBarrier(&___enemies_11, value);
	}

	inline static int32_t get_offset_of_enemiesMoving_12() { return static_cast<int32_t>(offsetof(GameManager_t3567657153, ___enemiesMoving_12)); }
	inline bool get_enemiesMoving_12() const { return ___enemiesMoving_12; }
	inline bool* get_address_of_enemiesMoving_12() { return &___enemiesMoving_12; }
	inline void set_enemiesMoving_12(bool value)
	{
		___enemiesMoving_12 = value;
	}

	inline static int32_t get_offset_of_doingSetup_13() { return static_cast<int32_t>(offsetof(GameManager_t3567657153, ___doingSetup_13)); }
	inline bool get_doingSetup_13() const { return ___doingSetup_13; }
	inline bool* get_address_of_doingSetup_13() { return &___doingSetup_13; }
	inline void set_doingSetup_13(bool value)
	{
		___doingSetup_13 = value;
	}
};

struct GameManager_t3567657153_StaticFields
{
public:
	// Completed.GameManager Completed.GameManager::instance
	GameManager_t3567657153 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(GameManager_t3567657153_StaticFields, ___instance_5)); }
	inline GameManager_t3567657153 * get_instance_5() const { return ___instance_5; }
	inline GameManager_t3567657153 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(GameManager_t3567657153 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
