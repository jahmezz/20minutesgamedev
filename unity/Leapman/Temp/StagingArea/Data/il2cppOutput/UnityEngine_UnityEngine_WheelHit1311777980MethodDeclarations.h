#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.WheelHit
struct WheelHit_t1311777980;
struct WheelHit_t1311777980_marshaled_pinvoke;
struct WheelHit_t1311777980_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WheelHit1311777980.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// UnityEngine.Vector3 UnityEngine.WheelHit::get_normal()
extern "C"  Vector3_t4282066566  WheelHit_get_normal_m1779710905 (WheelHit_t1311777980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.WheelHit::get_forwardSlip()
extern "C"  float WheelHit_get_forwardSlip_m2761683875 (WheelHit_t1311777980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.WheelHit::get_sidewaysSlip()
extern "C"  float WheelHit_get_sidewaysSlip_m164325567 (WheelHit_t1311777980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct WheelHit_t1311777980;
struct WheelHit_t1311777980_marshaled_pinvoke;

extern "C" void WheelHit_t1311777980_marshal_pinvoke(const WheelHit_t1311777980& unmarshaled, WheelHit_t1311777980_marshaled_pinvoke& marshaled);
extern "C" void WheelHit_t1311777980_marshal_pinvoke_back(const WheelHit_t1311777980_marshaled_pinvoke& marshaled, WheelHit_t1311777980& unmarshaled);
extern "C" void WheelHit_t1311777980_marshal_pinvoke_cleanup(WheelHit_t1311777980_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct WheelHit_t1311777980;
struct WheelHit_t1311777980_marshaled_com;

extern "C" void WheelHit_t1311777980_marshal_com(const WheelHit_t1311777980& unmarshaled, WheelHit_t1311777980_marshaled_com& marshaled);
extern "C" void WheelHit_t1311777980_marshal_com_back(const WheelHit_t1311777980_marshaled_com& marshaled, WheelHit_t1311777980& unmarshaled);
extern "C" void WheelHit_t1311777980_marshal_com_cleanup(WheelHit_t1311777980_marshaled_com& marshaled);
