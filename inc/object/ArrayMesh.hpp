#ifndef IVR_CPP_ARRAYMESH_HPP
#define IVR_CPP_ARRAYMESH_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "Mesh.hpp"

#include "Mesh.hpp"
namespace ivr {


class ArrayMesh : public Mesh {
	struct ___method_bindings {
		ivr_method_bind *mb_add_blend_shape;
		ivr_method_bind *mb_add_surface_from_arrays;
		ivr_method_bind *mb_clear_blend_shapes;
		ivr_method_bind *mb_get_blend_shape_count;
		ivr_method_bind *mb_get_blend_shape_mode;
		ivr_method_bind *mb_get_blend_shape_name;
		ivr_method_bind *mb_get_custom_aabb;
		ivr_method_bind *mb_lightmap_unwrap;
		ivr_method_bind *mb_regen_normalmaps;
		ivr_method_bind *mb_set_blend_shape_mode;
		ivr_method_bind *mb_set_custom_aabb;
		ivr_method_bind *mb_surface_find_by_name;
		ivr_method_bind *mb_surface_get_array_index_len;
		ivr_method_bind *mb_surface_get_array_len;
		ivr_method_bind *mb_surface_get_format;
		ivr_method_bind *mb_surface_get_name;
		ivr_method_bind *mb_surface_get_primitive_type;
		ivr_method_bind *mb_surface_remove;
		ivr_method_bind *mb_surface_set_name;
		ivr_method_bind *mb_surface_update_region;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ArrayMesh"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "ArrayMesh"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ArrayFormat {
		ARRAY_FORMAT_VERTEX = 1,
		ARRAY_FORMAT_NORMAL = 2,
		ARRAY_FORMAT_TANGENT = 4,
		ARRAY_FORMAT_COLOR = 8,
		ARRAY_FORMAT_TEX_UV = 16,
		ARRAY_FORMAT_TEX_UV2 = 32,
		ARRAY_FORMAT_BONES = 64,
		ARRAY_FORMAT_WEIGHTS = 128,
		ARRAY_FORMAT_INDEX = 256,
	};
	enum ArrayType {
		ARRAY_VERTEX = 0,
		ARRAY_NORMAL = 1,
		ARRAY_TANGENT = 2,
		ARRAY_COLOR = 3,
		ARRAY_TEX_UV = 4,
		ARRAY_TEX_UV2 = 5,
		ARRAY_BONES = 6,
		ARRAY_WEIGHTS = 7,
		ARRAY_INDEX = 8,
		ARRAY_MAX = 9,
	};

	// constants
	const static int ARRAY_WEIGHTS_SIZE = 4;
	const static int NO_INDEX_ARRAY = -1;


	static ArrayMesh *_new();

	// methods
	void add_blend_shape(const String name);
	void add_surface_from_arrays(const int64_t primitive, const Array arrays, const Array blend_shapes = Array(), const int64_t compress_flags = 97280);
	void clear_blend_shapes();
	int64_t get_blend_shape_count() const;
	Mesh::BlendShapeMode get_blend_shape_mode() const;
	String get_blend_shape_name(const int64_t index) const;
	AABB get_custom_aabb() const;
	Error lightmap_unwrap(const Transform transform, const real_t texel_size);
	void regen_normalmaps();
	void set_blend_shape_mode(const int64_t mode);
	void set_custom_aabb(const AABB aabb);
	int64_t surface_find_by_name(const String name) const;
	int64_t surface_get_array_index_len(const int64_t surf_idx) const;
	int64_t surface_get_array_len(const int64_t surf_idx) const;
	int64_t surface_get_format(const int64_t surf_idx) const;
	String surface_get_name(const int64_t surf_idx) const;
	Mesh::PrimitiveType surface_get_primitive_type(const int64_t surf_idx) const;
	void surface_remove(const int64_t surf_idx);
	void surface_set_name(const int64_t surf_idx, const String name);
	void surface_update_region(const int64_t surf_idx, const int64_t offset, const PoolByteArray data);

};

}

#endif