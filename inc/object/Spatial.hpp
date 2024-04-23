#ifndef IVR_CPP_SPATIAL_HPP
#define IVR_CPP_SPATIAL_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Node.hpp"
namespace ivr {

class SpatialGizmo;
class Spatial;
class World;

class Spatial : public Node {
	struct ___method_bindings {
		ivr_method_bind *mb__update_gizmo;
		ivr_method_bind *mb_enable_outline;
		ivr_method_bind *mb_force_update_transform;
		ivr_method_bind *mb_get_gizmo;
		ivr_method_bind *mb_get_global_rotation_degree;
		ivr_method_bind *mb_get_global_transform;
		ivr_method_bind *mb_get_global_transform1;
		ivr_method_bind *mb_get_global_translation;
		ivr_method_bind *mb_get_parent_spatial;
		ivr_method_bind *mb_get_rotation;
		ivr_method_bind *mb_get_rotation_degrees;
		ivr_method_bind *mb_get_scale;
		ivr_method_bind *mb_get_transform;
		ivr_method_bind *mb_get_translation;
		ivr_method_bind *mb_get_world;
		ivr_method_bind *mb_global_rotate;
		ivr_method_bind *mb_global_scale;
		ivr_method_bind *mb_global_translate;
		ivr_method_bind *mb_hide;
		ivr_method_bind *mb_is_local_transform_notification_enabled;
		ivr_method_bind *mb_is_scale_disabled;
		ivr_method_bind *mb_is_set_as_toplevel;
		ivr_method_bind *mb_is_transform_notification_enabled;
		ivr_method_bind *mb_is_visible;
		ivr_method_bind *mb_is_visible_in_tree;
		ivr_method_bind *mb_look_at;
		ivr_method_bind *mb_look_at_from_position;
		ivr_method_bind *mb_orthonormalize;
		ivr_method_bind *mb_rotate;
		ivr_method_bind *mb_rotate_object_local;
		ivr_method_bind *mb_rotate_x;
		ivr_method_bind *mb_rotate_y;
		ivr_method_bind *mb_rotate_z;
		ivr_method_bind *mb_scale_object_local;
		ivr_method_bind *mb_set_as_toplevel;
		ivr_method_bind *mb_set_disable_scale;
		ivr_method_bind *mb_set_gizmo;
		ivr_method_bind *mb_set_global_rotation_degree;
		ivr_method_bind *mb_set_global_transform;
		ivr_method_bind *mb_set_global_transform1;
		ivr_method_bind *mb_set_global_translation;
		ivr_method_bind *mb_set_identity;
		ivr_method_bind *mb_set_ignore_transform_notification;
		ivr_method_bind *mb_set_notify_local_transform;
		ivr_method_bind *mb_set_notify_transform;
		ivr_method_bind *mb_set_outline_color;
		ivr_method_bind *mb_set_rotation;
		ivr_method_bind *mb_set_rotation_degrees;
		ivr_method_bind *mb_set_scale;
		ivr_method_bind *mb_set_transform;
		ivr_method_bind *mb_set_translation;
		ivr_method_bind *mb_set_visible;
		ivr_method_bind *mb_show;
		ivr_method_bind *mb_to_global;
		ivr_method_bind *mb_to_local;
		ivr_method_bind *mb_translate;
		ivr_method_bind *mb_translate_object_local;
		ivr_method_bind *mb_update_gizmo;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Spatial"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "Spatial"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int NOTIFICATION_ENTER_WORLD = 41;
	const static int NOTIFICATION_EXIT_WORLD = 42;
	const static int NOTIFICATION_TRANSFORM_CHANGED = 2000;
	const static int NOTIFICATION_VISIBILITY_CHANGED = 43;


	static Spatial *_new();

	// methods
	void _update_gizmo();
	void enable_outline(const bool enable);
	void force_update_transform();
	SpatialGizmo *get_gizmo() const;
	Vector3 get_global_rotation_degree() const;
	Transform get_global_transform() const;
	Transform get_global_transform1() const;
	Vector3 get_global_translation() const;
	Spatial *get_parent_spatial() const;
	Vector3 get_rotation() const;
	Vector3 get_rotation_degrees() const;
	Vector3 get_scale() const;
	Transform get_transform() const;
	Vector3 get_translation() const;
	World *get_world() const;
	void global_rotate(const Vector3 axis, const real_t angle);
	void global_scale(const Vector3 scale);
	void global_translate(const Vector3 offset);
	void hide();
	bool is_local_transform_notification_enabled() const;
	bool is_scale_disabled() const;
	bool is_set_as_toplevel() const;
	bool is_transform_notification_enabled() const;
	bool is_visible() const;
	bool is_visible_in_tree() const;
	void look_at(const Vector3 target, const Vector3 up);
	void look_at_from_position(const Vector3 position, const Vector3 target, const Vector3 up);
	void orthonormalize();
	void rotate(const Vector3 axis, const real_t angle);
	void rotate_object_local(const Vector3 axis, const real_t angle);
	void rotate_x(const real_t angle);
	void rotate_y(const real_t angle);
	void rotate_z(const real_t angle);
	void scale_object_local(const Vector3 scale);
	void set_as_toplevel(const bool enable);
	void set_disable_scale(const bool disable);
	void set_gizmo(const SpatialGizmo *gizmo);
	void set_global_rotation_degree(const Vector3 euler_degrees);
	void set_global_transform(const Transform global);
	void set_global_transform1(const Transform global);
	void set_global_translation(const Vector3 global);
	void set_identity();
	void set_ignore_transform_notification(const bool enabled);
	void set_notify_local_transform(const bool enable);
	void set_notify_transform(const bool enable);
	void set_outline_color(const Color color);
	void set_rotation(const Vector3 euler);
	void set_rotation_degrees(const Vector3 euler_degrees);
	void set_scale(const Vector3 scale);
	void set_transform(const Transform local);
	void set_translation(const Vector3 translation);
	void set_visible(const bool visible);
	void show();
	Vector3 to_global(const Vector3 local_point) const;
	Vector3 to_local(const Vector3 global_point) const;
	void translate(const Vector3 offset);
	void translate_object_local(const Vector3 offset);
	void update_gizmo();

};

}

#endif