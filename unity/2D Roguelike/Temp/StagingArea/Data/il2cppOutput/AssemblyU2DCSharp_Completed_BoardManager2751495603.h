#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Completed.BoardManager/Count
struct Count_t2285215626;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Completed.BoardManager
struct  BoardManager_t2751495603  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 Completed.BoardManager::columns
	int32_t ___columns_2;
	// System.Int32 Completed.BoardManager::rows
	int32_t ___rows_3;
	// Completed.BoardManager/Count Completed.BoardManager::wallCount
	Count_t2285215626 * ___wallCount_4;
	// Completed.BoardManager/Count Completed.BoardManager::foodCount
	Count_t2285215626 * ___foodCount_5;
	// UnityEngine.GameObject Completed.BoardManager::exit
	GameObject_t3674682005 * ___exit_6;
	// UnityEngine.GameObject[] Completed.BoardManager::floorTiles
	GameObjectU5BU5D_t2662109048* ___floorTiles_7;
	// UnityEngine.GameObject[] Completed.BoardManager::wallTiles
	GameObjectU5BU5D_t2662109048* ___wallTiles_8;
	// UnityEngine.GameObject[] Completed.BoardManager::foodTiles
	GameObjectU5BU5D_t2662109048* ___foodTiles_9;
	// UnityEngine.GameObject[] Completed.BoardManager::enemyTiles
	GameObjectU5BU5D_t2662109048* ___enemyTiles_10;
	// UnityEngine.GameObject[] Completed.BoardManager::outerWallTiles
	GameObjectU5BU5D_t2662109048* ___outerWallTiles_11;
	// UnityEngine.Transform Completed.BoardManager::boardHolder
	Transform_t1659122786 * ___boardHolder_12;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Completed.BoardManager::gridPositions
	List_1_t1355284822 * ___gridPositions_13;

