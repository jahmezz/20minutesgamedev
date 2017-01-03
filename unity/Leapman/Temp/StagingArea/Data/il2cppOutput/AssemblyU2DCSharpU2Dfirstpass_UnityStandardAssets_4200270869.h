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
// UnityEngine.Renderer
struct Renderer_t3076687687;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Car.BrakeLight
struct  BrakeLight_t4200270869  : public MonoBehaviour_t667441552
{
public:
	// UnityStandardAssets.Vehicles.Car.CarController UnityStandardAssets.Vehicles.Car.BrakeLight::car
	CarController_t4046949162 * ___car_2;
	// UnityEngine.Renderer UnityStandardAssets.Vehicles.Car.BrakeLight::m_Renderer
	Renderer_t3076687687 * ___m_Renderer_3;

public:
	inline static int32_t get_offset_of_car_2() { return static_cast<int32_t>(offsetof(BrakeLight_t4200270869, ___car_2)); }
	inline CarController_t4046949162 * get_car_2() const { return ___car_2; }
	inline CarController_t4046949162 ** get_address_of_car_2() { return &___car_2; }
	inline void set_car_2(CarController_t4046949162 * value)
	{
		___car_2 = value;
		Il2CppCodeGenWriteBarrier(&___car_2, value);
	}

	inline static int32_t get_offset_of_m_Renderer_3() { return static_cast<int32_t>(offsetof(BrakeLight_t4200270869, ___m_Renderer_3)); }
	inline Renderer_t3076687687 * get_m_Renderer_3() const { return ___m_Renderer_3; }
	inline Renderer_t3076687687 ** get_address_of_m_Renderer_3() { return &___m_Renderer_3; }
	inline void set_m_Renderer_3(Renderer_t3076687687 * value)
	{
		___m_Renderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Renderer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
