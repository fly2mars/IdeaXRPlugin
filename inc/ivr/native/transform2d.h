/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_TRANSFORM2D_H
#define IVR_TRANSFORM2D_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_TRANSFORM2D_SIZE 24

#ifndef IVR_CORE_API_IVR_TRANSFORM2D_TYPE_DEFINED
#define IVR_CORE_API_IVR_TRANSFORM2D_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_TRANSFORM2D_SIZE];
} ivr_transform2d;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/native.h>
#include <native/variant.h>
#include <native/vector2.h>

#ifdef __cplusplus
extern "C" {
#endif

void IVRAPI ivr_transform2d_new(ivr_transform2d *r_dest, const ivr_real p_rot, const ivr_vector2 *p_pos);
void IVRAPI ivr_transform2d_new_axis_origin(ivr_transform2d *r_dest, const ivr_vector2 *p_x_axis, const ivr_vector2 *p_y_axis, const ivr_vector2 *p_origin);

ivr_string IVRAPI ivr_transform2d_as_string(const ivr_transform2d *p_self);

ivr_transform2d IVRAPI ivr_transform2d_inverse(const ivr_transform2d *p_self);

ivr_transform2d IVRAPI ivr_transform2d_affine_inverse(const ivr_transform2d *p_self);

ivr_real IVRAPI ivr_transform2d_get_rotation(const ivr_transform2d *p_self);

ivr_vector2 IVRAPI ivr_transform2d_get_origin(const ivr_transform2d *p_self);

ivr_vector2 IVRAPI ivr_transform2d_get_scale(const ivr_transform2d *p_self);

ivr_transform2d IVRAPI ivr_transform2d_orthonormalized(const ivr_transform2d *p_self);

ivr_transform2d IVRAPI ivr_transform2d_rotated(const ivr_transform2d *p_self, const ivr_real p_phi);

ivr_transform2d IVRAPI ivr_transform2d_scaled(const ivr_transform2d *p_self, const ivr_vector2 *p_scale);

ivr_transform2d IVRAPI ivr_transform2d_translated(const ivr_transform2d *p_self, const ivr_vector2 *p_offset);

ivr_vector2 IVRAPI ivr_transform2d_xform_vector2(const ivr_transform2d *p_self, const ivr_vector2 *p_v);

ivr_vector2 IVRAPI ivr_transform2d_xform_inv_vector2(const ivr_transform2d *p_self, const ivr_vector2 *p_v);

ivr_vector2 IVRAPI ivr_transform2d_basis_xform_vector2(const ivr_transform2d *p_self, const ivr_vector2 *p_v);

ivr_vector2 IVRAPI ivr_transform2d_basis_xform_inv_vector2(const ivr_transform2d *p_self, const ivr_vector2 *p_v);

ivr_transform2d IVRAPI ivr_transform2d_interpolate_with(const ivr_transform2d *p_self, const ivr_transform2d *p_m, const ivr_real p_c);

ivr_bool IVRAPI ivr_transform2d_operator_equal(const ivr_transform2d *p_self, const ivr_transform2d *p_b);

ivr_transform2d IVRAPI ivr_transform2d_operator_multiply(const ivr_transform2d *p_self, const ivr_transform2d *p_b);

void IVRAPI ivr_transform2d_new_identity(ivr_transform2d *r_dest);

ivr_rect2 IVRAPI ivr_transform2d_xform_rect2(const ivr_transform2d *p_self, const ivr_rect2 *p_v);

ivr_rect2 IVRAPI ivr_transform2d_xform_inv_rect2(const ivr_transform2d *p_self, const ivr_rect2 *p_v);

#ifdef __cplusplus
}
#endif

#endif // IVR_TRANSFORM2D_H
