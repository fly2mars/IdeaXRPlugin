#ifndef IVR_CPP_FONT_HPP
#define IVR_CPP_FONT_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace ivr {


class Font : public Resource {
	struct ___method_bindings {
		ivr_method_bind *mb_draw;
		ivr_method_bind *mb_draw_char;
		ivr_method_bind *mb_get_ascent;
		ivr_method_bind *mb_get_char_size;
		ivr_method_bind *mb_get_descent;
		ivr_method_bind *mb_get_height;
		ivr_method_bind *mb_get_string_size;
		ivr_method_bind *mb_get_wordwrap_string_size;
		ivr_method_bind *mb_has_outline;
		ivr_method_bind *mb_is_distance_field_hint;
		ivr_method_bind *mb_update_changes;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Font"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "Font"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void draw(const RID canvas_item, const Vector2 position, const String string, const Color modulate = Color(1,1,1,1), const int64_t clip_w = -1, const Color outline_modulate = Color(1,1,1,1)) const;
	real_t draw_char(const RID canvas_item, const Vector2 position, const int64_t _char, const int64_t next = -1, const Color modulate = Color(1,1,1,1), const bool outline = false) const;
	real_t get_ascent() const;
	Vector2 get_char_size(const int64_t _char, const int64_t next = 0) const;
	real_t get_descent() const;
	real_t get_height() const;
	Vector2 get_string_size(const String string) const;
	Vector2 get_wordwrap_string_size(const String string, const real_t width) const;
	bool has_outline() const;
	bool is_distance_field_hint() const;
	void update_changes();

};

}

#endif