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

// SoundManager
struct SoundManager_t2444342206;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t3001083477;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"

// System.Void SoundManager::.ctor()
extern "C"  void SoundManager__ctor_m4124152989 (SoundManager_t2444342206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::.cctor()
extern "C"  void SoundManager__cctor_m2812594864 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::Awake()
extern "C"  void SoundManager_Awake_m66790912 (SoundManager_t2444342206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlaySingle(UnityEngine.AudioClip)
extern "C"  void SoundManager_PlaySingle_m1018052448 (SoundManager_t2444342206 * __this, AudioClip_t794140988 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
extern "C"  void SoundManager_RandomizeSfx_m2875138694 (SoundManager_t2444342206 * __this, AudioClipU5BU5D_t3001083477* ___clips0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
