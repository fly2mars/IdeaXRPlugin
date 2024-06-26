#ifndef IVR_CPP_STYLEBOX_HPP
#define IVR_CPP_STYLEBOX_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace ivr {

class CanvasItem;

class StyleBox : public Resource {
	struct ___method_bindings {
		ivr_method_bind *mb_draw;
		ivr_method_bind *mb_get_center_size;
		ivr_method_bind *mb_get_current_item_drawn;
		ivr_method_bind *mb_get_default_margin;
		ivr_method_bind *mb_get_margin;
		ivr_method_bind *mb_get_minimum_size;
		ivr_method_bind *mb_get_offset;
		ivr_method_bind *mb_get_scale;
		ivr_method_bind *mb_set_default_margin;
		ivr_method_bind *mb_set_scale;
		ivr_method_bind *mb_test_mask;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "StyleBox"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "StyleBox"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void draw(const RID canvas_item, const Rect2 rect) const;
	Vector2 get_center_size() const;
	CanvasItem *get_current_item_drawn() const;
	real_t get_default_margin(const int64_t margin) const;
	real_t get_margin(const int64_t margin) const;
	Vector2 get_minimum_size() const;
	Vector2 get_offset() const;
	real_t get_scale() const;
	void set_default_margin(const int64_t margin, const real_t offset);
	void set_scale(const real_t scale);
	bool test_mask(const Vector2 point, const Rect2 rect) const;

};

}

#endif