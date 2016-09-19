#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GameManager
struct GameManager_t2369589051;
// Enemy
struct Enemy_t67100520;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Enemy67100520.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m4112277136 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::.cctor()
extern "C"  void GameManager__cctor_m2444443421 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Awake()
extern "C"  void GameManager_Awake_m54915059 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnLevelWasLoaded(System.Int32)
extern "C"  void GameManager_OnLevelWasLoaded_m1277507758 (GameManager_t2369589051 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::InitGame()
extern "C"  void GameManager_InitGame_m1053132758 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::HideLevelImage()
extern "C"  void GameManager_HideLevelImage_m4154152397 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::GameOver()
extern "C"  void GameManager_GameOver_m1670086042 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m358434429 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::AddEnemyToList(Enemy)
extern "C"  void GameManager_AddEnemyToList_m904804310 (GameManager_t2369589051 * __this, Enemy_t67100520 * ___script0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::MoveEnemies()
extern "C"  Il2CppObject * GameManager_MoveEnemies_m4060843531 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
