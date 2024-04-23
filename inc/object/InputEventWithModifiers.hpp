#ifndef IVR_CPP_INPUTEVENTWITHMODIFIERS_HPP
#define IVR_CPP_INPUTEVENTWITHMODIFIERS_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "InputEvent.hpp"
namespace ivr {


class InputEventWithModifiers : public InputEvent {
	struct ___method_bindings {
		ivr_method_bind *mb_get_alt;
		ivr_method_bind *mb_get_command;
		ivr_method_bind *mb_get_control;
		ivr_method_bind *mb_get_metakey;
		ivr_method_bind *mb_get_shift;
		ivr_method_bind *mb_set_alt;
		ivr_method_bind *mb_set_command;
		ivr_method_bind *mb_set_control;
		ivr_method_bind *mb_set_metakey;
		ivr_method_bind *mb_set_shift;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InputEventWithModifiers"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "InputEventWithModifiers"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	bool get_alt() const;
	bool get_command() const;
	bool get_control() const;
	bool get_metakey() const;
	bool get_shift() const;
	void set_alt(const bool enable);
	void set_command(const bool enable);
	void set_control(const bool enable);
	void set_metakey(const bool enable);
	void set_shift(const bool enable);

};

}

#endif