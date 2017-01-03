#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.WheelCollider[]
struct WheelColliderU5BU5D_t2847036904;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct  AeroplaneController_t3941751733  : public MonoBehaviour_t667441552
{
public:
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_MaxEnginePower
	float ___m_MaxEnginePower_2;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_Lift
	float ___m_Lift_3;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_ZeroLiftSpeed
	float ___m_ZeroLiftSpeed_4;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_RollEffect
	float ___m_RollEffect_5;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_PitchEffect
	float ___m_PitchEffect_6;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_YawEffect
	float ___m_YawEffect_7;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_BankedTurnEffect
	float ___m_BankedTurnEffect_8;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_AerodynamicEffect
	float ___m_AerodynamicEffect_9;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_AutoTurnPitch
	float ___m_AutoTurnPitch_10;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_AutoRollLevel
	float ___m_AutoRollLevel_11;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_AutoPitchLevel
	float ___m_AutoPitchLevel_12;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_AirBrakesEffect
	float ___m_AirBrakesEffect_13;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_ThrottleChangeSpeed
	float ___m_ThrottleChangeSpeed_14;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_DragIncreaseFactor
	float ___m_DragIncreaseFactor_15;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_OriginalDrag
	float ___m_OriginalDrag_16;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_OriginalAngularDrag
	float ___m_OriginalAngularDrag_17;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_AeroFactor
	float ___m_AeroFactor_18;
	// System.Boolean UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_Immobilized
	bool ___m_Immobilized_19;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_BankedTurnAmount
	float ___m_BankedTurnAmount_20;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_Rigidbody
	Rigidbody_t3346577219 * ___m_Rigidbody_21;
	// UnityEngine.WheelCollider[] UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::m_WheelColliders
	WheelColliderU5BU5D_t2847036904* ___m_WheelColliders_22;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::<Altitude>k__BackingField
	float ___U3CAltitudeU3Ek__BackingField_23;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::<Throttle>k__BackingField
	float ___U3CThrottleU3Ek__BackingField_24;
	// System.Boolean UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::<AirBrakes>k__BackingField
	bool ___U3CAirBrakesU3Ek__BackingField_25;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::<ForwardSpeed>k__BackingField
	float ___U3CForwardSpeedU3Ek__BackingField_26;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::<EnginePower>k__BackingField
	float ___U3CEnginePowerU3Ek__BackingField_27;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::<RollAngle>k__BackingField
	float ___U3CRollAngleU3Ek__BackingField_28;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::<PitchAngle>k__BackingField
	float ___U3CPitchAngleU3Ek__BackingField_29;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::<RollInput>k__BackingField
	float ___U3CRollInputU3Ek__BackingField_30;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::<PitchInput>k__BackingField
	float ___U3CPitchInputU3Ek__BackingField_31;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::<YawInput>k__BackingField
	float ___U3CYawInputU3Ek__BackingField_32;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController::<ThrottleInput>k__BackingField
	float ___U3CThrottleInputU3Ek__BackingField_33;

public:
	inline static int32_t get_offset_of_m_MaxEnginePower_2() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_MaxEnginePower_2)); }
	inline float get_m_MaxEnginePower_2() const { return ___m_MaxEnginePower_2; }
	inline float* get_address_of_m_MaxEnginePower_2() { return &___m_MaxEnginePower_2; }
	inline void set_m_MaxEnginePower_2(float value)
	{
		___m_MaxEnginePower_2 = value;
	}

	inline static int32_t get_offset_of_m_Lift_3() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_Lift_3)); }
	inline float get_m_Lift_3() const { return ___m_Lift_3; }
	inline float* get_address_of_m_Lift_3() { return &___m_Lift_3; }
	inline void set_m_Lift_3(float value)
	{
		___m_Lift_3 = value;
	}

	inline static int32_t get_offset_of_m_ZeroLiftSpeed_4() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_ZeroLiftSpeed_4)); }
	inline float get_m_ZeroLiftSpeed_4() const { return ___m_ZeroLiftSpeed_4; }
	inline float* get_address_of_m_ZeroLiftSpeed_4() { return &___m_ZeroLiftSpeed_4; }
	inline void set_m_ZeroLiftSpeed_4(float value)
	{
		___m_ZeroLiftSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_RollEffect_5() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_RollEffect_5)); }
	inline float get_m_RollEffect_5() const { return ___m_RollEffect_5; }
	inline float* get_address_of_m_RollEffect_5() { return &___m_RollEffect_5; }
	inline void set_m_RollEffect_5(float value)
	{
		___m_RollEffect_5 = value;
	}

	inline static int32_t get_offset_of_m_PitchEffect_6() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_PitchEffect_6)); }
	inline float get_m_PitchEffect_6() const { return ___m_PitchEffect_6; }
	inline float* get_address_of_m_PitchEffect_6() { return &___m_PitchEffect_6; }
	inline void set_m_PitchEffect_6(float value)
	{
		___m_PitchEffect_6 = value;
	}

	inline static int32_t get_offset_of_m_YawEffect_7() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_YawEffect_7)); }
	inline float get_m_YawEffect_7() const { return ___m_YawEffect_7; }
	inline float* get_address_of_m_YawEffect_7() { return &___m_YawEffect_7; }
	inline void set_m_YawEffect_7(float value)
	{
		___m_YawEffect_7 = value;
	}

	inline static int32_t get_offset_of_m_BankedTurnEffect_8() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_BankedTurnEffect_8)); }
	inline float get_m_BankedTurnEffect_8() const { return ___m_BankedTurnEffect_8; }
	inline float* get_address_of_m_BankedTurnEffect_8() { return &___m_BankedTurnEffect_8; }
	inline void set_m_BankedTurnEffect_8(float value)
	{
		___m_BankedTurnEffect_8 = value;
	}

	inline static int32_t get_offset_of_m_AerodynamicEffect_9() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_AerodynamicEffect_9)); }
	inline float get_m_AerodynamicEffect_9() const { return ___m_AerodynamicEffect_9; }
	inline float* get_address_of_m_AerodynamicEffect_9() { return &___m_AerodynamicEffect_9; }
	inline void set_m_AerodynamicEffect_9(float value)
	{
		___m_AerodynamicEffect_9 = value;
	}

	inline static int32_t get_offset_of_m_AutoTurnPitch_10() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_AutoTurnPitch_10)); }
	inline float get_m_AutoTurnPitch_10() const { return ___m_AutoTurnPitch_10; }
	inline float* get_address_of_m_AutoTurnPitch_10() { return &___m_AutoTurnPitch_10; }
	inline void set_m_AutoTurnPitch_10(float value)
	{
		___m_AutoTurnPitch_10 = value;
	}

	inline static int32_t get_offset_of_m_AutoRollLevel_11() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_AutoRollLevel_11)); }
	inline float get_m_AutoRollLevel_11() const { return ___m_AutoRollLevel_11; }
	inline float* get_address_of_m_AutoRollLevel_11() { return &___m_AutoRollLevel_11; }
	inline void set_m_AutoRollLevel_11(float value)
	{
		___m_AutoRollLevel_11 = value;
	}

	inline static int32_t get_offset_of_m_AutoPitchLevel_12() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_AutoPitchLevel_12)); }
	inline float get_m_AutoPitchLevel_12() const { return ___m_AutoPitchLevel_12; }
	inline float* get_address_of_m_AutoPitchLevel_12() { return &___m_AutoPitchLevel_12; }
	inline void set_m_AutoPitchLevel_12(float value)
	{
		___m_AutoPitchLevel_12 = value;
	}

	inline static int32_t get_offset_of_m_AirBrakesEffect_13() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_AirBrakesEffect_13)); }
	inline float get_m_AirBrakesEffect_13() const { return ___m_AirBrakesEffect_13; }
	inline float* get_address_of_m_AirBrakesEffect_13() { return &___m_AirBrakesEffect_13; }
	inline void set_m_AirBrakesEffect_13(float value)
	{
		___m_AirBrakesEffect_13 = value;
	}

	inline static int32_t get_offset_of_m_ThrottleChangeSpeed_14() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_ThrottleChangeSpeed_14)); }
	inline float get_m_ThrottleChangeSpeed_14() const { return ___m_ThrottleChangeSpeed_14; }
	inline float* get_address_of_m_ThrottleChangeSpeed_14() { return &___m_ThrottleChangeSpeed_14; }
	inline void set_m_ThrottleChangeSpeed_14(float value)
	{
		___m_ThrottleChangeSpeed_14 = value;
	}

	inline static int32_t get_offset_of_m_DragIncreaseFactor_15() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_DragIncreaseFactor_15)); }
	inline float get_m_DragIncreaseFactor_15() const { return ___m_DragIncreaseFactor_15; }
	inline float* get_address_of_m_DragIncreaseFactor_15() { return &___m_DragIncreaseFactor_15; }
	inline void set_m_DragIncreaseFactor_15(float value)
	{
		___m_DragIncreaseFactor_15 = value;
	}

	inline static int32_t get_offset_of_m_OriginalDrag_16() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_OriginalDrag_16)); }
	inline float get_m_OriginalDrag_16() const { return ___m_OriginalDrag_16; }
	inline float* get_address_of_m_OriginalDrag_16() { return &___m_OriginalDrag_16; }
	inline void set_m_OriginalDrag_16(float value)
	{
		___m_OriginalDrag_16 = value;
	}

	inline static int32_t get_offset_of_m_OriginalAngularDrag_17() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_OriginalAngularDrag_17)); }
	inline float get_m_OriginalAngularDrag_17() const { return ___m_OriginalAngularDrag_17; }
	inline float* get_address_of_m_OriginalAngularDrag_17() { return &___m_OriginalAngularDrag_17; }
	inline void set_m_OriginalAngularDrag_17(float value)
	{
		___m_OriginalAngularDrag_17 = value;
	}

	inline static int32_t get_offset_of_m_AeroFactor_18() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_AeroFactor_18)); }
	inline float get_m_AeroFactor_18() const { return ___m_AeroFactor_18; }
	inline float* get_address_of_m_AeroFactor_18() { return &___m_AeroFactor_18; }
	inline void set_m_AeroFactor_18(float value)
	{
		___m_AeroFactor_18 = value;
	}

	inline static int32_t get_offset_of_m_Immobilized_19() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_Immobilized_19)); }
	inline bool get_m_Immobilized_19() const { return ___m_Immobilized_19; }
	inline bool* get_address_of_m_Immobilized_19() { return &___m_Immobilized_19; }
	inline void set_m_Immobilized_19(bool value)
	{
		___m_Immobilized_19 = value;
	}

	inline static int32_t get_offset_of_m_BankedTurnAmount_20() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_BankedTurnAmount_20)); }
	inline float get_m_BankedTurnAmount_20() const { return ___m_BankedTurnAmount_20; }
	inline float* get_address_of_m_BankedTurnAmount_20() { return &___m_BankedTurnAmount_20; }
	inline void set_m_BankedTurnAmount_20(float value)
	{
		___m_BankedTurnAmount_20 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_21() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_Rigidbody_21)); }
	inline Rigidbody_t3346577219 * get_m_Rigidbody_21() const { return ___m_Rigidbody_21; }
	inline Rigidbody_t3346577219 ** get_address_of_m_Rigidbody_21() { return &___m_Rigidbody_21; }
	inline void set_m_Rigidbody_21(Rigidbody_t3346577219 * value)
	{
		___m_Rigidbody_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_21, value);
	}

	inline static int32_t get_offset_of_m_WheelColliders_22() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___m_WheelColliders_22)); }
	inline WheelColliderU5BU5D_t2847036904* get_m_WheelColliders_22() const { return ___m_WheelColliders_22; }
	inline WheelColliderU5BU5D_t2847036904** get_address_of_m_WheelColliders_22() { return &___m_WheelColliders_22; }
	inline void set_m_WheelColliders_22(WheelColliderU5BU5D_t2847036904* value)
	{
		___m_WheelColliders_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_WheelColliders_22, value);
	}

	inline static int32_t get_offset_of_U3CAltitudeU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___U3CAltitudeU3Ek__BackingField_23)); }
	inline float get_U3CAltitudeU3Ek__BackingField_23() const { return ___U3CAltitudeU3Ek__BackingField_23; }
	inline float* get_address_of_U3CAltitudeU3Ek__BackingField_23() { return &___U3CAltitudeU3Ek__BackingField_23; }
	inline void set_U3CAltitudeU3Ek__BackingField_23(float value)
	{
		___U3CAltitudeU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CThrottleU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___U3CThrottleU3Ek__BackingField_24)); }
	inline float get_U3CThrottleU3Ek__BackingField_24() const { return ___U3CThrottleU3Ek__BackingField_24; }
	inline float* get_address_of_U3CThrottleU3Ek__BackingField_24() { return &___U3CThrottleU3Ek__BackingField_24; }
	inline void set_U3CThrottleU3Ek__BackingField_24(float value)
	{
		___U3CThrottleU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CAirBrakesU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___U3CAirBrakesU3Ek__BackingField_25)); }
	inline bool get_U3CAirBrakesU3Ek__BackingField_25() const { return ___U3CAirBrakesU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CAirBrakesU3Ek__BackingField_25() { return &___U3CAirBrakesU3Ek__BackingField_25; }
	inline void set_U3CAirBrakesU3Ek__BackingField_25(bool value)
	{
		___U3CAirBrakesU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CForwardSpeedU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___U3CForwardSpeedU3Ek__BackingField_26)); }
	inline float get_U3CForwardSpeedU3Ek__BackingField_26() const { return ___U3CForwardSpeedU3Ek__BackingField_26; }
	inline float* get_address_of_U3CForwardSpeedU3Ek__BackingField_26() { return &___U3CForwardSpeedU3Ek__BackingField_26; }
	inline void set_U3CForwardSpeedU3Ek__BackingField_26(float value)
	{
		___U3CForwardSpeedU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CEnginePowerU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___U3CEnginePowerU3Ek__BackingField_27)); }
	inline float get_U3CEnginePowerU3Ek__BackingField_27() const { return ___U3CEnginePowerU3Ek__BackingField_27; }
	inline float* get_address_of_U3CEnginePowerU3Ek__BackingField_27() { return &___U3CEnginePowerU3Ek__BackingField_27; }
	inline void set_U3CEnginePowerU3Ek__BackingField_27(float value)
	{
		___U3CEnginePowerU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CRollAngleU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___U3CRollAngleU3Ek__BackingField_28)); }
	inline float get_U3CRollAngleU3Ek__BackingField_28() const { return ___U3CRollAngleU3Ek__BackingField_28; }
	inline float* get_address_of_U3CRollAngleU3Ek__BackingField_28() { return &___U3CRollAngleU3Ek__BackingField_28; }
	inline void set_U3CRollAngleU3Ek__BackingField_28(float value)
	{
		___U3CRollAngleU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CPitchAngleU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___U3CPitchAngleU3Ek__BackingField_29)); }
	inline float get_U3CPitchAngleU3Ek__BackingField_29() const { return ___U3CPitchAngleU3Ek__BackingField_29; }
	inline float* get_address_of_U3CPitchAngleU3Ek__BackingField_29() { return &___U3CPitchAngleU3Ek__BackingField_29; }
	inline void set_U3CPitchAngleU3Ek__BackingField_29(float value)
	{
		___U3CPitchAngleU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CRollInputU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___U3CRollInputU3Ek__BackingField_30)); }
	inline float get_U3CRollInputU3Ek__BackingField_30() const { return ___U3CRollInputU3Ek__BackingField_30; }
	inline float* get_address_of_U3CRollInputU3Ek__BackingField_30() { return &___U3CRollInputU3Ek__BackingField_30; }
	inline void set_U3CRollInputU3Ek__BackingField_30(float value)
	{
		___U3CRollInputU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CPitchInputU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___U3CPitchInputU3Ek__BackingField_31)); }
	inline float get_U3CPitchInputU3Ek__BackingField_31() const { return ___U3CPitchInputU3Ek__BackingField_31; }
	inline float* get_address_of_U3CPitchInputU3Ek__BackingField_31() { return &___U3CPitchInputU3Ek__BackingField_31; }
	inline void set_U3CPitchInputU3Ek__BackingField_31(float value)
	{
		___U3CPitchInputU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CYawInputU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___U3CYawInputU3Ek__BackingField_32)); }
	inline float get_U3CYawInputU3Ek__BackingField_32() const { return ___U3CYawInputU3Ek__BackingField_32; }
	inline float* get_address_of_U3CYawInputU3Ek__BackingField_32() { return &___U3CYawInputU3Ek__BackingField_32; }
	inline void set_U3CYawInputU3Ek__BackingField_32(float value)
	{
		___U3CYawInputU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CThrottleInputU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(AeroplaneController_t3941751733, ___U3CThrottleInputU3Ek__BackingField_33)); }
	inline float get_U3CThrottleInputU3Ek__BackingField_33() const { return ___U3CThrottleInputU3Ek__BackingField_33; }
	inline float* get_address_of_U3CThrottleInputU3Ek__BackingField_33() { return &___U3CThrottleInputU3Ek__BackingField_33; }
	inline void set_U3CThrottleInputU3Ek__BackingField_33(float value)
	{
		___U3CThrottleInputU3Ek__BackingField_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
