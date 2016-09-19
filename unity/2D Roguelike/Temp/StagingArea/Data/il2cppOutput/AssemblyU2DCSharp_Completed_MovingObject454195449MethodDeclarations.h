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

// Completed.MovingObject
struct MovingObject_t454195449;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit2D1374744384.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void Completed.MovingObject::.ctor()
extern "C"  void MovingObject__ctor_m184393323 (MovingObject_t454195449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Completed.MovingObject::Start()
extern "C"  void MovingObject_Start_m3426498411 (MovingObject_t454195449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Completed.MovingObject::Move(System.Int32,System.Int32,UnityEngine.RaycastHit2D&)
extern "C"  bool MovingObject_Move_m118298465 (MovingObject_t454195449 * __this, int32_t ___xDir0, int32_t ___yDir1, RaycastHit2D_t1374744384 * ___hit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Completed.MovingObject::SmoothMovement(UnityEngine.Vector3)
extern "C"  Il2CppObject * MovingObject_SmoothMovement_m1746373659 (MovingObject_t454195449 * __this, Vector3_t4282066566  ___end0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
