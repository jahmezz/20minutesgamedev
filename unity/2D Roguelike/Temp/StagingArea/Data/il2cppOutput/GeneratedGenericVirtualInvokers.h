#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




#pragma once
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const MethodInfo*);

	static inline void Invoke (const MethodInfo* method, void* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp::vm::Runtime::GetGenericVirtualInvokeData(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const MethodInfo*);

	static inline void Invoke (const MethodInfo* method, void* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp::vm::Runtime::GetGenericVirtualInvokeData(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
