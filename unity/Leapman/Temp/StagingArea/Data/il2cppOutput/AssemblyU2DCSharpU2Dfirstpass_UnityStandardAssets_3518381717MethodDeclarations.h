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

// UnityStandardAssets.ImageEffects.ContrastStretch
struct ContrastStretch_t3518381717;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Texture
struct Texture_t2526458961;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"

// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::.ctor()
extern "C"  void ContrastStretch__ctor_m2751654938 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
extern "C"  Material_t3870600107 * ContrastStretch_get_materialLum_m2758956709 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
extern "C"  Material_t3870600107 * ContrastStretch_get_materialReduce_m3952186951 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
extern "C"  Material_t3870600107 * ContrastStretch_get_materialAdapt_m3989377603 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
extern "C"  Material_t3870600107 * ContrastStretch_get_materialApply_m51698575 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::Start()
extern "C"  void ContrastStretch_Start_m1698792730 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnEnable()
extern "C"  void ContrastStretch_OnEnable_m2878025004 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnDisable()
extern "C"  void ContrastStretch_OnDisable_m3760366465 (ContrastStretch_t3518381717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ContrastStretch_OnRenderImage_m4187043844 (ContrastStretch_t3518381717 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
extern "C"  void ContrastStretch_CalculateAdaptation_m6970365 (ContrastStretch_t3518381717 * __this, Texture_t2526458961 * ___curTexture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
