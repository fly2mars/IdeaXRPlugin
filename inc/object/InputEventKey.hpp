#ifndef IVR_CPP_INPUTEVENTKEY_HPP
#define IVR_CPP_INPUTEVENTKEY_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "InputEventWithModifiers.hpp"
namespace ivr {


class InputEventKey : public InputEventWithModifiers {
	struct ___method_bindings {
		ivr_method_bind *mb_get_scancode;
		ivr_method_bind *mb_get_scancode_with_modifiers;
		ivr_method_bind *mb_get_unicode;
		ivr_method_bind *mb_set_echo;
		ivr_method_bind *mb_set_pressed;
		ivr_method_bind *mb_set_scancode;
		ivr_method_bind *mb_set_unicode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InputEventKey"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "InputEventKey"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static InputEventKey *_new();

	// methods
	int64_t get_scancode() const;
	int64_t get_scancode_with_modifiers() const;
	int64_t get_unicode() const;
	void set_echo(const bool echo);
	void set_pressed(const bool pressed);
	void set_scancode(const int64_t scancode);
	void set_unicode(const int64_t unicode);

};

}

#endif