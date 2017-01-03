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

// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t4168492807;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem381473177.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetSafeCollisionEventSize(UnityEngine.ParticleSystem)
extern "C"  int32_t ParticlePhysicsExtensions_GetSafeCollisionEventSize_m2314153154 (Il2CppObject * __this /* static, unused */, ParticleSystem_t381473177 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,UnityEngine.ParticleCollisionEvent[])
extern "C"  int32_t ParticlePhysicsExtensions_GetCollisionEvents_m302976490 (Il2CppObject * __this /* static, unused */, ParticleSystem_t381473177 * ___ps0, GameObject_t3674682005 * ___go1, ParticleCollisionEventU5BU5D_t4168492807* ___collisionEvents2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
