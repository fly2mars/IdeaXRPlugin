/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_QUAT_H
#define IVR_QUAT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_QUAT_SIZE 16

#ifndef IVR_CORE_API_IVR_QUAT_TYPE_DEFINED
#define IVR_CORE_API_IVR_QUAT_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_QUAT_SIZE];
} ivr_quat;
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

void IVRAPI ivr_quat_new(ivr_quat *r_dest, const ivr_real p_x, const ivr_real p_y, const ivr_real p_z, const ivr_real p_w);
void IVRAPI ivr_quat_new_with_axis_angle(ivr_quat *r_dest, const ivr_vector3 *p_axis, const ivr_real p_angle);
void IVRAPI ivr_quat_new_with_basis(ivr_quat *r_dest, const ivr_basis *p_basis);
void IVRAPI ivr_quat_new_with_euler(ivr_quat *r_dest, const ivr_vector3 *p_euler);

ivr_real IVRAPI ivr_quat_get_x(const ivr_quat *p_self);
void IVRAPI ivr_quat_set_x(ivr_quat *p_self, const ivr_real val);

ivr_real IVRAPI ivr_quat_get_y(const ivr_quat *p_self);
void IVRAPI ivr_quat_set_y(ivr_quat *p_self, const ivr_real val);

ivr_real IVRAPI ivr_quat_get_z(const ivr_quat *p_self);
void IVRAPI ivr_quat_set_z(ivr_quat *p_self, const ivr_real val);

ivr_real IVRAPI ivr_quat_get_w(const ivr_quat *p_self);
void IVRAPI ivr_quat_set_w(ivr_quat *p_self, const ivr_real val);

ivr_string IVRAPI ivr_quat_as_string(const ivr_quat *p_self);

ivr_real IVRAPI ivr_quat_length(const ivr_quat *p_self);

ivr_real IVRAPI ivr_quat_length_squared(const ivr_quat *p_self);

ivr_quat IVRAPI ivr_quat_normalized(const ivr_quat *p_self);

ivr_bool IVRAPI ivr_quat_is_normalized(const ivr_quat *p_self);

ivr_quat IVRAPI ivr_quat_inverse(const ivr_quat *p_self);

ivr_real IVRAPI ivr_quat_dot(const ivr_quat *p_self, const ivr_quat *p_b);

ivr_vector3 IVRAPI ivr_quat_xform(const ivr_quat *p_self, const ivr_vector3 *p_v);

ivr_quat IVRAPI ivr_quat_slerp(const ivr_quat *p_self, const ivr_quat *p_b, const ivr_real p_t);

ivr_quat IVRAPI ivr_quat_slerpni(const ivr_quat *p_self, const ivr_quat *p_b, const ivr_real p_t);

ivr_quat IVRAPI ivr_quat_cubic_slerp(const ivr_quat *p_self, const ivr_quat *p_b, const ivr_quat *p_pre_a, const ivr_quat *p_post_b, const ivr_real p_t);

ivr_quat IVRAPI ivr_quat_operator_multiply(const ivr_quat *p_self, const ivr_real p_b);

ivr_quat IVRAPI ivr_quat_operator_add(const ivr_quat *p_self, const ivr_quat *p_b);

ivr_quat IVRAPI ivr_quat_operator_subtract(const ivr_quat *p_self, const ivr_quat *p_b);

ivr_quat IVRAPI ivr_quat_operator_divide(const ivr_quat *p_self, const ivr_real p_b);

ivr_bool IVRAPI ivr_quat_operator_equal(const ivr_quat *p_self, const ivr_quat *p_b);

ivr_quat IVRAPI ivr_quat_operator_neg(const ivr_quat *p_self);

void IVRAPI ivr_quat_set_axis_angle(ivr_quat *p_self, const ivr_vector3 *p_axis, const ivr_real p_angle);

#ifdef __cplusplus
}
#endif

#endif // IVR_QUAT_H
