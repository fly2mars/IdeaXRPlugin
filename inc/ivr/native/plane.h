/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/

#ifndef IVR_PLANE_H
#define IVR_PLANE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_PLANE_SIZE 16

#ifndef IVR_CORE_API_IVR_PLANE_TYPE_DEFINED
#define IVR_CORE_API_IVR_PLANE_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_PLANE_SIZE];
} ivr_plane;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/native.h>
#include <native/vector3.h>

#ifdef __cplusplus
extern "C" {
#endif

void IVRAPI ivr_plane_new_with_reals(ivr_plane *r_dest, const ivr_real p_a, const ivr_real p_b, const ivr_real p_c, const ivr_real p_d);
void IVRAPI ivr_plane_new_with_vectors(ivr_plane *r_dest, const ivr_vector3 *p_v1, const ivr_vector3 *p_v2, const ivr_vector3 *p_v3);
void IVRAPI ivr_plane_new_with_normal(ivr_plane *r_dest, const ivr_vector3 *p_normal, const ivr_real p_d);

ivr_string IVRAPI ivr_plane_as_string(const ivr_plane *p_self);

ivr_plane IVRAPI ivr_plane_normalized(const ivr_plane *p_self);

ivr_vector3 IVRAPI ivr_plane_center(const ivr_plane *p_self);

ivr_vector3 IVRAPI ivr_plane_get_any_point(const ivr_plane *p_self);

ivr_bool IVRAPI ivr_plane_is_point_over(const ivr_plane *p_self, const ivr_vector3 *p_point);

ivr_real IVRAPI ivr_plane_distance_to(const ivr_plane *p_self, const ivr_vector3 *p_point);

ivr_bool IVRAPI ivr_plane_has_point(const ivr_plane *p_self, const ivr_vector3 *p_point, const ivr_real p_epsilon);

ivr_vector3 IVRAPI ivr_plane_project(const ivr_plane *p_self, const ivr_vector3 *p_point);

ivr_bool IVRAPI ivr_plane_intersect_3(const ivr_plane *p_self, ivr_vector3 *r_dest, const ivr_plane *p_b, const ivr_plane *p_c);

ivr_bool IVRAPI ivr_plane_intersects_ray(const ivr_plane *p_self, ivr_vector3 *r_dest, const ivr_vector3 *p_from, const ivr_vector3 *p_dir);

ivr_bool IVRAPI ivr_plane_intersects_segment(const ivr_plane *p_self, ivr_vector3 *r_dest, const ivr_vector3 *p_begin, const ivr_vector3 *p_end);

ivr_plane IVRAPI ivr_plane_operator_neg(const ivr_plane *p_self);

ivr_bool IVRAPI ivr_plane_operator_equal(const ivr_plane *p_self, const ivr_plane *p_b);

void IVRAPI ivr_plane_set_normal(ivr_plane *p_self, const ivr_vector3 *p_normal);

ivr_vector3 IVRAPI ivr_plane_get_normal(const ivr_plane *p_self);

ivr_real IVRAPI ivr_plane_get_d(const ivr_plane *p_self);

void IVRAPI ivr_plane_set_d(ivr_plane *p_self, const ivr_real p_d);

#ifdef __cplusplus
}
#endif

#endif // IVR_PLANE_H
