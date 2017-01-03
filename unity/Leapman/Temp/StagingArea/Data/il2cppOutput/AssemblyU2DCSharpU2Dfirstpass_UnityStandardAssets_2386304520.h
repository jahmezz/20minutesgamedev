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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Car.CarUserControl
struct  CarUserControl_t2386304520  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.Vehicles.Car.CarController UnityStandardAssets.Vehicles.Car.CarUserControl::m_Car
	CarController_t4046949162 * ___m_Car_2;

public:
	inline static int32_t get_offset_of_m_Car_2() { return static_cast<int32_t>(offsetof(CarUserControl_t2386304520, ___m_Car_2)); }
	inline CarController_t4046949162 * get_m_Car_2() const { return ___m_Car_2; }
	inline CarController_t4046949162 ** get_address_of_m_Car_2() { return &___m_Car_2; }
	inline void set_m_Car_2(CarController_t4046949162 * value)
	{
		___m_Car_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Car_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
