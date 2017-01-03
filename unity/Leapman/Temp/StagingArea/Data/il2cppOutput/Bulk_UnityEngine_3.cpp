#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Delegate
struct Delegate_t3310234105;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t1657757719;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal4096243933.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal4096243933MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "mscorlib_System_Threading_Interlocked373807572MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtension2541795172.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtension2541795172MethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Delegate3310234105.h"
#include "mscorlib_System_Delegate3310234105MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleA1657757719.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleA1657757719MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules2889237774.h"
#include "mscorlib_System_Enum2862688501MethodDeclarations.h"
#include "mscorlib_System_Enum2862688501.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Attribute2523058482MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules2889237774MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern Il2CppClass* MathfInternal_t4096243933_il2cpp_TypeInfo_var;
extern const uint32_t MathfInternal__cctor_m2600550988_MetadataUsageId;
extern "C"  void MathfInternal__cctor_m2600550988 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m2600550988_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t4096243933_StaticFields*)MathfInternal_t4096243933_il2cpp_TypeInfo_var->static_fields)->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t4096243933_StaticFields*)MathfInternal_t4096243933_il2cpp_TypeInfo_var->static_fields)->set_FloatMinDenormal_1((1.401298E-45f));
		float L_0 = ((MathfInternal_t4096243933_StaticFields*)MathfInternal_t4096243933_il2cpp_TypeInfo_var->static_fields)->get_FloatMinDenormal_1();
		il2cpp_codegen_memory_barrier();
		float L_1 = Interlocked_CompareExchange_m1066672614(NULL /*static, unused*/, (((MathfInternal_t4096243933_StaticFields*)MathfInternal_t4096243933_il2cpp_TypeInfo_var->static_fields)->get_address_of_FloatMinDenormal_1()), L_0, (0.0f), /*hidden argument*/NULL);
		((MathfInternal_t4096243933_StaticFields*)MathfInternal_t4096243933_il2cpp_TypeInfo_var->static_fields)->set_IsFlushToZeroEnabled_2((bool)((((float)L_1) == ((float)(0.0f)))? 1 : 0));
		return;
	}
}
// Conversion methods for marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t4096243933_marshal_pinvoke(const MathfInternal_t4096243933& unmarshaled, MathfInternal_t4096243933_marshaled_pinvoke& marshaled)
{
}
extern "C" void MathfInternal_t4096243933_marshal_pinvoke_back(const MathfInternal_t4096243933_marshaled_pinvoke& marshaled, MathfInternal_t4096243933& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t4096243933_marshal_pinvoke_cleanup(MathfInternal_t4096243933_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t4096243933_marshal_com(const MathfInternal_t4096243933& unmarshaled, MathfInternal_t4096243933_marshaled_com& marshaled)
{
}
extern "C" void MathfInternal_t4096243933_marshal_com_back(const MathfInternal_t4096243933_marshaled_com& marshaled, MathfInternal_t4096243933& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t4096243933_marshal_com_cleanup(MathfInternal_t4096243933_marshaled_com& marshaled)
{
}
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C"  Delegate_t3310234105 * NetFxCoreExtensions_CreateDelegate_m3408605866 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___self0, Type_t * ___delegateType1, Il2CppObject * ___target2, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___delegateType1;
		Il2CppObject * L_1 = ___target2;
		MethodInfo_t * L_2 = ___self0;
		Delegate_t3310234105 * L_3 = Delegate_CreateDelegate_m3460497746(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C"  MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m1628849205 (Il2CppObject * __this /* static, unused */, Delegate_t3310234105 * ___self0, const MethodInfo* method)
{
	{
		Delegate_t3310234105 * L_0 = ___self0;
		MethodInfo_t * L_1 = Delegate_get_Method_m669548326(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern Il2CppClass* TypeInferenceRules_t2889237774_il2cpp_TypeInfo_var;
extern const uint32_t TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId;
extern "C"  void TypeInferenceRuleAttribute__ctor_m1168575159 (TypeInferenceRuleAttribute_t1657757719 * __this, int32_t ___rule0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule0;
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(TypeInferenceRules_t2889237774_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t2862688501 *)L_2);
		TypeInferenceRuleAttribute__ctor_m2173394041(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C"  void TypeInferenceRuleAttribute__ctor_m2173394041 (TypeInferenceRuleAttribute_t1657757719 * __this, String_t* ___rule0, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule0;
		__this->set__rule_0(L_0);
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C"  String_t* TypeInferenceRuleAttribute_ToString_m318752778 (TypeInferenceRuleAttribute_t1657757719 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get__rule_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
