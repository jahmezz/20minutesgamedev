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

// UnityStandardAssets.ImageEffects.Blur
struct Blur_t2331622965;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void UnityStandardAssets.ImageEffects.Blur::.ctor()
extern "C"  void Blur__ctor_m847142498 (Blur_t2331622965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::.cctor()
extern "C"  void Blur__cctor_m9517451 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::get_material()
extern "C"  Material_t3870600107 * Blur_get_material_m2928158283 (Blur_t2331622965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::OnDisable()
extern "C"  void Blur_OnDisable_m59486665 (Blur_t2331622965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::Start()
extern "C"  void Blur_Start_m4089247586 (Blur_t2331622965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C"  void Blur_FourTapCone_m2136173109 (Blur_t2331622965 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___dest1, int32_t ___iteration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Blur_DownSample4x_m862095344 (Blur_t2331622965 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Blur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Blur_OnRenderImage_m3285694652 (Blur_t2331622965 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
