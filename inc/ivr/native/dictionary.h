/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/

#ifndef IVR_DICTIONARY_H
#define IVR_DICTIONARY_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_DICTIONARY_SIZE sizeof(void *)

#ifndef IVR_CORE_API_IVR_DICTIONARY_TYPE_DEFINED
#define IVR_CORE_API_IVR_DICTIONARY_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_DICTIONARY_SIZE];
} ivr_dictionary;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/array.h>
#include <native/native.h>
#include <native/variant.h>

#ifdef __cplusplus
extern "C" {
#endif

void IVRAPI ivr_dictionary_new(ivr_dictionary *r_dest);
void IVRAPI ivr_dictionary_new_copy(ivr_dictionary *r_dest, const ivr_dictionary *p_src);
void IVRAPI ivr_dictionary_destroy(ivr_dictionary *p_self);

ivr_dictionary IVRAPI ivr_dictionary_duplicate(const ivr_dictionary *p_self, const ivr_bool p_deep);

ivr_int IVRAPI ivr_dictionary_size(const ivr_dictionary *p_self);

ivr_bool IVRAPI ivr_dictionary_empty(const ivr_dictionary *p_self);

void IVRAPI ivr_dictionary_clear(ivr_dictionary *p_self);

ivr_bool IVRAPI ivr_dictionary_has(const ivr_dictionary *p_self, const ivr_variant *p_key);

ivr_bool IVRAPI ivr_dictionary_has_all(const ivr_dictionary *p_self, const ivr_array *p_keys);

void IVRAPI ivr_dictionary_erase(ivr_dictionary *p_self, const ivr_variant *p_key);

ivr_int IVRAPI ivr_dictionary_hash(const ivr_dictionary *p_self);

ivr_array IVRAPI ivr_dictionary_keys(const ivr_dictionary *p_self);

ivr_array IVRAPI ivr_dictionary_values(const ivr_dictionary *p_self);

ivr_variant IVRAPI ivr_dictionary_get(const ivr_dictionary *p_self, const ivr_variant *p_key);
void IVRAPI ivr_dictionary_set(ivr_dictionary *p_self, const ivr_variant *p_key, const ivr_variant *p_value);

ivr_variant IVRAPI *ivr_dictionary_operator_index(ivr_dictionary *p_self, const ivr_variant *p_key);

const ivr_variant IVRAPI *ivr_dictionary_operator_index_const(const ivr_dictionary *p_self, const ivr_variant *p_key);

ivr_variant IVRAPI *ivr_dictionary_next(const ivr_dictionary *p_self, const ivr_variant *p_key);

ivr_bool IVRAPI ivr_dictionary_operator_equal(const ivr_dictionary *p_self, const ivr_dictionary *p_b);

ivr_string IVRAPI ivr_dictionary_to_json(const ivr_dictionary *p_self);

// ivr_native core 1.1

ivr_bool IVRAPI ivr_dictionary_erase_with_return(ivr_dictionary *p_self, const ivr_variant *p_key);

ivr_variant IVRAPI ivr_dictionary_get_with_default(const ivr_dictionary *p_self, const ivr_variant *p_key, const ivr_variant *p_default);

#ifdef __cplusplus
}
#endif

#endif // IVR_DICTIONARY_H
