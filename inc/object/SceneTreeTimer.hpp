#ifndef IVR_CPP_SCENETREETIMER_HPP
#define IVR_CPP_SCENETREETIMER_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace ivr {


class SceneTreeTimer : public Reference {
	struct ___method_bindings {
		ivr_method_bind *mb_get_time_left;
		ivr_method_bind *mb_set_time_left;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "SceneTreeTimer"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "SceneTreeTimer"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	real_t get_time_left() const;
	void set_time_left(const real_t time);

};

}

#endif