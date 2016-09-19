#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Completed.Enemy
struct Enemy_t1265533614;
// Enemy
struct Enemy_t67100520;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_Completed_Enemy1265533614.h"
#include "AssemblyU2DCSharp_Enemy67100520.h"

#pragma once
// Completed.Enemy[]
struct EnemyU5BU5D_t472377051  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Enemy_t1265533614 * m_Items[1];

public:
	inline Enemy_t1265533614 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Enemy_t1265533614 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Enemy_t1265533614 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Enemy[]
struct EnemyU5BU5D_t3805539833  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Enemy_t67100520 * m_Items[1];

public:
	inline Enemy_t67100520 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Enemy_t67100520 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Enemy_t67100520 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
