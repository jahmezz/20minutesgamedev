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

// UnityStandardAssets.Vehicles.Car.CarController
struct CarController_t4046949162;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.Vehicles.Car.CarController::.ctor()
extern "C"  void CarController__ctor_m1306247335 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::.cctor()
extern "C"  void CarController__cctor_m1356865510 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.Vehicles.Car.CarController::get_Skidding()
extern "C"  bool CarController_get_Skidding_m3937362323 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_Skidding(System.Boolean)
extern "C"  void CarController_set_Skidding_m2023579298 (CarController_t4046949162 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_BrakeInput()
extern "C"  float CarController_get_BrakeInput_m694797425 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_BrakeInput(System.Single)
extern "C"  void CarController_set_BrakeInput_m504586546 (CarController_t4046949162 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_CurrentSteerAngle()
extern "C"  float CarController_get_CurrentSteerAngle_m2620786987 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_CurrentSpeed()
extern "C"  float CarController_get_CurrentSpeed_m2387970912 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_MaxSpeed()
extern "C"  float CarController_get_MaxSpeed_m624977301 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_Revs()
extern "C"  float CarController_get_Revs_m3880206786 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_Revs(System.Single)
extern "C"  void CarController_set_Revs_m2193486209 (CarController_t4046949162 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_AccelInput()
extern "C"  float CarController_get_AccelInput_m2926716948 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_AccelInput(System.Single)
extern "C"  void CarController_set_AccelInput_m2604351087 (CarController_t4046949162 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::Start()
extern "C"  void CarController_Start_m253385127 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::GearChanging()
extern "C"  void CarController_GearChanging_m2500570073 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::CurveFactor(System.Single)
extern "C"  float CarController_CurveFactor_m3752344308 (Il2CppObject * __this /* static, unused */, float ___factor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::ULerp(System.Single,System.Single,System.Single)
extern "C"  float CarController_ULerp_m4048819920 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CalculateGearFactor()
extern "C"  void CarController_CalculateGearFactor_m3315305865 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CalculateRevs()
extern "C"  void CarController_CalculateRevs_m2907864315 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::Move(System.Single,System.Single,System.Single,System.Single)
extern "C"  void CarController_Move_m3723847500 (CarController_t4046949162 * __this, float ___steering0, float ___accel1, float ___footbrake2, float ___handbrake3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CapSpeed()
extern "C"  void CarController_CapSpeed_m4038135826 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::ApplyDrive(System.Single,System.Single)
extern "C"  void CarController_ApplyDrive_m3677218615 (CarController_t4046949162 * __this, float ___accel0, float ___footbrake1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::SteerHelper()
extern "C"  void CarController_SteerHelper_m1148466148 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::AddDownForce()
extern "C"  void CarController_AddDownForce_m1854621061 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CheckForWheelSpin()
extern "C"  void CarController_CheckForWheelSpin_m2184133985 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::TractionControl()
extern "C"  void CarController_TractionControl_m1838098190 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::AdjustTorque(System.Single)
extern "C"  void CarController_AdjustTorque_m3131981173 (CarController_t4046949162 * __this, float ___forwardSlip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.Vehicles.Car.CarController::AnySkidSoundPlaying()
extern "C"  bool CarController_AnySkidSoundPlaying_m2473072231 (CarController_t4046949162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
