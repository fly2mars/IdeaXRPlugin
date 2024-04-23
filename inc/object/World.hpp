#ifndef IVR_CPP_WORLD_HPP
#define IVR_CPP_WORLD_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace ivr {

class PhysicsDirectSpaceState;
class Environment;

class World : public Resource {
	struct ___method_bindings {
		ivr_method_bind *mb_get_direct_space_state;
		ivr_method_bind *mb_get_environment;
		ivr_method_bind *mb_get_fallback_environment;
		ivr_method_bind *mb_get_scenario;
		ivr_method_bind *mb_get_space;
		ivr_method_bind *mb_set_environment;
		ivr_method_bind *mb_set_fallback_environment;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "World"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "World"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static World *_new();

	// methods
	PhysicsDirectSpaceState *get_direct_space_state();
	Ref<Environment> get_environment() const;
	Ref<Environment> get_fallback_environment() const;
	RID get_scenario() const;
	RID get_space() const;
	void set_environment(const Ref<Environment> env);
	void set_fallback_environment(const Ref<Environment> env);

};

}

#endif