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

// Leapman.LeapmanCharacter2D
struct LeapmanCharacter2D_t338350411;
// UnityEngine.Collision2D
struct Collision2D_t2859305914;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision2D2859305914.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// System.Void Leapman.LeapmanCharacter2D::.ctor()
extern "C"  void LeapmanCharacter2D__ctor_m2988876950 (LeapmanCharacter2D_t338350411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leapman.LeapmanCharacter2D::Awake()
extern "C"  void LeapmanCharacter2D_Awake_m3226482169 (LeapmanCharacter2D_t338350411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leapman.LeapmanCharacter2D::OnEnable()
extern "C"  void LeapmanCharacter2D_OnEnable_m442815280 (LeapmanCharacter2D_t338350411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leapman.LeapmanCharacter2D::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void LeapmanCharacter2D_OnCollisionEnter2D_m2702769664 (LeapmanCharacter2D_t338350411 * __this, Collision2D_t2859305914 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leapman.LeapmanCharacter2D::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void LeapmanCharacter2D_OnTriggerEnter2D_m1390405026 (LeapmanCharacter2D_t338350411 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leapman.LeapmanCharacter2D::TogglePaused()
extern "C"  void LeapmanCharacter2D_TogglePaused_m3338236432 (LeapmanCharacter2D_t338350411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Leapman.LeapmanCharacter2D::notifyBlink()
extern "C"  Il2CppObject * LeapmanCharacter2D_notifyBlink_m1706798879 (LeapmanCharacter2D_t338350411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leapman.LeapmanCharacter2D::FixedUpdate()
extern "C"  void LeapmanCharacter2D_FixedUpdate_m1351367057 (LeapmanCharacter2D_t338350411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leapman.LeapmanCharacter2D::StartBlink(System.Boolean)
extern "C"  void LeapmanCharacter2D_StartBlink_m2653796671 (LeapmanCharacter2D_t338350411 * __this, bool ___hold0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leapman.LeapmanCharacter2D::EndBlink()
extern "C"  void LeapmanCharacter2D_EndBlink_m526490223 (LeapmanCharacter2D_t338350411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leapman.LeapmanCharacter2D::Control(System.Single,System.Single,System.Boolean,System.Boolean)
extern "C"  void LeapmanCharacter2D_Control_m2572832191 (LeapmanCharacter2D_t338350411 * __this, float ___look0, float ___move1, bool ___jump2, bool ___dash3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leapman.LeapmanCharacter2D::checkFlip(System.Single)
extern "C"  void LeapmanCharacter2D_checkFlip_m3718268834 (LeapmanCharacter2D_t338350411 * __this, float ___move0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leapman.LeapmanCharacter2D::Flip()
extern "C"  void LeapmanCharacter2D_Flip_m3839538971 (LeapmanCharacter2D_t338350411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
