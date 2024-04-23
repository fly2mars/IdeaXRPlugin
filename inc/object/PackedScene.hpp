#ifndef IVR_CPP_PACKEDSCENE_HPP
#define IVR_CPP_PACKEDSCENE_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace ivr {

class SceneState;
class Node;

class PackedScene : public Resource {
	struct ___method_bindings {
		ivr_method_bind *mb__get_bundled_scene;
		ivr_method_bind *mb__set_bundled_scene;
		ivr_method_bind *mb_can_instance;
		ivr_method_bind *mb_get_state;
		ivr_method_bind *mb_instance;
		ivr_method_bind *mb_pack;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PackedScene"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "PackedScene"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum GenEditState {
		GEN_EDIT_STATE_DISABLED = 0,
		GEN_EDIT_STATE_INSTANCE = 1,
		GEN_EDIT_STATE_MAIN = 2,
	};

	// constants


	static PackedScene *_new();

	// methods
	Dictionary _get_bundled_scene() const;
	void _set_bundled_scene(const Dictionary arg0);
	bool can_instance() const;
	SceneState *get_state();
	Node *instance(const int64_t edit_state = 0) const;
	Error pack(const Node *path);

};

}

#endif