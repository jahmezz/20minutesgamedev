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

// Completed.BoardManager
struct BoardManager_t2751495603;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void Completed.BoardManager::.ctor()
extern "C"  void BoardManager__ctor_m1357925105 (BoardManager_t2751495603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Completed.BoardManager::InitialiseList()
extern "C"  void BoardManager_InitialiseList_m1029667944 (BoardManager_t2751495603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Completed.BoardManager::BoardSetup()
extern "C"  void BoardManager_BoardSetup_m2016992298 (BoardManager_t2751495603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Completed.BoardManager::RandomPosition()
extern "C"  Vector3_t4282066566  BoardManager_RandomPosition_m273627449 (BoardManager_t2751495603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Completed.BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
extern "C"  void BoardManager_LayoutObjectAtRandom_m2822549352 (BoardManager_t2751495603 * __this, GameObjectU5BU5D_t2662109048* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Completed.BoardManager::SetupScene(System.Int32)
extern "C"  void BoardManager_SetupScene_m1053917523 (BoardManager_t2751495603 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
