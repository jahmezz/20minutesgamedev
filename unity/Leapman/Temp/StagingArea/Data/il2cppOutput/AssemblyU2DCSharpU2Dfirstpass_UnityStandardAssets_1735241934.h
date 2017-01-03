#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Water.MeshContainer
struct  MeshContainer_t1735241934  : public Il2CppObject
{
public:
	// UnityEngine.Mesh UnityStandardAssets.Water.MeshContainer::mesh
	Mesh_t4241756145 * ___mesh_0;
	// UnityEngine.Vector3[] UnityStandardAssets.Water.MeshContainer::vertices
	Vector3U5BU5D_t215400611* ___vertices_1;
	// UnityEngine.Vector3[] UnityStandardAssets.Water.MeshContainer::normals
	Vector3U5BU5D_t215400611* ___normals_2;

public:
	inline static int32_t get_offset_of_mesh_0() { return static_cast<int32_t>(offsetof(MeshContainer_t1735241934, ___mesh_0)); }
	inline Mesh_t4241756145 * get_mesh_0() const { return ___mesh_0; }
	inline Mesh_t4241756145 ** get_address_of_mesh_0() { return &___mesh_0; }
	inline void set_mesh_0(Mesh_t4241756145 * value)
	{
		___mesh_0 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_0, value);
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(MeshContainer_t1735241934, ___vertices_1)); }
	inline Vector3U5BU5D_t215400611* get_vertices_1() const { return ___vertices_1; }
	inline Vector3U5BU5D_t215400611** get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(Vector3U5BU5D_t215400611* value)
	{
		___vertices_1 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_1, value);
	}

	inline static int32_t get_offset_of_normals_2() { return static_cast<int32_t>(offsetof(MeshContainer_t1735241934, ___normals_2)); }
	inline Vector3U5BU5D_t215400611* get_normals_2() const { return ___normals_2; }
	inline Vector3U5BU5D_t215400611** get_address_of_normals_2() { return &___normals_2; }
	inline void set_normals_2(Vector3U5BU5D_t215400611* value)
	{
		___normals_2 = value;
		Il2CppCodeGenWriteBarrier(&___normals_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
