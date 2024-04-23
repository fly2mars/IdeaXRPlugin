/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/

#ifndef IVR_AABB_H
#define IVR_AABB_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_AABB_SIZE 24

#ifndef IVR_CORE_API_IVR_AABB_TYPE_DEFINED
#define IVR_CORE_API_IVR_AABB_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_AABB_SIZE];
} ivr_aabb;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/native.h>
#include <native/plane.h>
#include <native/vector3.h>

#ifdef __cplusplus
extern "C" {
#endif

void IVRAPI ivr_aabb_new(ivr_aabb *r_dest, const ivr_vector3 *p_pos, const ivr_vector3 *p_size);

ivr_vector3 IVRAPI ivr_aabb_get_position(const ivr_aabb *p_self);
void IVRAPI ivr_aabb_set_position(const ivr_aabb *p_self, const ivr_vector3 *p_v);

ivr_vector3 IVRAPI ivr_aabb_get_size(const ivr_aabb *p_self);
void IVRAPI ivr_aabb_set_size(const ivr_aabb *p_self, const ivr_vector3 *p_v);

ivr_string IVRAPI ivr_aabb_as_string(const ivr_aabb *p_self);

ivr_real IVRAPI ivr_aabb_get_area(const ivr_aabb *p_self);

ivr_bool IVRAPI ivr_aabb_has_no_area(const ivr_aabb *p_self);

ivr_bool IVRAPI ivr_aabb_has_no_surface(const ivr_aabb *p_self);

ivr_bool IVRAPI ivr_aabb_intersects(const ivr_aabb *p_self, const ivr_aabb *p_with);

ivr_bool IVRAPI ivr_aabb_encloses(const ivr_aabb *p_self, const ivr_aabb *p_with);

ivr_aabb IVRAPI ivr_aabb_merge(const ivr_aabb *p_self, const ivr_aabb *p_with);

ivr_aabb IVRAPI ivr_aabb_intersection(const ivr_aabb *p_self, const ivr_aabb *p_with);

ivr_bool IVRAPI ivr_aabb_intersects_plane(const ivr_aabb *p_self, const ivr_plane *p_plane);

ivr_bool IVRAPI ivr_aabb_intersects_segment(const ivr_aabb *p_self, const ivr_vector3 *p_from, const ivr_vector3 *p_to);

ivr_bool IVRAPI ivr_aabb_has_point(const ivr_aabb *p_self, const ivr_vector3 *p_point);

ivr_vector3 IVRAPI ivr_aabb_get_support(const ivr_aabb *p_self, const ivr_vector3 *p_dir);

ivr_vector3 IVRAPI ivr_aabb_get_longest_axis(const ivr_aabb *p_self);

ivr_int IVRAPI ivr_aabb_get_longest_axis_index(const ivr_aabb *p_self);

ivr_real IVRAPI ivr_aabb_get_longest_axis_size(const ivr_aabb *p_self);

ivr_vector3 IVRAPI ivr_aabb_get_shortest_axis(const ivr_aabb *p_self);

ivr_int IVRAPI ivr_aabb_get_shortest_axis_index(const ivr_aabb *p_self);

ivr_real IVRAPI ivr_aabb_get_shortest_axis_size(const ivr_aabb *p_self);

ivr_aabb IVRAPI ivr_aabb_expand(const ivr_aabb *p_self, const ivr_vector3 *p_to_point);

ivr_aabb IVRAPI ivr_aabb_grow(const ivr_aabb *p_self, const ivr_real p_by);

ivr_vector3 IVRAPI ivr_aabb_get_endpoint(const ivr_aabb *p_self, const ivr_int p_idx);

ivr_bool IVRAPI ivr_aabb_operator_equal(const ivr_aabb *p_self, const ivr_aabb *p_b);

#ifdef __cplusplus
}
#endif

#endif // IVR_AABB_H
