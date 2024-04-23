/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_VECTOR2_H
#define IVR_VECTOR2_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_VECTOR2_SIZE 8

#ifndef IVR_CORE_API_IVR_VECTOR2_TYPE_DEFINED
#define IVR_CORE_API_IVR_VECTOR2_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_VECTOR2_SIZE];
} ivr_vector2;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/native.h>

#ifdef __cplusplus
extern "C" {
#endif

void IVRAPI ivr_vector2_new(ivr_vector2 *r_dest, const ivr_real p_x, const ivr_real p_y);

ivr_string IVRAPI ivr_vector2_as_string(const ivr_vector2 *p_self);

ivr_vector2 IVRAPI ivr_vector2_normalized(const ivr_vector2 *p_self);

ivr_real IVRAPI ivr_vector2_length(const ivr_vector2 *p_self);

ivr_real IVRAPI ivr_vector2_angle(const ivr_vector2 *p_self);

ivr_real IVRAPI ivr_vector2_length_squared(const ivr_vector2 *p_self);

ivr_bool IVRAPI ivr_vector2_is_normalized(const ivr_vector2 *p_self);

ivr_vector2 IVRAPI ivr_vector2_direction_to(const ivr_vector2 *p_self, const ivr_vector2 *p_b);

ivr_real IVRAPI ivr_vector2_distance_to(const ivr_vector2 *p_self, const ivr_vector2 *p_to);

ivr_real IVRAPI ivr_vector2_distance_squared_to(const ivr_vector2 *p_self, const ivr_vector2 *p_to);

ivr_real IVRAPI ivr_vector2_angle_to(const ivr_vector2 *p_self, const ivr_vector2 *p_to);

ivr_real IVRAPI ivr_vector2_angle_to_point(const ivr_vector2 *p_self, const ivr_vector2 *p_to);

ivr_vector2 IVRAPI ivr_vector2_linear_interpolate(const ivr_vector2 *p_self, const ivr_vector2 *p_b, const ivr_real p_t);

ivr_vector2 IVRAPI ivr_vector2_cubic_interpolate(const ivr_vector2 *p_self, const ivr_vector2 *p_b, const ivr_vector2 *p_pre_a, const ivr_vector2 *p_post_b, const ivr_real p_t);

ivr_vector2 IVRAPI ivr_vector2_move_toward(const ivr_vector2 *p_self, const ivr_vector2 *p_to, const ivr_real p_delta);

ivr_vector2 IVRAPI ivr_vector2_rotated(const ivr_vector2 *p_self, const ivr_real p_phi);

ivr_vector2 IVRAPI ivr_vector2_tangent(const ivr_vector2 *p_self);

ivr_vector2 IVRAPI ivr_vector2_floor(const ivr_vector2 *p_self);

ivr_vector2 IVRAPI ivr_vector2_snapped(const ivr_vector2 *p_self, const ivr_vector2 *p_by);

ivr_real IVRAPI ivr_vector2_aspect(const ivr_vector2 *p_self);

ivr_real IVRAPI ivr_vector2_dot(const ivr_vector2 *p_self, const ivr_vector2 *p_with);

ivr_vector2 IVRAPI ivr_vector2_slide(const ivr_vector2 *p_self, const ivr_vector2 *p_n);

ivr_vector2 IVRAPI ivr_vector2_bounce(const ivr_vector2 *p_self, const ivr_vector2 *p_n);

ivr_vector2 IVRAPI ivr_vector2_reflect(const ivr_vector2 *p_self, const ivr_vector2 *p_n);

ivr_vector2 IVRAPI ivr_vector2_abs(const ivr_vector2 *p_self);

ivr_vector2 IVRAPI ivr_vector2_clamped(const ivr_vector2 *p_self, const ivr_real p_length);

ivr_vector2 IVRAPI ivr_vector2_operator_add(const ivr_vector2 *p_self, const ivr_vector2 *p_b);

ivr_vector2 IVRAPI ivr_vector2_operator_subtract(const ivr_vector2 *p_self, const ivr_vector2 *p_b);

ivr_vector2 IVRAPI ivr_vector2_operator_multiply_vector(const ivr_vector2 *p_self, const ivr_vector2 *p_b);

ivr_vector2 IVRAPI ivr_vector2_operator_multiply_scalar(const ivr_vector2 *p_self, const ivr_real p_b);

ivr_vector2 IVRAPI ivr_vector2_operator_divide_vector(const ivr_vector2 *p_self, const ivr_vector2 *p_b);

ivr_vector2 IVRAPI ivr_vector2_operator_divide_scalar(const ivr_vector2 *p_self, const ivr_real p_b);

ivr_bool IVRAPI ivr_vector2_operator_equal(const ivr_vector2 *p_self, const ivr_vector2 *p_b);

ivr_bool IVRAPI ivr_vector2_operator_less(const ivr_vector2 *p_self, const ivr_vector2 *p_b);

ivr_vector2 IVRAPI ivr_vector2_operator_neg(const ivr_vector2 *p_self);

void IVRAPI ivr_vector2_set_x(ivr_vector2 *p_self, const ivr_real p_x);

void IVRAPI ivr_vector2_set_y(ivr_vector2 *p_self, const ivr_real p_y);

ivr_real IVRAPI ivr_vector2_get_x(const ivr_vector2 *p_self);

ivr_real IVRAPI ivr_vector2_get_y(const ivr_vector2 *p_self);

#ifdef __cplusplus
}
#endif

#endif //IVR_VECTOR2_H
