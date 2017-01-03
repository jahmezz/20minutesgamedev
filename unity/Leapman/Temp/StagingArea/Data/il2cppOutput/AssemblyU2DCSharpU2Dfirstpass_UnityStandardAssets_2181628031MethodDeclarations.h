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

// UnityStandardAssets.Water.PlanarReflection
struct PlanarReflection_t2181628031;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void UnityStandardAssets.Water.PlanarReflection::.ctor()
extern "C"  void PlanarReflection__ctor_m4223803930 (PlanarReflection_t2181628031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::Start()
extern "C"  void PlanarReflection_Start_m3170941722 (PlanarReflection_t2181628031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.Water.PlanarReflection::CreateReflectionCameraFor(UnityEngine.Camera)
extern "C"  Camera_t2727095145 * PlanarReflection_CreateReflectionCameraFor_m1254064400 (PlanarReflection_t2181628031 * __this, Camera_t2727095145 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::SetStandardCameraParameter(UnityEngine.Camera,UnityEngine.LayerMask)
extern "C"  void PlanarReflection_SetStandardCameraParameter_m3892296569 (PlanarReflection_t2181628031 * __this, Camera_t2727095145 * ___cam0, LayerMask_t3236759763  ___mask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityStandardAssets.Water.PlanarReflection::CreateTextureFor(UnityEngine.Camera)
extern "C"  RenderTexture_t1963041563 * PlanarReflection_CreateTextureFor_m369654685 (PlanarReflection_t2181628031 * __this, Camera_t2727095145 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::RenderHelpCameras(UnityEngine.Camera)
extern "C"  void PlanarReflection_RenderHelpCameras_m2938936787 (PlanarReflection_t2181628031 * __this, Camera_t2727095145 * ___currentCam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::LateUpdate()
extern "C"  void PlanarReflection_LateUpdate_m3077990521 (PlanarReflection_t2181628031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
extern "C"  void PlanarReflection_WaterTileBeingRendered_m728320614 (PlanarReflection_t2181628031 * __this, Transform_t1659122786 * ___tr0, Camera_t2727095145 * ___currentCam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::OnEnable()
extern "C"  void PlanarReflection_OnEnable_m3757586220 (PlanarReflection_t2181628031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::OnDisable()
extern "C"  void PlanarReflection_OnDisable_m961993089 (PlanarReflection_t2181628031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::RenderReflectionFor(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void PlanarReflection_RenderReflectionFor_m3433204966 (PlanarReflection_t2181628031 * __this, Camera_t2727095145 * ___cam0, Camera_t2727095145 * ___reflectCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::SaneCameraSettings(UnityEngine.Camera)
extern "C"  void PlanarReflection_SaneCameraSettings_m4161083419 (PlanarReflection_t2181628031 * __this, Camera_t2727095145 * ___helperCam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityStandardAssets.Water.PlanarReflection::CalculateObliqueMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C"  Matrix4x4_t1651859333  PlanarReflection_CalculateObliqueMatrix_m2327395067 (Il2CppObject * __this /* static, unused */, Matrix4x4_t1651859333  ___projection0, Vector4_t4282066567  ___clipPlane1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityStandardAssets.Water.PlanarReflection::CalculateReflectionMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C"  Matrix4x4_t1651859333  PlanarReflection_CalculateReflectionMatrix_m3460169853 (Il2CppObject * __this /* static, unused */, Matrix4x4_t1651859333  ___reflectionMat0, Vector4_t4282066567  ___plane1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Water.PlanarReflection::Sgn(System.Single)
extern "C"  float PlanarReflection_Sgn_m2867012773 (Il2CppObject * __this /* static, unused */, float ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityStandardAssets.Water.PlanarReflection::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector4_t4282066567  PlanarReflection_CameraSpacePlane_m593265965 (PlanarReflection_t2181628031 * __this, Camera_t2727095145 * ___cam0, Vector3_t4282066566  ___pos1, Vector3_t4282066566  ___normal2, float ___sideSign3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
