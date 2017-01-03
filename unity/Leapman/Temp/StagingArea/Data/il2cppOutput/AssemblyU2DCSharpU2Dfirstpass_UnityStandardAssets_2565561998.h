#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t3941751733;
// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect
struct  JetParticleEffect_t2565561998  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::minColour
	Color_t4194546905  ___minColour_2;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_Jet
	AeroplaneController_t3941751733 * ___m_Jet_3;
	// UnityEngine.ParticleSystem UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_System
	ParticleSystem_t381473177 * ___m_System_4;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_OriginalStartSize
	float ___m_OriginalStartSize_5;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_OriginalLifetime
	float ___m_OriginalLifetime_6;
	// UnityEngine.Color UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_OriginalStartColor
	Color_t4194546905  ___m_OriginalStartColor_7;

public:
	inline static int32_t get_offset_of_minColour_2() { return static_cast<int32_t>(offsetof(JetParticleEffect_t2565561998, ___minColour_2)); }
	inline Color_t4194546905  get_minColour_2() const { return ___minColour_2; }
	inline Color_t4194546905 * get_address_of_minColour_2() { return &___minColour_2; }
	inline void set_minColour_2(Color_t4194546905  value)
	{
		___minColour_2 = value;
	}

	inline static int32_t get_offset_of_m_Jet_3() { return static_cast<int32_t>(offsetof(JetParticleEffect_t2565561998, ___m_Jet_3)); }
	inline AeroplaneController_t3941751733 * get_m_Jet_3() const { return ___m_Jet_3; }
	inline AeroplaneController_t3941751733 ** get_address_of_m_Jet_3() { return &___m_Jet_3; }
	inline void set_m_Jet_3(AeroplaneController_t3941751733 * value)
	{
		___m_Jet_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Jet_3, value);
	}

	inline static int32_t get_offset_of_m_System_4() { return static_cast<int32_t>(offsetof(JetParticleEffect_t2565561998, ___m_System_4)); }
	inline ParticleSystem_t381473177 * get_m_System_4() const { return ___m_System_4; }
	inline ParticleSystem_t381473177 ** get_address_of_m_System_4() { return &___m_System_4; }
	inline void set_m_System_4(ParticleSystem_t381473177 * value)
	{
		___m_System_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_System_4, value);
	}

	inline static int32_t get_offset_of_m_OriginalStartSize_5() { return static_cast<int32_t>(offsetof(JetParticleEffect_t2565561998, ___m_OriginalStartSize_5)); }
	inline float get_m_OriginalStartSize_5() const { return ___m_OriginalStartSize_5; }
	inline float* get_address_of_m_OriginalStartSize_5() { return &___m_OriginalStartSize_5; }
	inline void set_m_OriginalStartSize_5(float value)
	{
		___m_OriginalStartSize_5 = value;
	}

	inline static int32_t get_offset_of_m_OriginalLifetime_6() { return static_cast<int32_t>(offsetof(JetParticleEffect_t2565561998, ___m_OriginalLifetime_6)); }
	inline float get_m_OriginalLifetime_6() const { return ___m_OriginalLifetime_6; }
	inline float* get_address_of_m_OriginalLifetime_6() { return &___m_OriginalLifetime_6; }
	inline void set_m_OriginalLifetime_6(float value)
	{
		___m_OriginalLifetime_6 = value;
	}

	inline static int32_t get_offset_of_m_OriginalStartColor_7() { return static_cast<int32_t>(offsetof(JetParticleEffect_t2565561998, ___m_OriginalStartColor_7)); }
	inline Color_t4194546905  get_m_OriginalStartColor_7() const { return ___m_OriginalStartColor_7; }
	inline Color_t4194546905 * get_address_of_m_OriginalStartColor_7() { return &___m_OriginalStartColor_7; }
	inline void set_m_OriginalStartColor_7(Color_t4194546905  value)
	{
		___m_OriginalStartColor_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
