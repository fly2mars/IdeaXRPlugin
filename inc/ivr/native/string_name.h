/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_STRING_NAME_H
#define IVR_STRING_NAME_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <wchar.h>

#define IVR_STRING_NAME_SIZE sizeof(void *)

#ifndef IVR_CORE_API_IVR_STRING_NAME_TYPE_DEFINED
#define IVR_CORE_API_IVR_STRING_NAME_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_STRING_NAME_SIZE];
} ivr_string_name;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/native.h>

#ifdef __cplusplus
extern "C" {
#endif

void IVRAPI ivr_string_name_new(ivr_string_name *r_dest, const ivr_string *p_name);
void IVRAPI ivr_string_name_new_data(ivr_string_name *r_dest, const char *p_name);

ivr_string IVRAPI ivr_string_name_get_name(const ivr_string_name *p_self);

uint32_t IVRAPI ivr_string_name_get_hash(const ivr_string_name *p_self);
const void IVRAPI *ivr_string_name_get_data_unique_pointer(const ivr_string_name *p_self);

ivr_bool IVRAPI ivr_string_name_operator_equal(const ivr_string_name *p_self, const ivr_string_name *p_other);
ivr_bool IVRAPI ivr_string_name_operator_less(const ivr_string_name *p_self, const ivr_string_name *p_other);

void IVRAPI ivr_string_name_destroy(ivr_string_name *p_self);

#ifdef __cplusplus
}
#endif

#endif // IVR_STRING_NAME_H
