/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_TRANSFORM_H
#define IVR_TRANSFORM_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_TRANSFORM_SIZE 48

#ifndef IVR_CORE_API_IVR_TRANSFORM_TYPE_DEFINED
#define IVR_CORE_API_IVR_TRANSFORM_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_TRANSFORM_SIZE];
} ivr_transform;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/basis.h>
#include <native/native.h>
#include <native/variant.h>
#include <native/vector3.h>

#ifdef __cplusplus
extern "C" {
#endif

void IVRAPI ivr_transform_new_with_axis_origin(ivr_transform *r_dest, const ivr_vector3 *p_x_axis, const ivr_vector3 *p_y_axis, const ivr_vector3 *p_z_axis, const ivr_vector3 *p_origin);
void IVRAPI ivr_transform_new(ivr_transform *r_dest, const ivr_basis *p_basis, const ivr_vector3 *p_origin);
void IVRAPI ivr_transform_new_with_quat(ivr_transform *r_dest, const ivr_quat *p_quat);

ivr_basis IVRAPI ivr_transform_get_basis(const ivr_transform *p_self);
void IVRAPI ivr_transform_set_basis(ivr_transform *p_self, const ivr_basis *p_v);

ivr_vector3 IVRAPI ivr_transform_get_origin(const ivr_transform *p_self);
void IVRAPI ivr_transform_set_origin(ivr_transform *p_self, const ivr_vector3 *p_v);

ivr_string IVRAPI ivr_transform_as_string(const ivr_transform *p_self);

ivr_transform IVRAPI ivr_transform_inverse(const ivr_transform *p_self);

ivr_transform IVRAPI ivr_transform_affine_inverse(const ivr_transform *p_self);

ivr_transform IVRAPI ivr_transform_orthonormalized(const ivr_transform *p_self);

ivr_transform IVRAPI ivr_transform_rotated(const ivr_transform *p_self, const ivr_vector3 *p_axis, const ivr_real p_phi);

ivr_transform IVRAPI ivr_transform_scaled(const ivr_transform *p_self, const ivr_vector3 *p_scale);

ivr_transform IVRAPI ivr_transform_translated(const ivr_transform *p_self, const ivr_vector3 *p_ofs);

ivr_transform IVRAPI ivr_transform_looking_at(const ivr_transform *p_self, const ivr_vector3 *p_target, const ivr_vector3 *p_up);

ivr_plane IVRAPI ivr_transform_xform_plane(const ivr_transform *p_self, const ivr_plane *p_v);

ivr_plane IVRAPI ivr_transform_xform_inv_plane(const ivr_transform *p_self, const ivr_plane *p_v);

void IVRAPI ivr_transform_new_identity(ivr_transform *r_dest);

ivr_bool IVRAPI ivr_transform_operator_equal(const ivr_transform *p_self, const ivr_transform *p_b);

ivr_transform IVRAPI ivr_transform_operator_multiply(const ivr_transform *p_self, const ivr_transform *p_b);

ivr_vector3 IVRAPI ivr_transform_xform_vector3(const ivr_transform *p_self, const ivr_vector3 *p_v);

ivr_vector3 IVRAPI ivr_transform_xform_inv_vector3(const ivr_transform *p_self, const ivr_vector3 *p_v);

ivr_aabb IVRAPI ivr_transform_xform_aabb(const ivr_transform *p_self, const ivr_aabb *p_v);

ivr_aabb IVRAPI ivr_transform_xform_inv_aabb(const ivr_transform *p_self, const ivr_aabb *p_v);

#ifdef __cplusplus
}
#endif

#endif // IVR_TRANSFORM_H
