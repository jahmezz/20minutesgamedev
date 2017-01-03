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

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t1652428078;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
extern "C"  void MouseLook__ctor_m2519721503 (MouseLook_t1652428078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void MouseLook_Init_m2111907455 (MouseLook_t1652428078 * __this, Transform_t1659122786 * ___character0, Transform_t1659122786 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void MouseLook_LookRotation_m203295090 (MouseLook_t1652428078 * __this, Transform_t1659122786 * ___character0, Transform_t1659122786 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::SetCursorLock(System.Boolean)
extern "C"  void MouseLook_SetCursorLock_m1720985495 (MouseLook_t1652428078 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::UpdateCursorLock()
extern "C"  void MouseLook_UpdateCursorLock_m2304652815 (MouseLook_t1652428078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::InternalLockUpdate()
extern "C"  void MouseLook_InternalLockUpdate_m508797046 (MouseLook_t1652428078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
extern "C"  Quaternion_t1553702882  MouseLook_ClampRotationAroundXAxis_m668812179 (MouseLook_t1652428078 * __this, Quaternion_t1553702882  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
