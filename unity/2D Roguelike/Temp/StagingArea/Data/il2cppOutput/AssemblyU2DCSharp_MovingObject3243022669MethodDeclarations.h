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

// MovingObject
struct MovingObject_t3243022669;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit2D1374744384.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void MovingObject::.ctor()
extern "C"  void MovingObject__ctor_m3668869102 (MovingObject_t3243022669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MovingObject::Start()
extern "C"  void MovingObject_Start_m2616006894 (MovingObject_t3243022669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MovingObject::Move(System.Int32,System.Int32,UnityEngine.RaycastHit2D&)
extern "C"  bool MovingObject_Move_m2585461028 (MovingObject_t3243022669 * __this, int32_t ___xDir0, int32_t ___yDir1, RaycastHit2D_t1374744384 * ___hit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MovingObject::SmoothMovement(UnityEngine.Vector3)
extern "C"  Il2CppObject * MovingObject_SmoothMovement_m3570327838 (MovingObject_t3243022669 * __this, Vector3_t4282066566  ___end0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
