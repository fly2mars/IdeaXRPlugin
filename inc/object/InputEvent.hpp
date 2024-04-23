#ifndef IVR_CPP_INPUTEVENT_HPP
#define IVR_CPP_INPUTEVENT_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace ivr {

class InputEvent;

class InputEvent : public Resource {
	struct ___method_bindings {
		ivr_method_bind *mb_accumulate;
		ivr_method_bind *mb_as_text;
		ivr_method_bind *mb_gdi_get_win_rid;
		ivr_method_bind *mb_gdi_set_win_rid;
		ivr_method_bind *mb_get_action_strength;
		ivr_method_bind *mb_get_device;
		ivr_method_bind *mb_is_action;
		ivr_method_bind *mb_is_action_pressed;
		ivr_method_bind *mb_is_action_released;
		ivr_method_bind *mb_is_action_type;
		ivr_method_bind *mb_is_echo;
		ivr_method_bind *mb_is_pressed;
		ivr_method_bind *mb_set_device;
		ivr_method_bind *mb_shortcut_match;
		ivr_method_bind *mb_xformed_by;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "InputEvent"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "InputEvent"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	bool accumulate(const InputEvent *with_event);
	String as_text() const;
	RID gdi_get_win_rid() const;
	void gdi_set_win_rid(const RID gdi_win_rid);
	real_t get_action_strength(const String action) const;
	int64_t get_device() const;
	bool is_action(const String action) const;
	bool is_action_pressed(const String action, const bool allow_echo = false) const;
	bool is_action_released(const String action) const;
	bool is_action_type() const;
	bool is_echo() const;
	bool is_pressed() const;
	void set_device(const int64_t device);
	bool shortcut_match(const InputEvent *event) const;
	InputEvent *xformed_by(const Transform2D xform, const Vector2 local_ofs = Vector2(0, 0)) const;

};

}

#endif