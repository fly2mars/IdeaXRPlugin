/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/

#ifndef IVR_BASIS_H
#define IVR_BASIS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_BASIS_SIZE 36

#ifndef IVR_CORE_API_IVR_BASIS_TYPE_DEFINED
#define IVR_CORE_API_IVR_BASIS_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_BASIS_SIZE];
} ivr_basis;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/native.h>
#include <native/quat.h>
#include <native/vector3.h>

#ifdef __cplusplus
extern "C" {
#endif

void IVRAPI ivr_basis_new_with_rows(ivr_basis *r_dest, const ivr_vector3 *p_x_axis, const ivr_vector3 *p_y_axis, const ivr_vector3 *p_z_axis);
void IVRAPI ivr_basis_new_with_axis_and_angle(ivr_basis *r_dest, const ivr_vector3 *p_axis, const ivr_real p_phi);
void IVRAPI ivr_basis_new_with_euler(ivr_basis *r_dest, const ivr_vector3 *p_euler);
void IVRAPI ivr_basis_new_with_euler_quat(ivr_basis *r_dest, const ivr_quat *p_euler);

ivr_string IVRAPI ivr_basis_as_string(const ivr_basis *p_self);

ivr_basis IVRAPI ivr_basis_inverse(const ivr_basis *p_self);

ivr_basis IVRAPI ivr_basis_transposed(const ivr_basis *p_self);

ivr_basis IVRAPI ivr_basis_orthonormalized(const ivr_basis *p_self);

ivr_real IVRAPI ivr_basis_determinant(const ivr_basis *p_self);

ivr_basis IVRAPI ivr_basis_rotated(const ivr_basis *p_self, const ivr_vector3 *p_axis, const ivr_real p_phi);

ivr_basis IVRAPI ivr_basis_scaled(const ivr_basis *p_self, const ivr_vector3 *p_scale);

ivr_vector3 IVRAPI ivr_basis_get_scale(const ivr_basis *p_self);

ivr_vector3 IVRAPI ivr_basis_get_euler(const ivr_basis *p_self);

ivr_quat IVRAPI ivr_basis_get_quat(const ivr_basis *p_self);

void IVRAPI ivr_basis_set_quat(ivr_basis *p_self, const ivr_quat *p_quat);

void IVRAPI ivr_basis_set_axis_angle_scale(ivr_basis *p_self, const ivr_vector3 *p_axis, ivr_real p_phi, const ivr_vector3 *p_scale);

void IVRAPI ivr_basis_set_euler_scale(ivr_basis *p_self, const ivr_vector3 *p_euler, const ivr_vector3 *p_scale);

void IVRAPI ivr_basis_set_quat_scale(ivr_basis *p_self, const ivr_quat *p_quat, const ivr_vector3 *p_scale);

ivr_real IVRAPI ivr_basis_tdotx(const ivr_basis *p_self, const ivr_vector3 *p_with);

ivr_real IVRAPI ivr_basis_tdoty(const ivr_basis *p_self, const ivr_vector3 *p_with);

ivr_real IVRAPI ivr_basis_tdotz(const ivr_basis *p_self, const ivr_vector3 *p_with);

ivr_vector3 IVRAPI ivr_basis_xform(const ivr_basis *p_self, const ivr_vector3 *p_v);

ivr_vector3 IVRAPI ivr_basis_xform_inv(const ivr_basis *p_self, const ivr_vector3 *p_v);

ivr_int IVRAPI ivr_basis_get_orthogonal_index(const ivr_basis *p_self);

void IVRAPI ivr_basis_new(ivr_basis *r_dest);

// p_elements is a pointer to an array of 3 (!!) vector3
void IVRAPI ivr_basis_get_elements(const ivr_basis *p_self, ivr_vector3 *p_elements);

ivr_vector3 IVRAPI ivr_basis_get_axis(const ivr_basis *p_self, const ivr_int p_axis);

void IVRAPI ivr_basis_set_axis(ivr_basis *p_self, const ivr_int p_axis, const ivr_vector3 *p_value);

ivr_vector3 IVRAPI ivr_basis_get_row(const ivr_basis *p_self, const ivr_int p_row);

void IVRAPI ivr_basis_set_row(ivr_basis *p_self, const ivr_int p_row, const ivr_vector3 *p_value);

ivr_bool IVRAPI ivr_basis_operator_equal(const ivr_basis *p_self, const ivr_basis *p_b);

ivr_basis IVRAPI ivr_basis_operator_add(const ivr_basis *p_self, const ivr_basis *p_b);

ivr_basis IVRAPI ivr_basis_operator_subtract(const ivr_basis *p_self, const ivr_basis *p_b);

ivr_basis IVRAPI ivr_basis_operator_multiply_vector(const ivr_basis *p_self, const ivr_basis *p_b);

ivr_basis IVRAPI ivr_basis_operator_multiply_scalar(const ivr_basis *p_self, const ivr_real p_b);

ivr_basis IVRAPI ivr_basis_slerp(const ivr_basis *p_self, const ivr_basis *p_b, const ivr_real p_t);

#ifdef __cplusplus
}
#endif

#endif //IVR_BASIS_H
