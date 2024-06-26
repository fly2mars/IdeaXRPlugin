#ifndef IVR_CPP_PHYSICS2DDIRECTSPACESTATE_HPP
#define IVR_CPP_PHYSICS2DDIRECTSPACESTATE_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Object.hpp"
namespace ivr {

class Physics2DShapeQueryParameters;

class Physics2DDirectSpaceState : public Object {
	struct ___method_bindings {
		ivr_method_bind *mb_cast_motion;
		ivr_method_bind *mb_collide_shape;
		ivr_method_bind *mb_get_rest_info;
		ivr_method_bind *mb_intersect_point;
		ivr_method_bind *mb_intersect_point_on_canvas;
		ivr_method_bind *mb_intersect_ray;
		ivr_method_bind *mb_intersect_shape;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Physics2DDirectSpaceState"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "Physics2DDirectSpaceState"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	Array cast_motion(const Physics2DShapeQueryParameters *shape);
	Array collide_shape(const Physics2DShapeQueryParameters *shape, const int64_t max_results = 32);
	Dictionary get_rest_info(const Physics2DShapeQueryParameters *shape);
	Array intersect_point(const Vector2 point, const int64_t max_results = 32, const Array exclude = Array(), const int64_t collision_layer = 2147483647, const bool collide_with_bodies = true, const bool collide_with_areas = false);
	Array intersect_point_on_canvas(const Vector2 point, const int64_t canvas_instance_id, const int64_t max_results = 32, const Array exclude = Array(), const int64_t collision_layer = 2147483647, const bool collide_with_bodies = true, const bool collide_with_areas = false);
	Dictionary intersect_ray(const Vector2 from, const Vector2 to, const Array exclude = Array(), const int64_t collision_layer = 2147483647, const bool collide_with_bodies = true, const bool collide_with_areas = false);
	Array intersect_shape(const Physics2DShapeQueryParameters *shape, const int64_t max_results = 32);

};

}

#endif