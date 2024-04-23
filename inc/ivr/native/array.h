/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/

#ifndef IVR_ARRAY_H
#define IVR_ARRAY_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_ARRAY_SIZE sizeof(void *)

#ifndef IVR_CORE_API_IVR_ARRAY_TYPE_DEFINED
#define IVR_CORE_API_IVR_ARRAY_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_ARRAY_SIZE];
} ivr_array;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/pool_arrays.h>
#include <native/variant.h>

#include <native/native.h>

#ifdef __cplusplus
extern "C" {
#endif

void IVRAPI ivr_array_new(ivr_array *r_dest);
void IVRAPI ivr_array_new_copy(ivr_array *r_dest, const ivr_array *p_src);
void IVRAPI ivr_array_new_pool_color_array(ivr_array *r_dest, const ivr_pool_color_array *p_pca);
void IVRAPI ivr_array_new_pool_vector3_array(ivr_array *r_dest, const ivr_pool_vector3_array *p_pv3a);
void IVRAPI ivr_array_new_pool_vector2_array(ivr_array *r_dest, const ivr_pool_vector2_array *p_pv2a);
void IVRAPI ivr_array_new_pool_string_array(ivr_array *r_dest, const ivr_pool_string_array *p_psa);
void IVRAPI ivr_array_new_pool_real_array(ivr_array *r_dest, const ivr_pool_real_array *p_pra);
void IVRAPI ivr_array_new_pool_int_array(ivr_array *r_dest, const ivr_pool_int_array *p_pia);
void IVRAPI ivr_array_new_pool_byte_array(ivr_array *r_dest, const ivr_pool_byte_array *p_pba);

void IVRAPI ivr_array_set(ivr_array *p_self, const ivr_int p_idx, const ivr_variant *p_value);

ivr_variant IVRAPI ivr_array_get(const ivr_array *p_self, const ivr_int p_idx);

ivr_variant IVRAPI *ivr_array_operator_index(ivr_array *p_self, const ivr_int p_idx);

const ivr_variant IVRAPI *ivr_array_operator_index_const(const ivr_array *p_self, const ivr_int p_idx);

void IVRAPI ivr_array_append(ivr_array *p_self, const ivr_variant *p_value);

void IVRAPI ivr_array_clear(ivr_array *p_self);

ivr_int IVRAPI ivr_array_count(const ivr_array *p_self, const ivr_variant *p_value);

ivr_bool IVRAPI ivr_array_empty(const ivr_array *p_self);

void IVRAPI ivr_array_erase(ivr_array *p_self, const ivr_variant *p_value);

ivr_variant IVRAPI ivr_array_front(const ivr_array *p_self);

ivr_variant IVRAPI ivr_array_back(const ivr_array *p_self);

ivr_int IVRAPI ivr_array_find(const ivr_array *p_self, const ivr_variant *p_what, const ivr_int p_from);

ivr_int IVRAPI ivr_array_find_last(const ivr_array *p_self, const ivr_variant *p_what);

ivr_bool IVRAPI ivr_array_has(const ivr_array *p_self, const ivr_variant *p_value);

ivr_int IVRAPI ivr_array_hash(const ivr_array *p_self);

void IVRAPI ivr_array_insert(ivr_array *p_self, const ivr_int p_pos, const ivr_variant *p_value);

void IVRAPI ivr_array_invert(ivr_array *p_self);

ivr_variant IVRAPI ivr_array_pop_back(ivr_array *p_self);

ivr_variant IVRAPI ivr_array_pop_front(ivr_array *p_self);

void IVRAPI ivr_array_push_back(ivr_array *p_self, const ivr_variant *p_value);

void IVRAPI ivr_array_push_front(ivr_array *p_self, const ivr_variant *p_value);

void IVRAPI ivr_array_remove(ivr_array *p_self, const ivr_int p_idx);

void IVRAPI ivr_array_resize(ivr_array *p_self, const ivr_int p_size);

ivr_int IVRAPI ivr_array_rfind(const ivr_array *p_self, const ivr_variant *p_what, const ivr_int p_from);

ivr_int IVRAPI ivr_array_size(const ivr_array *p_self);

void IVRAPI ivr_array_sort(ivr_array *p_self);

void IVRAPI ivr_array_sort_custom(ivr_array *p_self, ivr_object *p_obj, const ivr_string *p_func);

ivr_int IVRAPI ivr_array_bsearch(ivr_array *p_self, const ivr_variant *p_value, const ivr_bool p_before);

ivr_int IVRAPI ivr_array_bsearch_custom(ivr_array *p_self, const ivr_variant *p_value, ivr_object *p_obj, const ivr_string *p_func, const ivr_bool p_before);

void IVRAPI ivr_array_destroy(ivr_array *p_self);

ivr_array IVRAPI ivr_array_duplicate(const ivr_array *p_self, const ivr_bool p_deep);

ivr_array IVRAPI ivr_array_slice(const ivr_array *p_self, const ivr_int p_begin, const ivr_int p_end, const ivr_int p_step, const ivr_bool p_deep);

ivr_variant IVRAPI ivr_array_max(const ivr_array *p_self);

ivr_variant IVRAPI ivr_array_min(const ivr_array *p_self);

void IVRAPI ivr_array_shuffle(ivr_array *p_self);

#ifdef __cplusplus
}
#endif

#endif // IVR_ARRAY_H
