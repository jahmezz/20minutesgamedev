#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Vehicles.Car.CarController
struct CarController_t4046949162;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Car.Mudguard
struct  Mudguard_t886101459  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.Vehicles.Car.CarController UnityStandardAssets.Vehicles.Car.Mudguard::carController
	CarController_t4046949162 * ___carController_2;
	// UnityEngine.Quaternion UnityStandardAssets.Vehicles.Car.Mudguard::m_OriginalRotation
	Quaternion_t1553702882  ___m_OriginalRotation_3;

public:
	inline static int32_t get_offset_of_carController_2() { return static_cast<int32_t>(offsetof(Mudguard_t886101459, ___carController_2)); }
	inline CarController_t4046949162 * get_carController_2() const { return ___carController_2; }
	inline CarController_t4046949162 ** get_address_of_carController_2() { return &___carController_2; }
	inline void set_carController_2(CarController_t4046949162 * value)
	{
		___carController_2 = value;
		Il2CppCodeGenWriteBarrier(&___carController_2, value);
	}

	inline static int32_t get_offset_of_m_OriginalRotation_3() { return static_cast<int32_t>(offsetof(Mudguard_t886101459, ___m_OriginalRotation_3)); }
	inline Quaternion_t1553702882  get_m_OriginalRotation_3() const { return ___m_OriginalRotation_3; }
	inline Quaternion_t1553702882 * get_address_of_m_OriginalRotation_3() { return &___m_OriginalRotation_3; }
	inline void set_m_OriginalRotation_3(Quaternion_t1553702882  value)
	{
		___m_OriginalRotation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
