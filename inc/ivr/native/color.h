/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/

#ifndef IVR_COLOR_H
#define IVR_COLOR_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_COLOR_SIZE 16

#ifndef IVR_CORE_API_IVR_COLOR_TYPE_DEFINED
#define IVR_CORE_API_IVR_COLOR_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_COLOR_SIZE];
} ivr_color;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/native.h>
#include <native/string.h>

#ifdef __cplusplus
extern "C" {
#endif

void IVRAPI ivr_color_new_rgba(ivr_color *r_dest, const ivr_real p_r, const ivr_real p_g, const ivr_real p_b, const ivr_real p_a);
void IVRAPI ivr_color_new_rgb(ivr_color *r_dest, const ivr_real p_r, const ivr_real p_g, const ivr_real p_b);

ivr_real ivr_color_get_r(const ivr_color *p_self);
void ivr_color_set_r(ivr_color *p_self, const ivr_real r);

ivr_real ivr_color_get_g(const ivr_color *p_self);
void ivr_color_set_g(ivr_color *p_self, const ivr_real g);

ivr_real ivr_color_get_b(const ivr_color *p_self);
void ivr_color_set_b(ivr_color *p_self, const ivr_real b);

ivr_real ivr_color_get_a(const ivr_color *p_self);
void ivr_color_set_a(ivr_color *p_self, const ivr_real a);

ivr_real ivr_color_get_h(const ivr_color *p_self);
ivr_real ivr_color_get_s(const ivr_color *p_self);
ivr_real ivr_color_get_v(const ivr_color *p_self);

ivr_string IVRAPI ivr_color_as_string(const ivr_color *p_self);

ivr_int IVRAPI ivr_color_to_rgba32(const ivr_color *p_self);

ivr_int IVRAPI ivr_color_to_abgr32(const ivr_color *p_self);

ivr_int IVRAPI ivr_color_to_abgr64(const ivr_color *p_self);

ivr_int IVRAPI ivr_color_to_argb64(const ivr_color *p_self);

ivr_int IVRAPI ivr_color_to_rgba64(const ivr_color *p_self);

ivr_int IVRAPI ivr_color_to_argb32(const ivr_color *p_self);

ivr_real IVRAPI ivr_color_gray(const ivr_color *p_self);

ivr_color IVRAPI ivr_color_inverted(const ivr_color *p_self);

ivr_color IVRAPI ivr_color_contrasted(const ivr_color *p_self);

ivr_color IVRAPI ivr_color_linear_interpolate(const ivr_color *p_self, const ivr_color *p_b, const ivr_real p_t);

ivr_color IVRAPI ivr_color_blend(const ivr_color *p_self, const ivr_color *p_over);

ivr_color IVRAPI ivr_color_darkened(const ivr_color *p_self, const ivr_real p_amount);

ivr_color IVRAPI ivr_color_from_hsv(const ivr_color *p_self, const ivr_real p_h, const ivr_real p_s, const ivr_real p_v, const ivr_real p_a);

ivr_color IVRAPI ivr_color_lightened(const ivr_color *p_self, const ivr_real p_amount);

ivr_string IVRAPI ivr_color_to_html(const ivr_color *p_self, const ivr_bool p_with_alpha);

ivr_bool IVRAPI ivr_color_operator_equal(const ivr_color *p_self, const ivr_color *p_b);

ivr_bool IVRAPI ivr_color_operator_less(const ivr_color *p_self, const ivr_color *p_b);

#ifdef __cplusplus
}
#endif

#endif // IVR_COLOR_H
