#ifndef IVR_CPP_CANVASITEM_HPP
#define IVR_CPP_CANVASITEM_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Node.hpp"
namespace ivr {

class Font;
class Texture;
class Mesh;
class MultiMesh;
class StyleBox;
class Material;
class World2D;
class InputEvent;

class CanvasItem : public Node {
	struct ___method_bindings {
		ivr_method_bind *mb__draw;
		ivr_method_bind *mb__edit_get_pivot;
		ivr_method_bind *mb__edit_get_position;
		ivr_method_bind *mb__edit_get_rect;
		ivr_method_bind *mb__edit_get_rotation;
		ivr_method_bind *mb__edit_get_scale;
		ivr_method_bind *mb__edit_get_state;
		ivr_method_bind *mb__edit_get_transform;
		ivr_method_bind *mb__edit_set_pivot;
		ivr_method_bind *mb__edit_set_position;
		ivr_method_bind *mb__edit_set_rect;
		ivr_method_bind *mb__edit_set_rotation;
		ivr_method_bind *mb__edit_set_scale;
		ivr_method_bind *mb__edit_set_state;
		ivr_method_bind *mb__edit_use_pivot;
		ivr_method_bind *mb__edit_use_rect;
		ivr_method_bind *mb__edit_use_rotation;
		ivr_method_bind *mb__is_on_top;
		ivr_method_bind *mb__set_on_top;
		ivr_method_bind *mb__toplevel_raise_self;
		ivr_method_bind *mb__update_callback;
		ivr_method_bind *mb_draw_arc;
		ivr_method_bind *mb_draw_char;
		ivr_method_bind *mb_draw_circle;
		ivr_method_bind *mb_draw_colored_polygon;
		ivr_method_bind *mb_draw_line;
		ivr_method_bind *mb_draw_mesh;
		ivr_method_bind *mb_draw_multiline;
		ivr_method_bind *mb_draw_multiline_colors;
		ivr_method_bind *mb_draw_multimesh;
		ivr_method_bind *mb_draw_polygon;
		ivr_method_bind *mb_draw_polyline;
		ivr_method_bind *mb_draw_polyline_colors;
		ivr_method_bind *mb_draw_primitive;
		ivr_method_bind *mb_draw_rect;
		ivr_method_bind *mb_draw_set_transform;
		ivr_method_bind *mb_draw_set_transform_matrix;
		ivr_method_bind *mb_draw_string;
		ivr_method_bind *mb_draw_style_box;
		ivr_method_bind *mb_draw_texture;
		ivr_method_bind *mb_draw_texture_rect;
		ivr_method_bind *mb_draw_texture_rect_region;
		ivr_method_bind *mb_force_update_transform;
		ivr_method_bind *mb_get_canvas;
		ivr_method_bind *mb_get_canvas_item;
		ivr_method_bind *mb_get_canvas_transform;
		ivr_method_bind *mb_get_global_mouse_position;
		ivr_method_bind *mb_get_global_transform;
		ivr_method_bind *mb_get_global_transform_with_canvas;
		ivr_method_bind *mb_get_light_mask;
		ivr_method_bind *mb_get_local_mouse_position;
		ivr_method_bind *mb_get_material;
		ivr_method_bind *mb_get_modulate;
		ivr_method_bind *mb_get_self_modulate;
		ivr_method_bind *mb_get_transform;
		ivr_method_bind *mb_get_use_parent_material;
		ivr_method_bind *mb_get_viewport_rect;
		ivr_method_bind *mb_get_viewport_transform;
		ivr_method_bind *mb_get_world_2d;
		ivr_method_bind *mb_hide;
		ivr_method_bind *mb_is_draw_behind_parent_enabled;
		ivr_method_bind *mb_is_local_transform_notification_enabled;
		ivr_method_bind *mb_is_set_as_toplevel;
		ivr_method_bind *mb_is_transform_notification_enabled;
		ivr_method_bind *mb_is_visible;
		ivr_method_bind *mb_is_visible_in_tree;
		ivr_method_bind *mb_make_canvas_position_local;
		ivr_method_bind *mb_make_input_local;
		ivr_method_bind *mb_set_as_toplevel;
		ivr_method_bind *mb_set_draw_behind_parent;
		ivr_method_bind *mb_set_light_mask;
		ivr_method_bind *mb_set_material;
		ivr_method_bind *mb_set_modulate;
		ivr_method_bind *mb_set_notify_local_transform;
		ivr_method_bind *mb_set_notify_transform;
		ivr_method_bind *mb_set_self_modulate;
		ivr_method_bind *mb_set_use_parent_material;
		ivr_method_bind *mb_set_visible;
		ivr_method_bind *mb_show;
		ivr_method_bind *mb_update;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CanvasItem"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "CanvasItem"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum BlendMode {
		BLEND_MODE_MIX = 0,
		BLEND_MODE_ADD = 1,
		BLEND_MODE_SUB = 2,
		BLEND_MODE_MUL = 3,
		BLEND_MODE_PREMULT_ALPHA = 4,
		BLEND_MODE_DISABLED = 5,
	};

	// constants
	const static int NOTIFICATION_DRAW = 30;
	const static int NOTIFICATION_ENTER_CANVAS = 32;
	const static int NOTIFICATION_EXIT_CANVAS = 33;
	const static int NOTIFICATION_TRANSFORM_CHANGED = 2000;
	const static int NOTIFICATION_VISIBILITY_CHANGED = 31;

