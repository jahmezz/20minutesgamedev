#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets._2D.PlatformerCharacter2D
struct  PlatformerCharacter2D_t643789  : public MonoBehaviour_t667441552
{
public:
	// System.Single UnityStandardAssets._2D.PlatformerCharacter2D::m_MaxSpeed
	float ___m_MaxSpeed_4;
	// System.Single UnityStandardAssets._2D.PlatformerCharacter2D::m_JumpForce
	float ___m_JumpForce_5;
	// System.Single UnityStandardAssets._2D.PlatformerCharacter2D::m_CrouchSpeed
	float ___m_CrouchSpeed_6;
	// System.Boolean UnityStandardAssets._2D.PlatformerCharacter2D::m_AirControl
	bool ___m_AirControl_7;
	// UnityEngine.LayerMask UnityStandardAssets._2D.PlatformerCharacter2D::m_WhatIsGround
	LayerMask_t3236759763  ___m_WhatIsGround_8;
	// UnityEngine.Transform UnityStandardAssets._2D.PlatformerCharacter2D::m_GroundCheck
	Transform_t1659122786 * ___m_GroundCheck_9;
	// System.Boolean UnityStandardAssets._2D.PlatformerCharacter2D::m_Grounded
	bool ___m_Grounded_10;
	// UnityEngine.Transform UnityStandardAssets._2D.PlatformerCharacter2D::m_CeilingCheck
	Transform_t1659122786 * ___m_CeilingCheck_11;
	// UnityEngine.Animator UnityStandardAssets._2D.PlatformerCharacter2D::m_Anim
	Animator_t2776330603 * ___m_Anim_12;
	// UnityEngine.Rigidbody2D UnityStandardAssets._2D.PlatformerCharacter2D::m_Rigidbody2D
	Rigidbody2D_t1743771669 * ___m_Rigidbody2D_13;
	// System.Boolean UnityStandardAssets._2D.PlatformerCharacter2D::m_FacingRight
	bool ___m_FacingRight_14;

public:
	inline static int32_t get_offset_of_m_MaxSpeed_4() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t643789, ___m_MaxSpeed_4)); }
	inline float get_m_MaxSpeed_4() const { return ___m_MaxSpeed_4; }
	inline float* get_address_of_m_MaxSpeed_4() { return &___m_MaxSpeed_4; }
	inline void set_m_MaxSpeed_4(float value)
	{
		___m_MaxSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_JumpForce_5() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t643789, ___m_JumpForce_5)); }
	inline float get_m_JumpForce_5() const { return ___m_JumpForce_5; }
	inline float* get_address_of_m_JumpForce_5() { return &___m_JumpForce_5; }
	inline void set_m_JumpForce_5(float value)
	{
		___m_JumpForce_5 = value;
	}

	inline static int32_t get_offset_of_m_CrouchSpeed_6() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t643789, ___m_CrouchSpeed_6)); }
	inline float get_m_CrouchSpeed_6() const { return ___m_CrouchSpeed_6; }
	inline float* get_address_of_m_CrouchSpeed_6() { return &___m_CrouchSpeed_6; }
	inline void set_m_CrouchSpeed_6(float value)
	{
		___m_CrouchSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_AirControl_7() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t643789, ___m_AirControl_7)); }
	inline bool get_m_AirControl_7() const { return ___m_AirControl_7; }
	inline bool* get_address_of_m_AirControl_7() { return &___m_AirControl_7; }
	inline void set_m_AirControl_7(bool value)
	{
		___m_AirControl_7 = value;
	}

	inline static int32_t get_offset_of_m_WhatIsGround_8() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t643789, ___m_WhatIsGround_8)); }
	inline LayerMask_t3236759763  get_m_WhatIsGround_8() const { return ___m_WhatIsGround_8; }
	inline LayerMask_t3236759763 * get_address_of_m_WhatIsGround_8() { return &___m_WhatIsGround_8; }
	inline void set_m_WhatIsGround_8(LayerMask_t3236759763  value)
	{
		___m_WhatIsGround_8 = value;
	}

	inline static int32_t get_offset_of_m_GroundCheck_9() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t643789, ___m_GroundCheck_9)); }
	inline Transform_t1659122786 * get_m_GroundCheck_9() const { return ___m_GroundCheck_9; }
	inline Transform_t1659122786 ** get_address_of_m_GroundCheck_9() { return &___m_GroundCheck_9; }
	inline void set_m_GroundCheck_9(Transform_t1659122786 * value)
	{
		___m_GroundCheck_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_GroundCheck_9, value);
	}

	inline static int32_t get_offset_of_m_Grounded_10() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t643789, ___m_Grounded_10)); }
	inline bool get_m_Grounded_10() const { return ___m_Grounded_10; }
	inline bool* get_address_of_m_Grounded_10() { return &___m_Grounded_10; }
	inline void set_m_Grounded_10(bool value)
	{
		___m_Grounded_10 = value;
	}

	inline static int32_t get_offset_of_m_CeilingCheck_11() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t643789, ___m_CeilingCheck_11)); }
	inline Transform_t1659122786 * get_m_CeilingCheck_11() const { return ___m_CeilingCheck_11; }
	inline Transform_t1659122786 ** get_address_of_m_CeilingCheck_11() { return &___m_CeilingCheck_11; }
	inline void set_m_CeilingCheck_11(Transform_t1659122786 * value)
	{
		___m_CeilingCheck_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_CeilingCheck_11, value);
	}

	inline static int32_t get_offset_of_m_Anim_12() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t643789, ___m_Anim_12)); }
	inline Animator_t2776330603 * get_m_Anim_12() const { return ___m_Anim_12; }
	inline Animator_t2776330603 ** get_address_of_m_Anim_12() { return &___m_Anim_12; }
	inline void set_m_Anim_12(Animator_t2776330603 * value)
	{
		___m_Anim_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Anim_12, value);
	}

	inline static int32_t get_offset_of_m_Rigidbody2D_13() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t643789, ___m_Rigidbody2D_13)); }
	inline Rigidbody2D_t1743771669 * get_m_Rigidbody2D_13() const { return ___m_Rigidbody2D_13; }
	inline Rigidbody2D_t1743771669 ** get_address_of_m_Rigidbody2D_13() { return &___m_Rigidbody2D_13; }
	inline void set_m_Rigidbody2D_13(Rigidbody2D_t1743771669 * value)
	{
		___m_Rigidbody2D_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody2D_13, value);
	}

	inline static int32_t get_offset_of_m_FacingRight_14() { return static_cast<int32_t>(offsetof(PlatformerCharacter2D_t643789, ___m_FacingRight_14)); }
	inline bool get_m_FacingRight_14() const { return ___m_FacingRight_14; }
	inline bool* get_address_of_m_FacingRight_14() { return &___m_FacingRight_14; }
	inline void set_m_FacingRight_14(bool value)
	{
		___m_FacingRight_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
