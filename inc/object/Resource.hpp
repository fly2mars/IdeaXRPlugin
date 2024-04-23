#ifndef IVR_CPP_RESOURCE_HPP
#define IVR_CPP_RESOURCE_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace ivr {

class Resource;
class Node;

class Resource : public Reference {
	struct ___method_bindings {
		ivr_method_bind *mb__setup_local_to_scene;
		ivr_method_bind *mb_duplicate;
		ivr_method_bind *mb_emit_changed;
		ivr_method_bind *mb_get_local_scene;
		ivr_method_bind *mb_get_name;
		ivr_method_bind *mb_get_path;
		ivr_method_bind *mb_get_rid;
		ivr_method_bind *mb_is_local_to_scene;
		ivr_method_bind *mb_set_local_to_scene;
		ivr_method_bind *mb_set_name;
		ivr_method_bind *mb_set_path;
		ivr_method_bind *mb_setup_local_to_scene;
		ivr_method_bind *mb_take_over_path;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Resource"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "Resource"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static Resource *_new();

	// methods
	void _setup_local_to_scene();
	Resource *duplicate(const bool subresources = false) const;
	void emit_changed();
	Node *get_local_scene() const;
	String get_name() const;
	String get_path() const;
	RID get_rid() const;
	bool is_local_to_scene() const;
	void set_local_to_scene(const bool enable);
	void set_name(const String name);
	void set_path(const String path);
	void setup_local_to_scene();
	void take_over_path(const String path);

};

}

#endif