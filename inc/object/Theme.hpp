#ifndef IVR_CPP_THEME_HPP
#define IVR_CPP_THEME_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace ivr {

class Theme;
class Font;
class Texture;
class StyleBox;

class Theme : public Resource {
	struct ___method_bindings {
		ivr_method_bind *mb__emit_theme_changed;
		ivr_method_bind *mb_clear;
		ivr_method_bind *mb_clear_color;
		ivr_method_bind *mb_clear_constant;
		ivr_method_bind *mb_clear_font;
		ivr_method_bind *mb_clear_icon;
		ivr_method_bind *mb_clear_stylebox;
		ivr_method_bind *mb_copy_default_theme;
		ivr_method_bind *mb_copy_theme;
		ivr_method_bind *mb_get_color;
		ivr_method_bind *mb_get_color_list;
		ivr_method_bind *mb_get_constant;
		ivr_method_bind *mb_get_constant_list;
		ivr_method_bind *mb_get_default_font;
		ivr_method_bind *mb_get_font;
		ivr_method_bind *mb_get_font_list;
		ivr_method_bind *mb_get_icon;
		ivr_method_bind *mb_get_icon_list;
		ivr_method_bind *mb_get_stylebox;
		ivr_method_bind *mb_get_stylebox_list;
		ivr_method_bind *mb_get_stylebox_types;
		ivr_method_bind *mb_get_type_list;
		ivr_method_bind *mb_has_color;
		ivr_method_bind *mb_has_constant;
		ivr_method_bind *mb_has_font;
		ivr_method_bind *mb_has_icon;
		ivr_method_bind *mb_has_stylebox;
		ivr_method_bind *mb_set_color;
		ivr_method_bind *mb_set_constant;
		ivr_method_bind *mb_set_default_font;
		ivr_method_bind *mb_set_font;
		ivr_method_bind *mb_set_icon;
		ivr_method_bind *mb_set_stylebox;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Theme"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "Theme"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static Theme *_new();

	// methods
	void _emit_theme_changed();
	void clear();
	void clear_color(const String name, const String node_type);
	void clear_constant(const String name, const String node_type);
	void clear_font(const String name, const String node_type);
	void clear_icon(const String name, const String node_type);
	void clear_stylebox(const String name, const String node_type);
	void copy_default_theme();
	void copy_theme(const Theme *other);
	Color get_color(const String name, const String node_type) const;
	PoolStringArray get_color_list(const String node_type) const;
	int64_t get_constant(const String name, const String node_type) const;
	PoolStringArray get_constant_list(const String node_type) const;
	Ref<Font> get_default_font() const;
	Ref<Font> get_font(const String name, const String node_type) const;
	PoolStringArray get_font_list(const String node_type) const;
	Ref<Texture> get_icon(const String name, const String node_type) const;
	PoolStringArray get_icon_list(const String node_type) const;
	Ref<StyleBox> get_stylebox(const String name, const String node_type) const;
	PoolStringArray get_stylebox_list(const String node_type) const;
	PoolStringArray get_stylebox_types() const;
	PoolStringArray get_type_list(const String node_type) const;
	bool has_color(const String name, const String node_type) const;
	bool has_constant(const String name, const String node_type) const;
	bool has_font(const String name, const String node_type) const;
	bool has_icon(const String name, const String node_type) const;
	bool has_stylebox(const String name, const String node_type) const;
	void set_color(const String name, const String node_type, const Color color);
	void set_constant(const String name, const String node_type, const int64_t constant);
	void set_default_font(const Ref<Font> font);
	void set_font(const String name, const String node_type, const Ref<Font> font);
	void set_icon(const String name, const String node_type, const Ref<Texture> texture);
	void set_stylebox(const String name, const String node_type, const Ref<StyleBox> texture);

};

}

#endif