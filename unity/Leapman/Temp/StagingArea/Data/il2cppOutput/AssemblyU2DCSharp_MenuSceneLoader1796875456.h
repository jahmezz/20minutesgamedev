#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuSceneLoader
struct  MenuSceneLoader_t1796875456  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject MenuSceneLoader::menuUI
	GameObject_t3674682005 * ___menuUI_2;
	// UnityEngine.GameObject MenuSceneLoader::m_Go
	GameObject_t3674682005 * ___m_Go_3;

public:
	inline static int32_t get_offset_of_menuUI_2() { return static_cast<int32_t>(offsetof(MenuSceneLoader_t1796875456, ___menuUI_2)); }
	inline GameObject_t3674682005 * get_menuUI_2() const { return ___menuUI_2; }
	inline GameObject_t3674682005 ** get_address_of_menuUI_2() { return &___menuUI_2; }
	inline void set_menuUI_2(GameObject_t3674682005 * value)
	{
		___menuUI_2 = value;
		Il2CppCodeGenWriteBarrier(&___menuUI_2, value);
	}

	inline static int32_t get_offset_of_m_Go_3() { return static_cast<int32_t>(offsetof(MenuSceneLoader_t1796875456, ___m_Go_3)); }
	inline GameObject_t3674682005 * get_m_Go_3() const { return ___m_Go_3; }
	inline GameObject_t3674682005 ** get_address_of_m_Go_3() { return &___m_Go_3; }
	inline void set_m_Go_3(GameObject_t3674682005 * value)
	{
		___m_Go_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Go_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
