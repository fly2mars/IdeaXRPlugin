/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_VECTOR3_H
#define IVR_VECTOR3_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_VECTOR3_SIZE 12

#ifndef IVR_CORE_API_IVR_VECTOR3_TYPE_DEFINED
#define IVR_CORE_API_IVR_VECTOR3_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_VECTOR3_SIZE];
} ivr_vector3;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/basis.h>
#include <native/native.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
	IVR_VECTOR3_AXIS_X,
	IVR_VECTOR3_AXIS_Y,
	IVR_VECTOR3_AXIS_Z,
} ivr_vector3_axis;

void IVRAPI ivr_vector3_new(ivr_vector3 *r_dest, const ivr_real p_x, const ivr_real p_y, const ivr_real p_z);

ivr_string IVRAPI ivr_vector3_as_string(const ivr_vector3 *p_self);

ivr_int IVRAPI ivr_vector3_min_axis(const ivr_vector3 *p_self);

ivr_int IVRAPI ivr_vector3_max_axis(const ivr_vector3 *p_self);

ivr_real IVRAPI ivr_vector3_length(const ivr_vector3 *p_self);

ivr_real IVRAPI ivr_vector3_length_squared(const ivr_vector3 *p_self);

ivr_bool IVRAPI ivr_vector3_is_normalized(const ivr_vector3 *p_self);

ivr_vector3 IVRAPI ivr_vector3_normalized(const ivr_vector3 *p_self);

ivr_vector3 IVRAPI ivr_vector3_inverse(const ivr_vector3 *p_self);

ivr_vector3 IVRAPI ivr_vector3_snapped(const ivr_vector3 *p_self, const ivr_vector3 *p_by);

ivr_vector3 IVRAPI ivr_vector3_rotated(const ivr_vector3 *p_self, const ivr_vector3 *p_axis, const ivr_real p_phi);

ivr_vector3 IVRAPI ivr_vector3_linear_interpolate(const ivr_vector3 *p_self, const ivr_vector3 *p_b, const ivr_real p_t);

ivr_vector3 IVRAPI ivr_vector3_cubic_interpolate(const ivr_vector3 *p_self, const ivr_vector3 *p_b, const ivr_vector3 *p_pre_a, const ivr_vector3 *p_post_b, const ivr_real p_t);

ivr_vector3 IVRAPI ivr_vector3_move_toward(const ivr_vector3 *p_self, const ivr_vector3 *p_to, const ivr_real p_delta);

ivr_real IVRAPI ivr_vector3_dot(const ivr_vector3 *p_self, const ivr_vector3 *p_b);

ivr_vector3 IVRAPI ivr_vector3_cross(const ivr_vector3 *p_self, const ivr_vector3 *p_b);

ivr_basis IVRAPI ivr_vector3_outer(const ivr_vector3 *p_self, const ivr_vector3 *p_b);

ivr_basis IVRAPI ivr_vector3_to_diagonal_matrix(const ivr_vector3 *p_self);

ivr_vector3 IVRAPI ivr_vector3_abs(const ivr_vector3 *p_self);

ivr_vector3 IVRAPI ivr_vector3_floor(const ivr_vector3 *p_self);

ivr_vector3 IVRAPI ivr_vector3_ceil(const ivr_vector3 *p_self);

ivr_vector3 IVRAPI ivr_vector3_direction_to(const ivr_vector3 *p_self, const ivr_vector3 *p_b);

ivr_real IVRAPI ivr_vector3_distance_to(const ivr_vector3 *p_self, const ivr_vector3 *p_b);

ivr_real IVRAPI ivr_vector3_distance_squared_to(const ivr_vector3 *p_self, const ivr_vector3 *p_b);

ivr_real IVRAPI ivr_vector3_angle_to(const ivr_vector3 *p_self, const ivr_vector3 *p_to);

ivr_vector3 IVRAPI ivr_vector3_slide(const ivr_vector3 *p_self, const ivr_vector3 *p_n);

ivr_vector3 IVRAPI ivr_vector3_bounce(const ivr_vector3 *p_self, const ivr_vector3 *p_n);

ivr_vector3 IVRAPI ivr_vector3_reflect(const ivr_vector3 *p_self, const ivr_vector3 *p_n);

ivr_vector3 IVRAPI ivr_vector3_operator_add(const ivr_vector3 *p_self, const ivr_vector3 *p_b);

ivr_vector3 IVRAPI ivr_vector3_operator_subtract(const ivr_vector3 *p_self, const ivr_vector3 *p_b);

ivr_vector3 IVRAPI ivr_vector3_operator_multiply_vector(const ivr_vector3 *p_self, const ivr_vector3 *p_b);

ivr_vector3 IVRAPI ivr_vector3_operator_multiply_scalar(const ivr_vector3 *p_self, const ivr_real p_b);

ivr_vector3 IVRAPI ivr_vector3_operator_divide_vector(const ivr_vector3 *p_self, const ivr_vector3 *p_b);

ivr_vector3 IVRAPI ivr_vector3_operator_divide_scalar(const ivr_vector3 *p_self, const ivr_real p_b);

ivr_bool IVRAPI ivr_vector3_operator_equal(const ivr_vector3 *p_self, const ivr_vector3 *p_b);

ivr_bool IVRAPI ivr_vector3_operator_less(const ivr_vector3 *p_self, const ivr_vector3 *p_b);

ivr_vector3 IVRAPI ivr_vector3_operator_neg(const ivr_vector3 *p_self);

void IVRAPI ivr_vector3_set_axis(ivr_vector3 *p_self, const ivr_vector3_axis p_axis, const ivr_real p_val);

ivr_real IVRAPI ivr_vector3_get_axis(const ivr_vector3 *p_self, const ivr_vector3_axis p_axis);

#ifdef __cplusplus
}
#endif

#endif // IVR_VECTOR3_H
