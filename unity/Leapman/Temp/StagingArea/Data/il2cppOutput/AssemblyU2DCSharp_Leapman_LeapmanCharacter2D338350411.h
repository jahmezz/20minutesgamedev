#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.Behaviour
struct Behaviour_t200106419;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leapman.LeapmanCharacter2D
struct  LeapmanCharacter2D_t338350411  : public MonoBehaviour_t667441552
{
public:
	// System.Single Leapman.LeapmanCharacter2D::MaxSpeed
	float ___MaxSpeed_4;
	// System.Single Leapman.LeapmanCharacter2D::JumpForce
	float ___JumpForce_5;
	// System.Single Leapman.LeapmanCharacter2D::DashVelocity
	float ___DashVelocity_6;
	// UnityEngine.LayerMask Leapman.LeapmanCharacter2D::GroundLayers
	LayerMask_t3236759763  ___GroundLayers_7;
	// UnityEngine.UI.Text Leapman.LeapmanCharacter2D::speedText
	Text_t9039225 * ___speedText_8;
	// UnityEngine.UI.Text Leapman.LeapmanCharacter2D::jumpText
	Text_t9039225 * ___jumpText_9;
	// UnityEngine.UI.Text Leapman.LeapmanCharacter2D::resetText
	Text_t9039225 * ___resetText_10;
	// UnityEngine.UI.Text Leapman.LeapmanCharacter2D::notifyText
	Text_t9039225 * ___notifyText_11;
	// UnityEngine.UI.Text Leapman.LeapmanCharacter2D::optionsText
	Text_t9039225 * ___optionsText_12;
	// UnityEngine.UI.Image Leapman.LeapmanCharacter2D::Circle
	Image_t538875265 * ___Circle_13;
	// UnityEngine.UI.Image Leapman.LeapmanCharacter2D::Cross
	Image_t538875265 * ___Cross_14;
	// UnityEngine.Camera Leapman.LeapmanCharacter2D::camera
	Camera_t2727095145 * ___camera_15;
	// System.Boolean Leapman.LeapmanCharacter2D::canBlink
	bool ___canBlink_16;
	// UnityEngine.Transform Leapman.LeapmanCharacter2D::GroundCheck
	Transform_t1659122786 * ___GroundCheck_17;
	// System.Boolean Leapman.LeapmanCharacter2D::Grounded
	bool ___Grounded_18;
	// UnityEngine.Animator Leapman.LeapmanCharacter2D::Animator
	Animator_t2776330603 * ___Animator_19;
	// UnityEngine.Rigidbody2D Leapman.LeapmanCharacter2D::rb
	Rigidbody2D_t1743771669 * ___rb_20;
	// System.Boolean Leapman.LeapmanCharacter2D::FacingRight
	bool ___FacingRight_21;
	// System.Int32 Leapman.LeapmanCharacter2D::jumpsLeft
	int32_t ___jumpsLeft_22;
	// System.Int32 Leapman.LeapmanCharacter2D::direction
	int32_t ___direction_23;
	// System.Single Leapman.LeapmanCharacter2D::PreBlinkX
	float ___PreBlinkX_24;
	// System.Single Leapman.LeapmanCharacter2D::PreBlinkY
	float ___PreBlinkY_25;
	// System.Boolean Leapman.LeapmanCharacter2D::blinking
	bool ___blinking_26;
	// System.Int32 Leapman.LeapmanCharacter2D::maxGravity
	int32_t ___maxGravity_27;
	// UnityEngine.Behaviour Leapman.LeapmanCharacter2D::halo
	Behaviour_t200106419 * ___halo_28;
	// System.Int32 Leapman.LeapmanCharacter2D::fallBoundary
	int32_t ___fallBoundary_29;
	// System.Single Leapman.LeapmanCharacter2D::friction
	float ___friction_30;
	// System.Single Leapman.LeapmanCharacter2D::airFriction
	float ___airFriction_31;
	// System.Single Leapman.LeapmanCharacter2D::MaxDistance
	float ___MaxDistance_32;
	// System.Int32 Leapman.LeapmanCharacter2D::maxCameraY
	int32_t ___maxCameraY_33;

public:
	inline static int32_t get_offset_of_MaxSpeed_4() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___MaxSpeed_4)); }
	inline float get_MaxSpeed_4() const { return ___MaxSpeed_4; }
	inline float* get_address_of_MaxSpeed_4() { return &___MaxSpeed_4; }
	inline void set_MaxSpeed_4(float value)
	{
		___MaxSpeed_4 = value;
	}

	inline static int32_t get_offset_of_JumpForce_5() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___JumpForce_5)); }
	inline float get_JumpForce_5() const { return ___JumpForce_5; }
	inline float* get_address_of_JumpForce_5() { return &___JumpForce_5; }
	inline void set_JumpForce_5(float value)
	{
		___JumpForce_5 = value;
	}

	inline static int32_t get_offset_of_DashVelocity_6() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___DashVelocity_6)); }
	inline float get_DashVelocity_6() const { return ___DashVelocity_6; }
	inline float* get_address_of_DashVelocity_6() { return &___DashVelocity_6; }
	inline void set_DashVelocity_6(float value)
	{
		___DashVelocity_6 = value;
	}

	inline static int32_t get_offset_of_GroundLayers_7() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___GroundLayers_7)); }
	inline LayerMask_t3236759763  get_GroundLayers_7() const { return ___GroundLayers_7; }
	inline LayerMask_t3236759763 * get_address_of_GroundLayers_7() { return &___GroundLayers_7; }
	inline void set_GroundLayers_7(LayerMask_t3236759763  value)
	{
		___GroundLayers_7 = value;
	}

	inline static int32_t get_offset_of_speedText_8() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___speedText_8)); }
	inline Text_t9039225 * get_speedText_8() const { return ___speedText_8; }
	inline Text_t9039225 ** get_address_of_speedText_8() { return &___speedText_8; }
	inline void set_speedText_8(Text_t9039225 * value)
	{
		___speedText_8 = value;
		Il2CppCodeGenWriteBarrier(&___speedText_8, value);
	}

	inline static int32_t get_offset_of_jumpText_9() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___jumpText_9)); }
	inline Text_t9039225 * get_jumpText_9() const { return ___jumpText_9; }
	inline Text_t9039225 ** get_address_of_jumpText_9() { return &___jumpText_9; }
	inline void set_jumpText_9(Text_t9039225 * value)
	{
		___jumpText_9 = value;
		Il2CppCodeGenWriteBarrier(&___jumpText_9, value);
	}

	inline static int32_t get_offset_of_resetText_10() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___resetText_10)); }
	inline Text_t9039225 * get_resetText_10() const { return ___resetText_10; }
	inline Text_t9039225 ** get_address_of_resetText_10() { return &___resetText_10; }
	inline void set_resetText_10(Text_t9039225 * value)
	{
		___resetText_10 = value;
		Il2CppCodeGenWriteBarrier(&___resetText_10, value);
	}

	inline static int32_t get_offset_of_notifyText_11() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___notifyText_11)); }
	inline Text_t9039225 * get_notifyText_11() const { return ___notifyText_11; }
	inline Text_t9039225 ** get_address_of_notifyText_11() { return &___notifyText_11; }
	inline void set_notifyText_11(Text_t9039225 * value)
	{
		___notifyText_11 = value;
		Il2CppCodeGenWriteBarrier(&___notifyText_11, value);
	}

	inline static int32_t get_offset_of_optionsText_12() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___optionsText_12)); }
	inline Text_t9039225 * get_optionsText_12() const { return ___optionsText_12; }
	inline Text_t9039225 ** get_address_of_optionsText_12() { return &___optionsText_12; }
	inline void set_optionsText_12(Text_t9039225 * value)
	{
		___optionsText_12 = value;
		Il2CppCodeGenWriteBarrier(&___optionsText_12, value);
	}

	inline static int32_t get_offset_of_Circle_13() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___Circle_13)); }
	inline Image_t538875265 * get_Circle_13() const { return ___Circle_13; }
	inline Image_t538875265 ** get_address_of_Circle_13() { return &___Circle_13; }
	inline void set_Circle_13(Image_t538875265 * value)
	{
		___Circle_13 = value;
		Il2CppCodeGenWriteBarrier(&___Circle_13, value);
	}

	inline static int32_t get_offset_of_Cross_14() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___Cross_14)); }
	inline Image_t538875265 * get_Cross_14() const { return ___Cross_14; }
	inline Image_t538875265 ** get_address_of_Cross_14() { return &___Cross_14; }
	inline void set_Cross_14(Image_t538875265 * value)
	{
		___Cross_14 = value;
		Il2CppCodeGenWriteBarrier(&___Cross_14, value);
	}

	inline static int32_t get_offset_of_camera_15() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___camera_15)); }
	inline Camera_t2727095145 * get_camera_15() const { return ___camera_15; }
	inline Camera_t2727095145 ** get_address_of_camera_15() { return &___camera_15; }
	inline void set_camera_15(Camera_t2727095145 * value)
	{
		___camera_15 = value;
		Il2CppCodeGenWriteBarrier(&___camera_15, value);
	}

	inline static int32_t get_offset_of_canBlink_16() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___canBlink_16)); }
	inline bool get_canBlink_16() const { return ___canBlink_16; }
	inline bool* get_address_of_canBlink_16() { return &___canBlink_16; }
	inline void set_canBlink_16(bool value)
	{
		___canBlink_16 = value;
	}

	inline static int32_t get_offset_of_GroundCheck_17() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___GroundCheck_17)); }
	inline Transform_t1659122786 * get_GroundCheck_17() const { return ___GroundCheck_17; }
	inline Transform_t1659122786 ** get_address_of_GroundCheck_17() { return &___GroundCheck_17; }
	inline void set_GroundCheck_17(Transform_t1659122786 * value)
	{
		___GroundCheck_17 = value;
		Il2CppCodeGenWriteBarrier(&___GroundCheck_17, value);
	}

	inline static int32_t get_offset_of_Grounded_18() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___Grounded_18)); }
	inline bool get_Grounded_18() const { return ___Grounded_18; }
	inline bool* get_address_of_Grounded_18() { return &___Grounded_18; }
	inline void set_Grounded_18(bool value)
	{
		___Grounded_18 = value;
	}

	inline static int32_t get_offset_of_Animator_19() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___Animator_19)); }
	inline Animator_t2776330603 * get_Animator_19() const { return ___Animator_19; }
	inline Animator_t2776330603 ** get_address_of_Animator_19() { return &___Animator_19; }
	inline void set_Animator_19(Animator_t2776330603 * value)
	{
		___Animator_19 = value;
		Il2CppCodeGenWriteBarrier(&___Animator_19, value);
	}

	inline static int32_t get_offset_of_rb_20() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___rb_20)); }
	inline Rigidbody2D_t1743771669 * get_rb_20() const { return ___rb_20; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb_20() { return &___rb_20; }
	inline void set_rb_20(Rigidbody2D_t1743771669 * value)
	{
		___rb_20 = value;
		Il2CppCodeGenWriteBarrier(&___rb_20, value);
	}

	inline static int32_t get_offset_of_FacingRight_21() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___FacingRight_21)); }
	inline bool get_FacingRight_21() const { return ___FacingRight_21; }
	inline bool* get_address_of_FacingRight_21() { return &___FacingRight_21; }
	inline void set_FacingRight_21(bool value)
	{
		___FacingRight_21 = value;
	}

	inline static int32_t get_offset_of_jumpsLeft_22() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___jumpsLeft_22)); }
	inline int32_t get_jumpsLeft_22() const { return ___jumpsLeft_22; }
	inline int32_t* get_address_of_jumpsLeft_22() { return &___jumpsLeft_22; }
	inline void set_jumpsLeft_22(int32_t value)
	{
		___jumpsLeft_22 = value;
	}

	inline static int32_t get_offset_of_direction_23() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___direction_23)); }
	inline int32_t get_direction_23() const { return ___direction_23; }
	inline int32_t* get_address_of_direction_23() { return &___direction_23; }
	inline void set_direction_23(int32_t value)
	{
		___direction_23 = value;
	}

	inline static int32_t get_offset_of_PreBlinkX_24() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___PreBlinkX_24)); }
	inline float get_PreBlinkX_24() const { return ___PreBlinkX_24; }
	inline float* get_address_of_PreBlinkX_24() { return &___PreBlinkX_24; }
	inline void set_PreBlinkX_24(float value)
	{
		___PreBlinkX_24 = value;
	}

	inline static int32_t get_offset_of_PreBlinkY_25() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___PreBlinkY_25)); }
	inline float get_PreBlinkY_25() const { return ___PreBlinkY_25; }
	inline float* get_address_of_PreBlinkY_25() { return &___PreBlinkY_25; }
	inline void set_PreBlinkY_25(float value)
	{
		___PreBlinkY_25 = value;
	}

	inline static int32_t get_offset_of_blinking_26() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___blinking_26)); }
	inline bool get_blinking_26() const { return ___blinking_26; }
	inline bool* get_address_of_blinking_26() { return &___blinking_26; }
	inline void set_blinking_26(bool value)
	{
		___blinking_26 = value;
	}

	inline static int32_t get_offset_of_maxGravity_27() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___maxGravity_27)); }
	inline int32_t get_maxGravity_27() const { return ___maxGravity_27; }
	inline int32_t* get_address_of_maxGravity_27() { return &___maxGravity_27; }
	inline void set_maxGravity_27(int32_t value)
	{
		___maxGravity_27 = value;
	}

	inline static int32_t get_offset_of_halo_28() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___halo_28)); }
	inline Behaviour_t200106419 * get_halo_28() const { return ___halo_28; }
	inline Behaviour_t200106419 ** get_address_of_halo_28() { return &___halo_28; }
	inline void set_halo_28(Behaviour_t200106419 * value)
	{
		___halo_28 = value;
		Il2CppCodeGenWriteBarrier(&___halo_28, value);
	}

	inline static int32_t get_offset_of_fallBoundary_29() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___fallBoundary_29)); }
	inline int32_t get_fallBoundary_29() const { return ___fallBoundary_29; }
	inline int32_t* get_address_of_fallBoundary_29() { return &___fallBoundary_29; }
	inline void set_fallBoundary_29(int32_t value)
	{
		___fallBoundary_29 = value;
	}

	inline static int32_t get_offset_of_friction_30() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___friction_30)); }
	inline float get_friction_30() const { return ___friction_30; }
	inline float* get_address_of_friction_30() { return &___friction_30; }
	inline void set_friction_30(float value)
	{
		___friction_30 = value;
	}

	inline static int32_t get_offset_of_airFriction_31() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___airFriction_31)); }
	inline float get_airFriction_31() const { return ___airFriction_31; }
	inline float* get_address_of_airFriction_31() { return &___airFriction_31; }
	inline void set_airFriction_31(float value)
	{
		___airFriction_31 = value;
	}

	inline static int32_t get_offset_of_MaxDistance_32() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___MaxDistance_32)); }
	inline float get_MaxDistance_32() const { return ___MaxDistance_32; }
	inline float* get_address_of_MaxDistance_32() { return &___MaxDistance_32; }
	inline void set_MaxDistance_32(float value)
	{
		___MaxDistance_32 = value;
	}

	inline static int32_t get_offset_of_maxCameraY_33() { return static_cast<int32_t>(offsetof(LeapmanCharacter2D_t338350411, ___maxCameraY_33)); }
	inline int32_t get_maxCameraY_33() const { return ___maxCameraY_33; }
	inline int32_t* get_address_of_maxCameraY_33() { return &___maxCameraY_33; }
	inline void set_maxCameraY_33(int32_t value)
	{
		___maxCameraY_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
