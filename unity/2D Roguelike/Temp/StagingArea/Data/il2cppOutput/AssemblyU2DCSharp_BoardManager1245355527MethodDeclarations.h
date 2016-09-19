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

// BoardManager
struct BoardManager_t1245355527;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void BoardManager::.ctor()
extern "C"  void BoardManager__ctor_m547433588 (BoardManager_t1245355527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::InitializeList()
extern "C"  void BoardManager_InitializeList_m2027477086 (BoardManager_t1245355527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::BoardSetup()
extern "C"  void BoardManager_BoardSetup_m3363271815 (BoardManager_t1245355527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BoardManager::RandomPosition()
extern "C"  Vector3_t4282066566  BoardManager_RandomPosition_m939101078 (BoardManager_t1245355527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
extern "C"  void BoardManager_LayoutObjectAtRandom_m1803720261 (BoardManager_t1245355527 * __this, GameObjectU5BU5D_t2662109048* ___tileArray0, int32_t ___min1, int32_t ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::SetupScene(System.Int32)
extern "C"  void BoardManager_SetupScene_m2474997296 (BoardManager_t1245355527 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
