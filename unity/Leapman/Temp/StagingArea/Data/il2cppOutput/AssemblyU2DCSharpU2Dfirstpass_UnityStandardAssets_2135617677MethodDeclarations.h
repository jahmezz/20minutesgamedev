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

// UnityStandardAssets.ImageEffects.GlobalFog
struct GlobalFog_t2135617677;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Material
struct Material_t3870600107;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"

// System.Void UnityStandardAssets.ImageEffects.GlobalFog::.ctor()
extern "C"  void GlobalFog__ctor_m810383906 (GlobalFog_t2135617677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::CheckResources()
extern "C"  bool GlobalFog_CheckResources_m3421955067 (GlobalFog_t2135617677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlobalFog_OnRenderImage_m32785660 (GlobalFog_t2135617677 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void GlobalFog_CustomGraphicsBlit_m2807875390 (Il2CppObject * __this /* static, unused */, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___dest1, Material_t3870600107 * ___fxMaterial2, int32_t ___passNr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