	// methods
	void _draw();
	Vector2 _edit_get_pivot() const;
	Vector2 _edit_get_position() const;
	Rect2 _edit_get_rect() const;
	real_t _edit_get_rotation() const;
	Vector2 _edit_get_scale() const;
	Dictionary _edit_get_state() const;
	Transform2D _edit_get_transform() const;
	void _edit_set_pivot(const Vector2 pivot);
	void _edit_set_position(const Vector2 position);
	void _edit_set_rect(const Rect2 rect);
	void _edit_set_rotation(const real_t degrees);
	void _edit_set_scale(const Vector2 scale);
	void _edit_set_state(const Dictionary state);
	bool _edit_use_pivot() const;
	bool _edit_use_rect() const;
	bool _edit_use_rotation() const;
	bool _is_on_top() const;
	void _set_on_top(const bool on_top);
	void _toplevel_raise_self();
	void _update_callback();
	void draw_arc(const Vector2 center, const real_t radius, const real_t start_angle, const real_t end_angle, const int64_t point_count, const Color color, const real_t width = 1, const bool antialiased = false);
	real_t draw_char(const Font *font, const Vector2 position, const String _char, const String next, const Color modulate = Color(1,1,1,1));
	void draw_circle(const Vector2 position, const real_t radius, const Color color);
	void draw_colored_polygon(const PoolVector2Array points, const Color color, const PoolVector2Array uvs = PoolVector2Array(), const Texture *texture = nullptr, const Texture *normal_map = nullptr, const bool antialiased = false);
	void draw_line(const Vector2 from, const Vector2 to, const Color color, const real_t width = 1, const bool antialiased = false);
	void draw_mesh(const Mesh *mesh, const Texture *texture, const Texture *normal_map = nullptr, const Transform2D transform = Transform2D(), const Color modulate = Color(1,1,1,1));
	void draw_multiline(const PoolVector2Array points, const Color color, const real_t width = 1, const bool antialiased = false);
	void draw_multiline_colors(const PoolVector2Array points, const PoolColorArray colors, const real_t width = 1, const bool antialiased = false);
	void draw_multimesh(const MultiMesh *multimesh, const Texture *texture, const Texture *normal_map = nullptr);
	void draw_polygon(const PoolVector2Array points, const PoolColorArray colors, const PoolVector2Array uvs = PoolVector2Array(), const Texture *texture = nullptr, const Texture *normal_map = nullptr, const bool antialiased = false);
	void draw_polyline(const PoolVector2Array points, const Color color, const real_t width = 1, const bool antialiased = false);
	void draw_polyline_colors(const PoolVector2Array points, const PoolColorArray colors, const real_t width = 1, const bool antialiased = false);
	void draw_primitive(const PoolVector2Array points, const PoolColorArray colors, const PoolVector2Array uvs, const Texture *texture = nullptr, const real_t width = 1, const Texture *normal_map = nullptr);
	void draw_rect(const Rect2 rect, const Color color, const bool filled = true, const real_t width = 1, const bool antialiased = false);
	void draw_set_transform(const Vector2 position, const real_t rotation, const Vector2 scale);
	void draw_set_transform_matrix(const Transform2D xform);
	void draw_string(const Font *font, const Vector2 position, const String text, const Color modulate = Color(1,1,1,1), const int64_t clip_w = -1);
	void draw_style_box(const StyleBox *style_box, const Rect2 rect);
	void draw_texture(const Texture *texture, const Vector2 position, const Color modulate = Color(1,1,1,1), const Texture *normal_map = nullptr);
	void draw_texture_rect(const Texture *texture, const Rect2 rect, const bool tile, const Color modulate = Color(1,1,1,1), const bool transpose = false, const Texture *normal_map = nullptr);
	void draw_texture_rect_region(const Texture *texture, const Rect2 rect, const Rect2 src_rect, const Color modulate = Color(1,1,1,1), const bool transpose = false, const Texture *normal_map = nullptr, const bool clip_uv = true);
	void force_update_transform();
	RID get_canvas() const;
	RID get_canvas_item() const;
	Transform2D get_canvas_transform() const;
	Vector2 get_global_mouse_position() const;
	Transform2D get_global_transform() const;
	Transform2D get_global_transform_with_canvas() const;
	int64_t get_light_mask() const;
	Vector2 get_local_mouse_position() const;
	Material *get_material() const;
	Color get_modulate() const;
	Color get_self_modulate() const;
	Transform2D get_transform() const;
	bool get_use_parent_material() const;
	Rect2 get_viewport_rect() const;
	Transform2D get_viewport_transform() const;
	World2D *get_world_2d() const;
	void hide();
	bool is_draw_behind_parent_enabled() const;
	bool is_local_transform_notification_enabled() const;
	bool is_set_as_toplevel() const;
	bool is_transform_notification_enabled() const;
	bool is_visible() const;
	bool is_visible_in_tree() const;
	Vector2 make_canvas_position_local(const Vector2 screen_point) const;
	InputEvent *make_input_local(const InputEvent *event) const;
	void set_as_toplevel(const bool enable);
	void set_draw_behind_parent(const bool enable);
	void set_light_mask(const int64_t light_mask);
	void set_material(const Material *material);
	void set_modulate(const Color modulate);
	void set_notify_local_transform(const bool enable);
	void set_notify_transform(const bool enable);
	void set_self_modulate(const Color self_modulate);
	void set_use_parent_material(const bool enable);
	void set_visible(const bool visible);
	void show();
	void update();

};

}

#endif