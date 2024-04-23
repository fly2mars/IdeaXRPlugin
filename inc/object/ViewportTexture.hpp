#ifndef IVR_CPP_VIEWPORTTEXTURE_HPP
#define IVR_CPP_VIEWPORTTEXTURE_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Texture.hpp"
namespace ivr {


class ViewportTexture : public Texture {
	struct ___method_bindings {
		ivr_method_bind *mb_get_viewport_path_in_scene;
		ivr_method_bind *mb_set_viewport_path_in_scene;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "ViewportTexture"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "ViewportTexture"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static ViewportTexture *_new();

	// methods
	NodePath get_viewport_path_in_scene() const;
	void set_viewport_path_in_scene(const NodePath path);

};

}

#endif