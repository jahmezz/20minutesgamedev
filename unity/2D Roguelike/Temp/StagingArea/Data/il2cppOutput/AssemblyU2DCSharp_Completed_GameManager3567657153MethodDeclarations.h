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

// Completed.GameManager
struct GameManager_t3567657153;
// Completed.Enemy
struct Enemy_t1265533614;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Completed_Enemy1265533614.h"

// System.Void Completed.GameManager::.ctor()
extern "C"  void GameManager__ctor_m3445685363 (GameManager_t3567657153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Completed.GameManager::.cctor()
extern "C"  void GameManager__cctor_m3254934938 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Completed.GameManager::Awake()
extern "C"  void GameManager_Awake_m3683290582 (GameManager_t3567657153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Completed.GameManager::OnLevelWasLoaded(System.Int32)
extern "C"  void GameManager_OnLevelWasLoaded_m3512839019 (GameManager_t3567657153 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Completed.GameManager::InitGame()
extern "C"  void GameManager_InitGame_m2546400019 (GameManager_t3567657153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Completed.GameManager::HideLevelImage()
extern "C"  void GameManager_HideLevelImage_m3545671498 (GameManager_t3567657153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Completed.GameManager::Update()
extern "C"  void GameManager_Update_m1168925946 (GameManager_t3567657153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Completed.GameManager::AddEnemyToList(Completed.Enemy)
extern "C"  void GameManager_AddEnemyToList_m2494537628 (GameManager_t3567657153 * __this, Enemy_t1265533614 * ___script0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Completed.GameManager::GameOver()
extern "C"  void GameManager_GameOver_m3163353303 (GameManager_t3567657153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Completed.GameManager::MoveEnemies()
extern "C"  Il2CppObject * GameManager_MoveEnemies_m1594768302 (GameManager_t3567657153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
