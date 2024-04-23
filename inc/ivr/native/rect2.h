/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_RECT2_H
#define IVR_RECT2_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#ifndef IVR_CORE_API_IVR_RECT2_TYPE_DEFINED
#define IVR_CORE_API_IVR_RECT2_TYPE_DEFINED
typedef struct ivr_rect2 {
	uint8_t _dont_touch_that[16];
} ivr_rect2;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/native.h>
#include <native/vector2.h>

#ifdef __cplusplus
extern "C" {
#endif

void IVRAPI ivr_rect2_new_with_position_and_size(ivr_rect2 *r_dest, const ivr_vector2 *p_pos, const ivr_vector2 *p_size);
void IVRAPI ivr_rect2_new(ivr_rect2 *r_dest, const ivr_real p_x, const ivr_real p_y, const ivr_real p_width, const ivr_real p_height);

ivr_string IVRAPI ivr_rect2_as_string(const ivr_rect2 *p_self);

ivr_real IVRAPI ivr_rect2_get_area(const ivr_rect2 *p_self);

ivr_bool IVRAPI ivr_rect2_intersects(const ivr_rect2 *p_self, const ivr_rect2 *p_b);

ivr_bool IVRAPI ivr_rect2_encloses(const ivr_rect2 *p_self, const ivr_rect2 *p_b);

ivr_bool IVRAPI ivr_rect2_has_no_area(const ivr_rect2 *p_self);

ivr_rect2 IVRAPI ivr_rect2_clip(const ivr_rect2 *p_self, const ivr_rect2 *p_b);

ivr_rect2 IVRAPI ivr_rect2_merge(const ivr_rect2 *p_self, const ivr_rect2 *p_b);

ivr_bool IVRAPI ivr_rect2_has_point(const ivr_rect2 *p_self, const ivr_vector2 *p_point);

ivr_rect2 IVRAPI ivr_rect2_grow(const ivr_rect2 *p_self, const ivr_real p_by);

ivr_rect2 IVRAPI ivr_rect2_grow_individual(const ivr_rect2 *p_self, const ivr_real p_left, const ivr_real p_top, const ivr_real p_right, const ivr_real p_bottom);

ivr_rect2 IVRAPI ivr_rect2_grow_margin(const ivr_rect2 *p_self, const ivr_int p_margin, const ivr_real p_by);

ivr_rect2 IVRAPI ivr_rect2_abs(const ivr_rect2 *p_self);

ivr_rect2 IVRAPI ivr_rect2_expand(const ivr_rect2 *p_self, const ivr_vector2 *p_to);

ivr_bool IVRAPI ivr_rect2_operator_equal(const ivr_rect2 *p_self, const ivr_rect2 *p_b);

ivr_vector2 IVRAPI ivr_rect2_get_position(const ivr_rect2 *p_self);

ivr_vector2 IVRAPI ivr_rect2_get_size(const ivr_rect2 *p_self);

void IVRAPI ivr_rect2_set_position(ivr_rect2 *p_self, const ivr_vector2 *p_pos);

void IVRAPI ivr_rect2_set_size(ivr_rect2 *p_self, const ivr_vector2 *p_size);

#ifdef __cplusplus
}
#endif

#endif // IVR_RECT2_H