public:
	inline static int32_t get_offset_of_columns_2() { return static_cast<int32_t>(offsetof(BoardManager_t2751495603, ___columns_2)); }
	inline int32_t get_columns_2() const { return ___columns_2; }
	inline int32_t* get_address_of_columns_2() { return &___columns_2; }
	inline void set_columns_2(int32_t value)
	{
		___columns_2 = value;
	}

	inline static int32_t get_offset_of_rows_3() { return static_cast<int32_t>(offsetof(BoardManager_t2751495603, ___rows_3)); }
	inline int32_t get_rows_3() const { return ___rows_3; }
	inline int32_t* get_address_of_rows_3() { return &___rows_3; }
	inline void set_rows_3(int32_t value)
	{
		___rows_3 = value;
	}

	inline static int32_t get_offset_of_wallCount_4() { return static_cast<int32_t>(offsetof(BoardManager_t2751495603, ___wallCount_4)); }
	inline Count_t2285215626 * get_wallCount_4() const { return ___wallCount_4; }
	inline Count_t2285215626 ** get_address_of_wallCount_4() { return &___wallCount_4; }
	inline void set_wallCount_4(Count_t2285215626 * value)
	{
		___wallCount_4 = value;
		Il2CppCodeGenWriteBarrier(&___wallCount_4, value);
	}

	inline static int32_t get_offset_of_foodCount_5() { return static_cast<int32_t>(offsetof(BoardManager_t2751495603, ___foodCount_5)); }
	inline Count_t2285215626 * get_foodCount_5() const { return ___foodCount_5; }
	inline Count_t2285215626 ** get_address_of_foodCount_5() { return &___foodCount_5; }
	inline void set_foodCount_5(Count_t2285215626 * value)
	{
		___foodCount_5 = value;
		Il2CppCodeGenWriteBarrier(&___foodCount_5, value);
	}

	inline static int32_t get_offset_of_exit_6() { return static_cast<int32_t>(offsetof(BoardManager_t2751495603, ___exit_6)); }
	inline GameObject_t3674682005 * get_exit_6() const { return ___exit_6; }
	inline GameObject_t3674682005 ** get_address_of_exit_6() { return &___exit_6; }
	inline void set_exit_6(GameObject_t3674682005 * value)
	{
		___exit_6 = value;
		Il2CppCodeGenWriteBarrier(&___exit_6, value);
	}

	inline static int32_t get_offset_of_floorTiles_7() { return static_cast<int32_t>(offsetof(BoardManager_t2751495603, ___floorTiles_7)); }
	inline GameObjectU5BU5D_t2662109048* get_floorTiles_7() const { return ___floorTiles_7; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_floorTiles_7() { return &___floorTiles_7; }
	inline void set_floorTiles_7(GameObjectU5BU5D_t2662109048* value)
	{
		___floorTiles_7 = value;
		Il2CppCodeGenWriteBarrier(&___floorTiles_7, value);
	}

	inline static int32_t get_offset_of_wallTiles_8() { return static_cast<int32_t>(offsetof(BoardManager_t2751495603, ___wallTiles_8)); }
	inline GameObjectU5BU5D_t2662109048* get_wallTiles_8() const { return ___wallTiles_8; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_wallTiles_8() { return &___wallTiles_8; }
	inline void set_wallTiles_8(GameObjectU5BU5D_t2662109048* value)
	{
		___wallTiles_8 = value;
		Il2CppCodeGenWriteBarrier(&___wallTiles_8, value);
	}

	inline static int32_t get_offset_of_foodTiles_9() { return static_cast<int32_t>(offsetof(BoardManager_t2751495603, ___foodTiles_9)); }
	inline GameObjectU5BU5D_t2662109048* get_foodTiles_9() const { return ___foodTiles_9; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_foodTiles_9() { return &___foodTiles_9; }
	inline void set_foodTiles_9(GameObjectU5BU5D_t2662109048* value)
	{
		___foodTiles_9 = value;
		Il2CppCodeGenWriteBarrier(&___foodTiles_9, value);
	}

	inline static int32_t get_offset_of_enemyTiles_10() { return static_cast<int32_t>(offsetof(BoardManager_t2751495603, ___enemyTiles_10)); }
	inline GameObjectU5BU5D_t2662109048* get_enemyTiles_10() const { return ___enemyTiles_10; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_enemyTiles_10() { return &___enemyTiles_10; }
	inline void set_enemyTiles_10(GameObjectU5BU5D_t2662109048* value)
	{
		___enemyTiles_10 = value;
		Il2CppCodeGenWriteBarrier(&___enemyTiles_10, value);
	}

	inline static int32_t get_offset_of_outerWallTiles_11() { return static_cast<int32_t>(offsetof(BoardManager_t2751495603, ___outerWallTiles_11)); }
	inline GameObjectU5BU5D_t2662109048* get_outerWallTiles_11() const { return ___outerWallTiles_11; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_outerWallTiles_11() { return &___outerWallTiles_11; }
	inline void set_outerWallTiles_11(GameObjectU5BU5D_t2662109048* value)
	{
		___outerWallTiles_11 = value;
		Il2CppCodeGenWriteBarrier(&___outerWallTiles_11, value);
	}

	inline static int32_t get_offset_of_boardHolder_12() { return static_cast<int32_t>(offsetof(BoardManager_t2751495603, ___boardHolder_12)); }
	inline Transform_t1659122786 * get_boardHolder_12() const { return ___boardHolder_12; }
	inline Transform_t1659122786 ** get_address_of_boardHolder_12() { return &___boardHolder_12; }
	inline void set_boardHolder_12(Transform_t1659122786 * value)
	{
		___boardHolder_12 = value;
		Il2CppCodeGenWriteBarrier(&___boardHolder_12, value);
	}

	inline static int32_t get_offset_of_gridPositions_13() { return static_cast<int32_t>(offsetof(BoardManager_t2751495603, ___gridPositions_13)); }
	inline List_1_t1355284822 * get_gridPositions_13() const { return ___gridPositions_13; }
	inline List_1_t1355284822 ** get_address_of_gridPositions_13() { return &___gridPositions_13; }
	inline void set_gridPositions_13(List_1_t1355284822 * value)
	{
		___gridPositions_13 = value;
		Il2CppCodeGenWriteBarrier(&___gridPositions_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
