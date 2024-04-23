#ifndef IVR_CPP_SCENESTATE_HPP
#define IVR_CPP_SCENESTATE_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace ivr {

class PackedScene;

class SceneState : public Reference {
	struct ___method_bindings {
		ivr_method_bind *mb_get_connection_binds;
		ivr_method_bind *mb_get_connection_count;
		ivr_method_bind *mb_get_connection_flags;
		ivr_method_bind *mb_get_connection_method;
		ivr_method_bind *mb_get_connection_signal;
		ivr_method_bind *mb_get_connection_source;
		ivr_method_bind *mb_get_connection_target;
		ivr_method_bind *mb_get_node_count;
		ivr_method_bind *mb_get_node_groups;
		ivr_method_bind *mb_get_node_index;
		ivr_method_bind *mb_get_node_instance;
		ivr_method_bind *mb_get_node_instance_placeholder;
		ivr_method_bind *mb_get_node_name;
		ivr_method_bind *mb_get_node_owner_path;
		ivr_method_bind *mb_get_node_path;
		ivr_method_bind *mb_get_node_property_count;
		ivr_method_bind *mb_get_node_property_name;
		ivr_method_bind *mb_get_node_property_value;
		ivr_method_bind *mb_get_node_type;
		ivr_method_bind *mb_is_node_instance_placeholder;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "SceneState"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "SceneState"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum GenEditState {
		GEN_EDIT_STATE_DISABLED = 0,
		GEN_EDIT_STATE_INSTANCE = 1,
		GEN_EDIT_STATE_MAIN = 2,
	};

	// constants

	// methods
	Array get_connection_binds(const int64_t idx) const;
	int64_t get_connection_count() const;
	int64_t get_connection_flags(const int64_t idx) const;
	String get_connection_method(const int64_t idx) const;
	String get_connection_signal(const int64_t idx) const;
	NodePath get_connection_source(const int64_t idx) const;
	NodePath get_connection_target(const int64_t idx) const;
	int64_t get_node_count() const;
	PoolStringArray get_node_groups(const int64_t idx) const;
	int64_t get_node_index(const int64_t idx) const;
	Ref<PackedScene> get_node_instance(const int64_t idx) const;
	String get_node_instance_placeholder(const int64_t idx) const;
	String get_node_name(const int64_t idx) const;
	NodePath get_node_owner_path(const int64_t idx) const;
	NodePath get_node_path(const int64_t idx, const bool for_parent = false) const;
	int64_t get_node_property_count(const int64_t idx) const;
	String get_node_property_name(const int64_t idx, const int64_t prop_idx) const;
	Variant get_node_property_value(const int64_t idx, const int64_t prop_idx) const;
	String get_node_type(const int64_t idx) const;
	bool is_node_instance_placeholder(const int64_t idx) const;

};

}

#endif