#ifndef IVR_CPP_MATERIAL_HPP
#define IVR_CPP_MATERIAL_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace ivr {

class Material;

class Material : public Resource {
	struct ___method_bindings {
		ivr_method_bind *mb_get_next_pass;
		ivr_method_bind *mb_get_render_priority;
		ivr_method_bind *mb_set_next_pass;
		ivr_method_bind *mb_set_render_priority;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Material"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "Material"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int RENDER_PRIORITY_MAX = 127;
	const static int RENDER_PRIORITY_MIN = -128;

	// methods
	Material *get_next_pass() const;
	int64_t get_render_priority() const;
	void set_next_pass(const Material *next_pass);
	void set_render_priority(const int64_t priority);

};

}

#endif