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

// Loader
struct  Loader_t2281315379  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Loader::gameManager
	GameObject_t3674682005 * ___gameManager_2;

public:
	inline static int32_t get_offset_of_gameManager_2() { return static_cast<int32_t>(offsetof(Loader_t2281315379, ___gameManager_2)); }
	inline GameObject_t3674682005 * get_gameManager_2() const { return ___gameManager_2; }
	inline GameObject_t3674682005 ** get_address_of_gameManager_2() { return &___gameManager_2; }
	inline void set_gameManager_2(GameObject_t3674682005 * value)
	{
		___gameManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
