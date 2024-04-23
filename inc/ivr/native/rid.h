/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/

#ifndef IVR_RID_H
#define IVR_RID_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_RID_SIZE sizeof(void *)

#ifndef IVR_CORE_API_IVR_RID_TYPE_DEFINED
#define IVR_CORE_API_IVR_RID_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_RID_SIZE];
} ivr_rid;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/native.h>

#ifdef __cplusplus
extern "C" {
#endif

void IVRAPI ivr_rid_new(ivr_rid *r_dest);

ivr_int IVRAPI ivr_rid_get_id(const ivr_rid *p_self);

void IVRAPI ivr_rid_new_with_resource(ivr_rid *r_dest, const ivr_object *p_from);

ivr_bool IVRAPI ivr_rid_operator_equal(const ivr_rid *p_self, const ivr_rid *p_b);

ivr_bool IVRAPI ivr_rid_operator_less(const ivr_rid *p_self, const ivr_rid *p_b);

#ifdef __cplusplus
}
#endif

#endif // IVR_RID_H
