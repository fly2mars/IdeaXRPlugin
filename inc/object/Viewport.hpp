#ifndef IVR_CPP_VIEWPORT_HPP
#define IVR_CPP_VIEWPORT_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "Viewport.hpp"

#include "Node.hpp"
namespace ivr {

class InputEvent;
class World;
class World2D;
class Camera;
class Control;
class ViewportTexture;

class Viewport : public Node {
	struct ___method_bindings {
		ivr_method_bind *mb__gui_remove_focus;
		ivr_method_bind *mb__gui_show_tooltip;
		ivr_method_bind *mb__own_world_changed;
		ivr_method_bind *mb__post_gui_grab_click_focus;
		ivr_method_bind *mb__process_picking;
		ivr_method_bind *mb__subwindow_visibility_changed;
		ivr_method_bind *mb__vp_input;
		ivr_method_bind *mb__vp_input_text;
		ivr_method_bind *mb__vp_unhandled_input;
		ivr_method_bind *mb_find_world;
		ivr_method_bind *mb_find_world_2d;
		ivr_method_bind *mb_get_camera;
		ivr_method_bind *mb_get_canvas_transform;
		ivr_method_bind *mb_get_clear_mode;
		ivr_method_bind *mb_get_debug_draw;
		ivr_method_bind *mb_get_final_transform;
		ivr_method_bind *mb_get_global_canvas_transform;
		ivr_method_bind *mb_get_hdr;
		ivr_method_bind *mb_get_keep_3d_linear;
		ivr_method_bind *mb_get_modal_stack_top;
		ivr_method_bind *mb_get_mouse_position;
		ivr_method_bind *mb_get_msaa;
		ivr_method_bind *mb_get_physics_object_picking;
		ivr_method_bind *mb_get_render_info;
		ivr_method_bind *mb_get_shadow_atlas_quadrant_subdiv;
		ivr_method_bind *mb_get_shadow_atlas_size;
		ivr_method_bind *mb_get_size;
		ivr_method_bind *mb_get_size_override;
		ivr_method_bind *mb_get_texture;
		ivr_method_bind *mb_get_update_mode;
		ivr_method_bind *mb_get_usage;
		ivr_method_bind *mb_get_use_debanding;
		ivr_method_bind *mb_get_use_fxaa;
		ivr_method_bind *mb_get_vflip;
		ivr_method_bind *mb_get_viewport_rid;
		ivr_method_bind *mb_get_visible_rect;
		ivr_method_bind *mb_get_world;
		ivr_method_bind *mb_get_world_2d;
		ivr_method_bind *mb_gui_get_drag_data;
		ivr_method_bind *mb_gui_has_modal_stack;
		ivr_method_bind *mb_gui_is_dragging;
		ivr_method_bind *mb_has_transparent_background;
		ivr_method_bind *mb_input;
		ivr_method_bind *mb_is_3d_disabled;
		ivr_method_bind *mb_is_audio_listener;
		ivr_method_bind *mb_is_audio_listener_2d;
		ivr_method_bind *mb_is_handling_input_locally;
		ivr_method_bind *mb_is_input_disabled;
		ivr_method_bind *mb_is_input_handled;
		ivr_method_bind *mb_is_size_override_enabled;
		ivr_method_bind *mb_is_size_override_stretch_enabled;
		ivr_method_bind *mb_is_snap_controls_to_pixels_enabled;
		ivr_method_bind *mb_is_using_own_world;
		ivr_method_bind *mb_is_using_render_direct_to_screen;
		ivr_method_bind *mb_set_as_audio_listener;
		ivr_method_bind *mb_set_as_audio_listener_2d;
		ivr_method_bind *mb_set_attach_to_screen_rect;
		ivr_method_bind *mb_set_canvas_transform;
		ivr_method_bind *mb_set_clear_mode;
		ivr_method_bind *mb_set_debug_draw;
		ivr_method_bind *mb_set_disable_3d;
		ivr_method_bind *mb_set_disable_input;
		ivr_method_bind *mb_set_global_canvas_transform;
		ivr_method_bind *mb_set_handle_input_locally;
		ivr_method_bind *mb_set_hdr;
		ivr_method_bind *mb_set_input_as_handled;
		ivr_method_bind *mb_set_keep_3d_linear;
		ivr_method_bind *mb_set_msaa;
		ivr_method_bind *mb_set_physics_object_picking;
		ivr_method_bind *mb_set_shadow_atlas_quadrant_subdiv;
		ivr_method_bind *mb_set_shadow_atlas_size;
		ivr_method_bind *mb_set_size;
		ivr_method_bind *mb_set_size_override;
		ivr_method_bind *mb_set_size_override_stretch;
		ivr_method_bind *mb_set_snap_controls_to_pixels;
		ivr_method_bind *mb_set_transparent_background;
		ivr_method_bind *mb_set_update_mode;
		ivr_method_bind *mb_set_usage;
		ivr_method_bind *mb_set_use_arvr;
		ivr_method_bind *mb_set_use_debanding;
		ivr_method_bind *mb_set_use_fxaa;
		ivr_method_bind *mb_set_use_own_world;
		ivr_method_bind *mb_set_use_render_direct_to_screen;
		ivr_method_bind *mb_set_vflip;
		ivr_method_bind *mb_set_world;
		ivr_method_bind *mb_set_world_2d;
		ivr_method_bind *mb_unhandled_input;
		ivr_method_bind *mb_update_worlds;
		ivr_method_bind *mb_use_arvr;
		ivr_method_bind *mb_warp_mouse;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Viewport"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "Viewport"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ClearMode {
		CLEAR_MODE_ALWAYS = 0,
		CLEAR_MODE_NEVER = 1,
		CLEAR_MODE_ONLY_NEXT_FRAME = 2,
	};
	enum RenderInfo {
		RENDER_INFO_OBJECTS_IN_FRAME = 0,
		RENDER_INFO_VERTICES_IN_FRAME = 1,
		RENDER_INFO_MATERIAL_CHANGES_IN_FRAME = 3,
		RENDER_INFO_SHADER_CHANGES_IN_FRAME = 4,
		RENDER_INFO_SURFACE_CHANGES_IN_FRAME = 5,
		RENDER_INFO_DRAW_CALLS_IN_FRAME = 6,
		RENDER_INFO_2D_ITEMS_IN_FRAME = 7,
		RENDER_INFO_2D_DRAW_CALLS_IN_FRAME = 8,
		RENDER_INFO_MAX = 9,
	};
	enum Usage {
		USAGE_2D = 0,
		USAGE_2D_NO_SAMPLING = 1,
		USAGE_3D = 2,
		USAGE_3D_NO_EFFECTS = 3,
	};
	enum DebugDraw {
		DEBUG_DRAW_DISABLED = 0,
		DEBUG_DRAW_UNSHADED = 1,
		DEBUG_DRAW_OVERDRAW = 2,
		DEBUG_DRAW_WIREFRAME = 3,
	};
	enum ShadowAtlasQuadrantSubdiv {
		SHADOW_ATLAS_QUADRANT_SUBDIV_DISABLED = 0,
		SHADOW_ATLAS_QUADRANT_SUBDIV_1 = 1,
		SHADOW_ATLAS_QUADRANT_SUBDIV_4 = 2,
		SHADOW_ATLAS_QUADRANT_SUBDIV_16 = 3,
		SHADOW_ATLAS_QUADRANT_SUBDIV_64 = 4,
		SHADOW_ATLAS_QUADRANT_SUBDIV_256 = 5,
		SHADOW_ATLAS_QUADRANT_SUBDIV_1024 = 6,
		SHADOW_ATLAS_QUADRANT_SUBDIV_MAX = 7,
	};
	enum UpdateMode {
		UPDATE_DISABLED = 0,
		UPDATE_ONCE = 1,
		UPDATE_WHEN_VISIBLE = 2,
		UPDATE_ALWAYS = 3,
	};
	enum MSAA {
		MSAA_DISABLED = 0,
		MSAA_2X = 1,
		MSAA_4X = 2,
		MSAA_8X = 3,
		MSAA_16X = 4,
	};

