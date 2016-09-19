#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.BoxCollider2D
struct BoxCollider2D_t2212926951;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovingObject
struct  MovingObject_t3243022669  : public MonoBehaviour_t667441552
{
public:
	// System.Single MovingObject::moveTime
	float ___moveTime_2;
	// UnityEngine.LayerMask MovingObject::blockingLayer
	LayerMask_t3236759763  ___blockingLayer_3;
	// UnityEngine.BoxCollider2D MovingObject::boxCollider
	BoxCollider2D_t2212926951 * ___boxCollider_4;
	// UnityEngine.Rigidbody2D MovingObject::rb2d
	Rigidbody2D_t1743771669 * ___rb2d_5;
	// System.Single MovingObject::inverseMoveTime
	float ___inverseMoveTime_6;

public:
	inline static int32_t get_offset_of_moveTime_2() { return static_cast<int32_t>(offsetof(MovingObject_t3243022669, ___moveTime_2)); }
	inline float get_moveTime_2() const { return ___moveTime_2; }
	inline float* get_address_of_moveTime_2() { return &___moveTime_2; }
	inline void set_moveTime_2(float value)
	{
		___moveTime_2 = value;
	}

	inline static int32_t get_offset_of_blockingLayer_3() { return static_cast<int32_t>(offsetof(MovingObject_t3243022669, ___blockingLayer_3)); }
	inline LayerMask_t3236759763  get_blockingLayer_3() const { return ___blockingLayer_3; }
	inline LayerMask_t3236759763 * get_address_of_blockingLayer_3() { return &___blockingLayer_3; }
	inline void set_blockingLayer_3(LayerMask_t3236759763  value)
	{
		___blockingLayer_3 = value;
	}

	inline static int32_t get_offset_of_boxCollider_4() { return static_cast<int32_t>(offsetof(MovingObject_t3243022669, ___boxCollider_4)); }
	inline BoxCollider2D_t2212926951 * get_boxCollider_4() const { return ___boxCollider_4; }
	inline BoxCollider2D_t2212926951 ** get_address_of_boxCollider_4() { return &___boxCollider_4; }
	inline void set_boxCollider_4(BoxCollider2D_t2212926951 * value)
	{
		___boxCollider_4 = value;
		Il2CppCodeGenWriteBarrier(&___boxCollider_4, value);
	}

	inline static int32_t get_offset_of_rb2d_5() { return static_cast<int32_t>(offsetof(MovingObject_t3243022669, ___rb2d_5)); }
	inline Rigidbody2D_t1743771669 * get_rb2d_5() const { return ___rb2d_5; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb2d_5() { return &___rb2d_5; }
	inline void set_rb2d_5(Rigidbody2D_t1743771669 * value)
	{
		___rb2d_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_5, value);
	}

	inline static int32_t get_offset_of_inverseMoveTime_6() { return static_cast<int32_t>(offsetof(MovingObject_t3243022669, ___inverseMoveTime_6)); }
	inline float get_inverseMoveTime_6() const { return ___inverseMoveTime_6; }
	inline float* get_address_of_inverseMoveTime_6() { return &___inverseMoveTime_6; }
	inline void set_inverseMoveTime_6(float value)
	{
		___inverseMoveTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
