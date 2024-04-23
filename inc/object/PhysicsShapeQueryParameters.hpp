#ifndef IVR_CPP_PHYSICSSHAPEQUERYPARAMETERS_HPP
#define IVR_CPP_PHYSICSSHAPEQUERYPARAMETERS_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace ivr {

class Resource;

class PhysicsShapeQueryParameters : public Reference {
	struct ___method_bindings {
		ivr_method_bind *mb_get_collision_mask;
		ivr_method_bind *mb_get_exclude;
		ivr_method_bind *mb_get_margin;
		ivr_method_bind *mb_get_shape_rid;
		ivr_method_bind *mb_get_transform;
		ivr_method_bind *mb_is_collide_with_areas_enabled;
		ivr_method_bind *mb_is_collide_with_bodies_enabled;
		ivr_method_bind *mb_set_collide_with_areas;
		ivr_method_bind *mb_set_collide_with_bodies;
		ivr_method_bind *mb_set_collision_mask;
		ivr_method_bind *mb_set_exclude;
		ivr_method_bind *mb_set_margin;
		ivr_method_bind *mb_set_shape;
		ivr_method_bind *mb_set_shape_rid;
		ivr_method_bind *mb_set_transform;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PhysicsShapeQueryParameters"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "PhysicsShapeQueryParameters"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static PhysicsShapeQueryParameters *_new();

	// methods
	int64_t get_collision_mask() const;
	Array get_exclude() const;
	real_t get_margin() const;
	RID get_shape_rid() const;
	Transform get_transform() const;
	bool is_collide_with_areas_enabled() const;
	bool is_collide_with_bodies_enabled() const;
	void set_collide_with_areas(const bool enable);
	void set_collide_with_bodies(const bool enable);
	void set_collision_mask(const int64_t collision_mask);
	void set_exclude(const Array exclude);
	void set_margin(const real_t margin);
	void set_shape(const Resource *shape);
	void set_shape_rid(const RID shape);
	void set_transform(const Transform transform);

};

}

#endif