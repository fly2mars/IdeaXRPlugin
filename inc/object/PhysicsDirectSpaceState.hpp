#ifndef IVR_CPP_PHYSICSDIRECTSPACESTATE_HPP
#define IVR_CPP_PHYSICSDIRECTSPACESTATE_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Object.hpp"
namespace ivr {

class PhysicsShapeQueryParameters;

class PhysicsDirectSpaceState : public Object {
	struct ___method_bindings {
		ivr_method_bind *mb_cast_motion;
		ivr_method_bind *mb_collide_shape;
		ivr_method_bind *mb_get_rest_info;
		ivr_method_bind *mb_intersect_ray;
		ivr_method_bind *mb_intersect_shape;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PhysicsDirectSpaceState"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "PhysicsDirectSpaceState"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	Array cast_motion(const PhysicsShapeQueryParameters *shape, const Vector3 motion);
	Array collide_shape(const PhysicsShapeQueryParameters *shape, const int64_t max_results = 32);
	Dictionary get_rest_info(const PhysicsShapeQueryParameters *shape);
	Dictionary intersect_ray(const Vector3 from, const Vector3 to, const Array exclude = Array(), const int64_t collision_mask = 2147483647, const bool collide_with_bodies = true, const bool collide_with_areas = false);
	Array intersect_shape(const PhysicsShapeQueryParameters *shape, const int64_t max_results = 32);

};

}

#endif