	// constants


	static Viewport *_new();

	// methods
	void _gui_remove_focus();
	void _gui_show_tooltip();
	void _own_world_changed();
	void _post_gui_grab_click_focus();
	void _process_picking(const bool ignore_paused);
	void _subwindow_visibility_changed();
	void _vp_input(const Ref<InputEvent> arg0);
	void _vp_input_text(const String text);
	void _vp_unhandled_input(const Ref<InputEvent> arg0);
	World *find_world() const;
	World2D *find_world_2d() const;
	Camera *get_camera() const;
	Transform2D get_canvas_transform() const;
	Viewport::ClearMode get_clear_mode() const;
	Viewport::DebugDraw get_debug_draw() const;
	Transform2D get_final_transform() const;
	Transform2D get_global_canvas_transform() const;
	bool get_hdr() const;
	bool get_keep_3d_linear() const;
	Control *get_modal_stack_top() const;
	Vector2 get_mouse_position() const;
	Viewport::MSAA get_msaa() const;
	bool get_physics_object_picking();
	int64_t get_render_info(const int64_t info);
	Viewport::ShadowAtlasQuadrantSubdiv get_shadow_atlas_quadrant_subdiv(const int64_t quadrant) const;
	int64_t get_shadow_atlas_size() const;
	Vector2 get_size() const;
	Vector2 get_size_override() const;
	ViewportTexture *get_texture() const;
	Viewport::UpdateMode get_update_mode() const;
	Viewport::Usage get_usage() const;
	bool get_use_debanding() const;
	bool get_use_fxaa() const;
	bool get_vflip() const;
	RID get_viewport_rid() const;
	Rect2 get_visible_rect() const;
	World *get_world() const;
	World2D *get_world_2d() const;
	Variant gui_get_drag_data() const;
	bool gui_has_modal_stack() const;
	bool gui_is_dragging() const;
	bool has_transparent_background() const;
	void input(const Ref<InputEvent> local_event);
	bool is_3d_disabled() const;
	bool is_audio_listener() const;
	bool is_audio_listener_2d() const;
	bool is_handling_input_locally() const;
	bool is_input_disabled() const;
	bool is_input_handled() const;
	bool is_size_override_enabled() const;
	bool is_size_override_stretch_enabled() const;
	bool is_snap_controls_to_pixels_enabled() const;
	bool is_using_own_world() const;
	bool is_using_render_direct_to_screen() const;
	void set_as_audio_listener(const bool enable);
	void set_as_audio_listener_2d(const bool enable);
	void set_attach_to_screen_rect(const Rect2 rect);
	void set_canvas_transform(const Transform2D xform);
	void set_clear_mode(const int64_t mode);
	void set_debug_draw(const int64_t debug_draw);
	void set_disable_3d(const bool disable);
	void set_disable_input(const bool disable);
	void set_global_canvas_transform(const Transform2D xform);
	void set_handle_input_locally(const bool enable);
	void set_hdr(const bool enable);
	void set_input_as_handled();
	void set_keep_3d_linear(const bool keep_3d_linear);
	void set_msaa(const int64_t msaa);
	void set_physics_object_picking(const bool enable);
	void set_shadow_atlas_quadrant_subdiv(const int64_t quadrant, const int64_t subdiv);
	void set_shadow_atlas_size(const int64_t size);
	void set_size(const Vector2 size);
	void set_size_override(const bool enable, const Vector2 size = Vector2(-1, -1), const Vector2 margin = Vector2(0, 0));
	void set_size_override_stretch(const bool enabled);
	void set_snap_controls_to_pixels(const bool enabled);
	void set_transparent_background(const bool enable);
	void set_update_mode(const int64_t mode);
	void set_usage(const int64_t usage);
	void set_use_arvr(const bool use);
	void set_use_debanding(const bool enable);
	void set_use_fxaa(const bool enable);
	void set_use_own_world(const bool enable);
	void set_use_render_direct_to_screen(const bool enable);
	void set_vflip(const bool enable);
	void set_world(const World *world);
	void set_world_2d(const World2D *world_2d);
	void unhandled_input(const Ref<InputEvent> local_event);
	void update_worlds();
	bool use_arvr();
	void warp_mouse(const Vector2 to_position);

};

}

#endif