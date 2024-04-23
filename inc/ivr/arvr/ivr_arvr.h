/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/

#ifndef IVR_NATIVEARVR_H
#define IVR_NATIVEARVR_H

#include <native/native.h>

#ifdef __cplusplus
extern "C" {
#endif

// For future versions of the API we should only add new functions at the end of the structure and use the
// version info to detect whether a call is available

// Use these to populate version in your plugin
#define IVR_API_MAJOR 1
#define IVR_API_MINOR 2

typedef struct {
	ivr_native_api_version version; /* version of our API */
	void *(*constructor)(ivr_object *);
	void (*destructor)(void *);
	ivr_string (*get_name)(const void *);
	ivr_int (*get_capabilities)(const void *);
	ivr_bool (*get_anchor_detection_is_enabled)(const void *);
	void (*set_anchor_detection_is_enabled)(void *, ivr_bool);
	ivr_bool (*is_stereo)(const void *);
	ivr_bool (*is_initialized)(const void *);
	ivr_bool (*initialize)(void *);
	void (*uninitialize)(void *);
	ivr_vector2 (*get_render_targetsize)(const void *);
	ivr_transform (*get_transform_for_eye)(void *, ivr_int, ivr_transform *);
	void (*fill_projection_for_eye)(void *, ivr_real *, ivr_int, ivr_real, ivr_real, ivr_real);
	void (*commit_for_eye)(void *, ivr_int, ivr_rid *, ivr_rect2 *);
	void (*process)(void *);
	// only in 1.1 onwards
	ivr_int (*get_external_texture_for_eye)(void *, ivr_int);
	void (*notification)(void *, ivr_int);
	ivr_int (*get_camera_feed_id)(void *);
	// only in 1.2 onwards
	ivr_int (*get_external_depth_for_eye)(void *, ivr_int);
} ivr_arvr_interface_ivrnative;

void IVRAPI ivr_arvr_register_interface(const ivr_arvr_interface_ivrnative *p_interface);

// helper functions to access ARVRServer data
ivr_real IVRAPI ivr_arvr_get_worldscale();
ivr_transform IVRAPI ivr_arvr_get_reference_frame();

// helper functions for rendering
void IVRAPI ivr_arvr_blit(ivr_int p_eye, ivr_rid *p_render_target, ivr_rect2 *p_rect);
ivr_int IVRAPI ivr_arvr_get_texid(ivr_rid *p_render_target);

// helper functions for updating ARVR controllers
ivr_int IVRAPI ivr_arvr_add_controller(char *p_device_name, ivr_int p_hand, ivr_bool p_tracks_orientation, ivr_bool p_tracks_position);
void IVRAPI ivr_arvr_remove_controller(ivr_int p_controller_id);
void IVRAPI ivr_arvr_set_controller_transform(ivr_int p_controller_id, ivr_transform *p_transform, ivr_bool p_tracks_orientation, ivr_bool p_tracks_position);
void IVRAPI ivr_arvr_set_controller_button(ivr_int p_controller_id, ivr_int p_button, ivr_bool p_is_pressed);
void IVRAPI ivr_arvr_set_controller_axis(ivr_int p_controller_id, ivr_int p_axis, ivr_real p_value, ivr_bool p_can_be_negative);
ivr_real IVRAPI ivr_arvr_get_controller_rumble(ivr_int p_controller_id);

// ARVR 1.2 functions
void IVRAPI ivr_arvr_set_interface(ivr_object *p_arvr_interface, const ivr_arvr_interface_ivrnative *p_ivr_interface);
ivr_int IVRAPI ivr_arvr_get_depthid(ivr_rid *p_render_target);

// helper functions for updating ARVR trackers
ivr_int IVRAPI ivr_arvr_add_tracker(char *p_device_name, const char* device_id_str, ivr_bool p_tracks_orientation, ivr_bool p_tracks_position);
void IVRAPI ivr_arvr_remove_tracker(ivr_int p_tracker_id);
void IVRAPI ivr_arvr_set_tracker_transform(ivr_int p_tracker_id, ivr_transform *p_transform, ivr_bool p_tracks_orientation, ivr_bool p_tracks_position);
void IVRAPI ivr_arvr_set_tracker_transform_with_velocity(ivr_int p_tracker_id, ivr_transform *p_transform, ivr_vector3 * m_linear_velocity, ivr_vector3 *m_angular_velocity, ivr_bool p_tracks_orientation, ivr_bool p_tracks_position);
void IVRAPI ivr_arvr_set_tracker_transform_with_velocity_with_press(ivr_int p_tracker_id, ivr_transform *p_transform, ivr_vector3 * m_linear_velocity, ivr_vector3 *m_angular_velocity, ivr_bool p_tracks_orientation, ivr_bool p_tracks_position, ivr_real p_press_value);
void IVRAPI ivr_arvr_set_tracker_transform_with_velocity_with_press_with_tracktype(ivr_int p_tracker_id, ivr_transform *p_transform, ivr_vector3 * m_linear_velocity, ivr_vector3 *m_angular_velocity, ivr_bool p_tracks_orientation, ivr_bool p_tracks_position, ivr_real p_press_value, ivr_int p_tracker_type);
#ifdef __cplusplus
}
#endif

#endif /* !IVR_NATIVEARVR_H */
