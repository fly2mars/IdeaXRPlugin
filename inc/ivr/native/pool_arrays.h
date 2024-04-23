/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_POOL_ARRAYS_H
#define IVR_POOL_ARRAYS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/////// Read Access

#define IVR_POOL_ARRAY_READ_ACCESS_SIZE 1

typedef struct {
	uint8_t _dont_touch_that[IVR_POOL_ARRAY_READ_ACCESS_SIZE];
} ivr_pool_array_read_access;

typedef ivr_pool_array_read_access ivr_pool_byte_array_read_access;
typedef ivr_pool_array_read_access ivr_pool_int_array_read_access;
typedef ivr_pool_array_read_access ivr_pool_real_array_read_access;
typedef ivr_pool_array_read_access ivr_pool_string_array_read_access;
typedef ivr_pool_array_read_access ivr_pool_vector2_array_read_access;
typedef ivr_pool_array_read_access ivr_pool_vector3_array_read_access;
typedef ivr_pool_array_read_access ivr_pool_color_array_read_access;

/////// Write Access

#define IVR_POOL_ARRAY_WRITE_ACCESS_SIZE 1

typedef struct {
	uint8_t _dont_touch_that[IVR_POOL_ARRAY_WRITE_ACCESS_SIZE];
} ivr_pool_array_write_access;

typedef ivr_pool_array_write_access ivr_pool_byte_array_write_access;
typedef ivr_pool_array_write_access ivr_pool_int_array_write_access;
typedef ivr_pool_array_write_access ivr_pool_real_array_write_access;
typedef ivr_pool_array_write_access ivr_pool_string_array_write_access;
typedef ivr_pool_array_write_access ivr_pool_vector2_array_write_access;
typedef ivr_pool_array_write_access ivr_pool_vector3_array_write_access;
typedef ivr_pool_array_write_access ivr_pool_color_array_write_access;

/////// PoolByteArray

#define OVR_POOL_BYTE_ARRAY_SIZE sizeof(void *)

#ifndef IVR_CORE_API_IVR_POOL_BYTE_ARRAY_TYPE_DEFINED
#define IVR_CORE_API_IVR_POOL_BYTE_ARRAY_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[OVR_POOL_BYTE_ARRAY_SIZE];
} ivr_pool_byte_array;
#endif

/////// PoolIntArray

#define IVR_POOL_INT_ARRAY_SIZE sizeof(void *)

#ifndef IVR_CORE_API_IVR_POOL_INT_ARRAY_TYPE_DEFINED
#define IVR_CORE_API_IVR_POOL_INT_ARRAY_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_POOL_INT_ARRAY_SIZE];
} ivr_pool_int_array;
#endif

/////// PoolRealArray

#define IVR_POOL_REAL_ARRAY_SIZE sizeof(void *)

#ifndef IVR_CORE_API_IVR_POOL_REAL_ARRAY_TYPE_DEFINED
#define IVR_CORE_API_IVR_POOL_REAL_ARRAY_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_POOL_REAL_ARRAY_SIZE];
} ivr_pool_real_array;
#endif

/////// PoolStringArray

#define IBR_POOL_STRING_ARRAY_SIZE sizeof(void *)

#ifndef IVR_CORE_API_IVR_POOL_STRING_ARRAY_TYPE_DEFINED
#define IVR_CORE_API_IVR_POOL_STRING_ARRAY_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IBR_POOL_STRING_ARRAY_SIZE];
} ivr_pool_string_array;
#endif

/////// PoolVector2Array

#define IVR_POOL_VECTOR2_ARRAY_SIZE sizeof(void *)

#ifndef IVR_CORE_API_IVR_POOL_VECTOR2_ARRAY_TYPE_DEFINED
#define IVR_CORE_API_IVR_POOL_VECTOR2_ARRAY_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_POOL_VECTOR2_ARRAY_SIZE];
} ivr_pool_vector2_array;
#endif

/////// PoolVector3Array

#define IVR_POOL_VECTOR3_ARRAY_SIZE sizeof(void *)

#ifndef IVR_CORE_API_IVR_POOL_VECTOR3_ARRAY_TYPE_DEFINED
#define IVR_CORE_API_IVR_POOL_VECTOR3_ARRAY_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_POOL_VECTOR3_ARRAY_SIZE];
} ivr_pool_vector3_array;
#endif

/////// PoolColorArray

#define IVR_POOL_COLOR_ARRAY_SIZE sizeof(void *)

#ifndef IVR_CORE_API_IVR_POOL_COLOR_ARRAY_TYPE_DEFINED
#define IVR_CORE_API_IVR_POOL_COLOR_ARRAY_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_POOL_COLOR_ARRAY_SIZE];
} ivr_pool_color_array;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/array.h>
#include <native/color.h>
#include <native/vector2.h>
#include <native/vector3.h>

#include <native/native.h>

#ifdef __cplusplus
extern "C" {
#endif

// byte

void IVRAPI ivr_pool_byte_array_new(ivr_pool_byte_array *r_dest);
void IVRAPI ivr_pool_byte_array_new_copy(ivr_pool_byte_array *r_dest, const ivr_pool_byte_array *p_src);
void IVRAPI ivr_pool_byte_array_new_with_array(ivr_pool_byte_array *r_dest, const ivr_array *p_a);

void IVRAPI ivr_pool_byte_array_append(ivr_pool_byte_array *p_self, const uint8_t p_data);

void IVRAPI ivr_pool_byte_array_append_array(ivr_pool_byte_array *p_self, const ivr_pool_byte_array *p_array);

ivr_error IVRAPI ivr_pool_byte_array_insert(ivr_pool_byte_array *p_self, const ivr_int p_idx, const uint8_t p_data);

void IVRAPI ivr_pool_byte_array_invert(ivr_pool_byte_array *p_self);

void IVRAPI ivr_pool_byte_array_push_back(ivr_pool_byte_array *p_self, const uint8_t p_data);

void IVRAPI ivr_pool_byte_array_remove(ivr_pool_byte_array *p_self, const ivr_int p_idx);

void IVRAPI ivr_pool_byte_array_resize(ivr_pool_byte_array *p_self, const ivr_int p_size);

ivr_pool_byte_array_read_access IVRAPI *ivr_pool_byte_array_read(const ivr_pool_byte_array *p_self);

ivr_pool_byte_array_write_access IVRAPI *ivr_pool_byte_array_write(ivr_pool_byte_array *p_self);

void IVRAPI ivr_pool_byte_array_set(ivr_pool_byte_array *p_self, const ivr_int p_idx, const uint8_t p_data);
uint8_t IVRAPI ivr_pool_byte_array_get(const ivr_pool_byte_array *p_self, const ivr_int p_idx);

ivr_int IVRAPI ivr_pool_byte_array_size(const ivr_pool_byte_array *p_self);

ivr_bool IVRAPI ivr_pool_byte_array_empty(const ivr_pool_byte_array *p_self);

void IVRAPI ivr_pool_byte_array_destroy(ivr_pool_byte_array *p_self);

// int

void IVRAPI ivr_pool_int_array_new(ivr_pool_int_array *r_dest);
void IVRAPI ivr_pool_int_array_new_copy(ivr_pool_int_array *r_dest, const ivr_pool_int_array *p_src);
void IVRAPI ivr_pool_int_array_new_with_array(ivr_pool_int_array *r_dest, const ivr_array *p_a);

void IVRAPI ivr_pool_int_array_append(ivr_pool_int_array *p_self, const ivr_int p_data);

void IVRAPI ivr_pool_int_array_append_array(ivr_pool_int_array *p_self, const ivr_pool_int_array *p_array);

ivr_error IVRAPI ivr_pool_int_array_insert(ivr_pool_int_array *p_self, const ivr_int p_idx, const ivr_int p_data);

void IVRAPI ivr_pool_int_array_invert(ivr_pool_int_array *p_self);

void IVRAPI ivr_pool_int_array_push_back(ivr_pool_int_array *p_self, const ivr_int p_data);

void IVRAPI ivr_pool_int_array_remove(ivr_pool_int_array *p_self, const ivr_int p_idx);

void IVRAPI ivr_pool_int_array_resize(ivr_pool_int_array *p_self, const ivr_int p_size);

ivr_pool_int_array_read_access IVRAPI *ivr_pool_int_array_read(const ivr_pool_int_array *p_self);

ivr_pool_int_array_write_access IVRAPI *ivr_pool_int_array_write(ivr_pool_int_array *p_self);

void IVRAPI ivr_pool_int_array_set(ivr_pool_int_array *p_self, const ivr_int p_idx, const ivr_int p_data);
ivr_int IVRAPI ivr_pool_int_array_get(const ivr_pool_int_array *p_self, const ivr_int p_idx);

ivr_int IVRAPI ivr_pool_int_array_size(const ivr_pool_int_array *p_self);

ivr_bool IVRAPI ivr_pool_int_array_empty(const ivr_pool_int_array *p_self);

void IVRAPI ivr_pool_int_array_destroy(ivr_pool_int_array *p_self);

// real

void IVRAPI ivr_pool_real_array_new(ivr_pool_real_array *r_dest);
void IVRAPI ivr_pool_real_array_new_copy(ivr_pool_real_array *r_dest, const ivr_pool_real_array *p_src);
void IVRAPI ivr_pool_real_array_new_with_array(ivr_pool_real_array *r_dest, const ivr_array *p_a);

void IVRAPI ivr_pool_real_array_append(ivr_pool_real_array *p_self, const ivr_real p_data);

void IVRAPI ivr_pool_real_array_append_array(ivr_pool_real_array *p_self, const ivr_pool_real_array *p_array);

ivr_error IVRAPI ivr_pool_real_array_insert(ivr_pool_real_array *p_self, const ivr_int p_idx, const ivr_real p_data);

void IVRAPI ivr_pool_real_array_invert(ivr_pool_real_array *p_self);

void IVRAPI ivr_pool_real_array_push_back(ivr_pool_real_array *p_self, const ivr_real p_data);

void IVRAPI ivr_pool_real_array_remove(ivr_pool_real_array *p_self, const ivr_int p_idx);

void IVRAPI ivr_pool_real_array_resize(ivr_pool_real_array *p_self, const ivr_int p_size);

ivr_pool_real_array_read_access IVRAPI *ivr_pool_real_array_read(const ivr_pool_real_array *p_self);

ivr_pool_real_array_write_access IVRAPI *ivr_pool_real_array_write(ivr_pool_real_array *p_self);

void IVRAPI ivr_pool_real_array_set(ivr_pool_real_array *p_self, const ivr_int p_idx, const ivr_real p_data);
ivr_real IVRAPI ivr_pool_real_array_get(const ivr_pool_real_array *p_self, const ivr_int p_idx);

ivr_int IVRAPI ivr_pool_real_array_size(const ivr_pool_real_array *p_self);

ivr_bool IVRAPI ivr_pool_real_array_empty(const ivr_pool_real_array *p_self);

void IVRAPI ivr_pool_real_array_destroy(ivr_pool_real_array *p_self);

// string

void IVRAPI ivr_pool_string_array_new(ivr_pool_string_array *r_dest);
void IVRAPI ivr_pool_string_array_new_copy(ivr_pool_string_array *r_dest, const ivr_pool_string_array *p_src);
void IVRAPI ivr_pool_string_array_new_with_array(ivr_pool_string_array *r_dest, const ivr_array *p_a);

void IVRAPI ivr_pool_string_array_append(ivr_pool_string_array *p_self, const ivr_string *p_data);

void IVRAPI ivr_pool_string_array_append_array(ivr_pool_string_array *p_self, const ivr_pool_string_array *p_array);

ivr_error IVRAPI ivr_pool_string_array_insert(ivr_pool_string_array *p_self, const ivr_int p_idx, const ivr_string *p_data);

void IVRAPI ivr_pool_string_array_invert(ivr_pool_string_array *p_self);

void IVRAPI ivr_pool_string_array_push_back(ivr_pool_string_array *p_self, const ivr_string *p_data);

void IVRAPI ivr_pool_string_array_remove(ivr_pool_string_array *p_self, const ivr_int p_idx);

void IVRAPI ivr_pool_string_array_resize(ivr_pool_string_array *p_self, const ivr_int p_size);

ivr_pool_string_array_read_access IVRAPI *ivr_pool_string_array_read(const ivr_pool_string_array *p_self);

ivr_pool_string_array_write_access IVRAPI *ivr_pool_string_array_write(ivr_pool_string_array *p_self);

void IVRAPI ivr_pool_string_array_set(ivr_pool_string_array *p_self, const ivr_int p_idx, const ivr_string *p_data);
ivr_string IVRAPI ivr_pool_string_array_get(const ivr_pool_string_array *p_self, const ivr_int p_idx);

ivr_int IVRAPI ivr_pool_string_array_size(const ivr_pool_string_array *p_self);

ivr_bool IVRAPI ivr_pool_string_array_empty(const ivr_pool_string_array *p_self);

void IVRAPI ivr_pool_string_array_destroy(ivr_pool_string_array *p_self);

// vector2

void IVRAPI ivr_pool_vector2_array_new(ivr_pool_vector2_array *r_dest);
void IVRAPI ivr_pool_vector2_array_new_copy(ivr_pool_vector2_array *r_dest, const ivr_pool_vector2_array *p_src);
void IVRAPI ivr_pool_vector2_array_new_with_array(ivr_pool_vector2_array *r_dest, const ivr_array *p_a);

void IVRAPI ivr_pool_vector2_array_append(ivr_pool_vector2_array *p_self, const ivr_vector2 *p_data);

void IVRAPI ivr_pool_vector2_array_append_array(ivr_pool_vector2_array *p_self, const ivr_pool_vector2_array *p_array);

ivr_error IVRAPI ivr_pool_vector2_array_insert(ivr_pool_vector2_array *p_self, const ivr_int p_idx, const ivr_vector2 *p_data);

void IVRAPI ivr_pool_vector2_array_invert(ivr_pool_vector2_array *p_self);

void IVRAPI ivr_pool_vector2_array_push_back(ivr_pool_vector2_array *p_self, const ivr_vector2 *p_data);

void IVRAPI ivr_pool_vector2_array_remove(ivr_pool_vector2_array *p_self, const ivr_int p_idx);

void IVRAPI ivr_pool_vector2_array_resize(ivr_pool_vector2_array *p_self, const ivr_int p_size);

ivr_pool_vector2_array_read_access IVRAPI *ivr_pool_vector2_array_read(const ivr_pool_vector2_array *p_self);

ivr_pool_vector2_array_write_access IVRAPI *ivr_pool_vector2_array_write(ivr_pool_vector2_array *p_self);

void IVRAPI ivr_pool_vector2_array_set(ivr_pool_vector2_array *p_self, const ivr_int p_idx, const ivr_vector2 *p_data);
ivr_vector2 IVRAPI ivr_pool_vector2_array_get(const ivr_pool_vector2_array *p_self, const ivr_int p_idx);

ivr_int IVRAPI ivr_pool_vector2_array_size(const ivr_pool_vector2_array *p_self);

ivr_bool IVRAPI ivr_pool_vector2_array_empty(const ivr_pool_vector2_array *p_self);

void IVRAPI ivr_pool_vector2_array_destroy(ivr_pool_vector2_array *p_self);

// vector3

void IVRAPI ivr_pool_vector3_array_new(ivr_pool_vector3_array *r_dest);
void IVRAPI ivr_pool_vector3_array_new_copy(ivr_pool_vector3_array *r_dest, const ivr_pool_vector3_array *p_src);
void IVRAPI ivr_pool_vector3_array_new_with_array(ivr_pool_vector3_array *r_dest, const ivr_array *p_a);

void IVRAPI ivr_pool_vector3_array_append(ivr_pool_vector3_array *p_self, const ivr_vector3 *p_data);

void IVRAPI ivr_pool_vector3_array_append_array(ivr_pool_vector3_array *p_self, const ivr_pool_vector3_array *p_array);

ivr_error IVRAPI ivr_pool_vector3_array_insert(ivr_pool_vector3_array *p_self, const ivr_int p_idx, const ivr_vector3 *p_data);

void IVRAPI ivr_pool_vector3_array_invert(ivr_pool_vector3_array *p_self);

void IVRAPI ivr_pool_vector3_array_push_back(ivr_pool_vector3_array *p_self, const ivr_vector3 *p_data);

void IVRAPI ivr_pool_vector3_array_remove(ivr_pool_vector3_array *p_self, const ivr_int p_idx);

void IVRAPI ivr_pool_vector3_array_resize(ivr_pool_vector3_array *p_self, const ivr_int p_size);

ivr_pool_vector3_array_read_access IVRAPI *ivr_pool_vector3_array_read(const ivr_pool_vector3_array *p_self);

ivr_pool_vector3_array_write_access IVRAPI *ivr_pool_vector3_array_write(ivr_pool_vector3_array *p_self);

void IVRAPI ivr_pool_vector3_array_set(ivr_pool_vector3_array *p_self, const ivr_int p_idx, const ivr_vector3 *p_data);
ivr_vector3 IVRAPI ivr_pool_vector3_array_get(const ivr_pool_vector3_array *p_self, const ivr_int p_idx);

ivr_int IVRAPI ivr_pool_vector3_array_size(const ivr_pool_vector3_array *p_self);

ivr_bool IVRAPI ivr_pool_vector3_array_empty(const ivr_pool_vector3_array *p_self);

void IVRAPI ivr_pool_vector3_array_destroy(ivr_pool_vector3_array *p_self);

// color

void IVRAPI ivr_pool_color_array_new(ivr_pool_color_array *r_dest);
void IVRAPI ivr_pool_color_array_new_copy(ivr_pool_color_array *r_dest, const ivr_pool_color_array *p_src);
void IVRAPI ivr_pool_color_array_new_with_array(ivr_pool_color_array *r_dest, const ivr_array *p_a);

void IVRAPI ivr_pool_color_array_append(ivr_pool_color_array *p_self, const ivr_color *p_data);

void IVRAPI ivr_pool_color_array_append_array(ivr_pool_color_array *p_self, const ivr_pool_color_array *p_array);

ivr_error IVRAPI ivr_pool_color_array_insert(ivr_pool_color_array *p_self, const ivr_int p_idx, const ivr_color *p_data);

void IVRAPI ivr_pool_color_array_invert(ivr_pool_color_array *p_self);

void IVRAPI ivr_pool_color_array_push_back(ivr_pool_color_array *p_self, const ivr_color *p_data);

void IVRAPI ivr_pool_color_array_remove(ivr_pool_color_array *p_self, const ivr_int p_idx);

void IVRAPI ivr_pool_color_array_resize(ivr_pool_color_array *p_self, const ivr_int p_size);

ivr_pool_color_array_read_access IVRAPI *ivr_pool_color_array_read(const ivr_pool_color_array *p_self);

ivr_pool_color_array_write_access IVRAPI *ivr_pool_color_array_write(ivr_pool_color_array *p_self);

void IVRAPI ivr_pool_color_array_set(ivr_pool_color_array *p_self, const ivr_int p_idx, const ivr_color *p_data);
ivr_color IVRAPI ivr_pool_color_array_get(const ivr_pool_color_array *p_self, const ivr_int p_idx);

ivr_int IVRAPI ivr_pool_color_array_size(const ivr_pool_color_array *p_self);

ivr_bool IVRAPI ivr_pool_color_array_empty(const ivr_pool_color_array *p_self);

void IVRAPI ivr_pool_color_array_destroy(ivr_pool_color_array *p_self);

//
// read accessor functions
//

ivr_pool_byte_array_read_access IVRAPI *ivr_pool_byte_array_read_access_copy(const ivr_pool_byte_array_read_access *p_other);
const uint8_t IVRAPI *ivr_pool_byte_array_read_access_ptr(const ivr_pool_byte_array_read_access *p_read);
void IVRAPI ivr_pool_byte_array_read_access_operator_assign(ivr_pool_byte_array_read_access *p_read, ivr_pool_byte_array_read_access *p_other);
void IVRAPI ivr_pool_byte_array_read_access_destroy(ivr_pool_byte_array_read_access *p_read);

ivr_pool_int_array_read_access IVRAPI *ivr_pool_int_array_read_access_copy(const ivr_pool_int_array_read_access *p_other);
const ivr_int IVRAPI *ivr_pool_int_array_read_access_ptr(const ivr_pool_int_array_read_access *p_read);
void IVRAPI ivr_pool_int_array_read_access_operator_assign(ivr_pool_int_array_read_access *p_read, ivr_pool_int_array_read_access *p_other);
void IVRAPI ivr_pool_int_array_read_access_destroy(ivr_pool_int_array_read_access *p_read);

ivr_pool_real_array_read_access IVRAPI *ivr_pool_real_array_read_access_copy(const ivr_pool_real_array_read_access *p_other);
const ivr_real IVRAPI *ivr_pool_real_array_read_access_ptr(const ivr_pool_real_array_read_access *p_read);
void IVRAPI ivr_pool_real_array_read_access_operator_assign(ivr_pool_real_array_read_access *p_read, ivr_pool_real_array_read_access *p_other);
void IVRAPI ivr_pool_real_array_read_access_destroy(ivr_pool_real_array_read_access *p_read);

ivr_pool_string_array_read_access IVRAPI *ivr_pool_string_array_read_access_copy(const ivr_pool_string_array_read_access *p_other);
const ivr_string IVRAPI *ivr_pool_string_array_read_access_ptr(const ivr_pool_string_array_read_access *p_read);
void IVRAPI ivr_pool_string_array_read_access_operator_assign(ivr_pool_string_array_read_access *p_read, ivr_pool_string_array_read_access *p_other);
void IVRAPI ivr_pool_string_array_read_access_destroy(ivr_pool_string_array_read_access *p_read);

ivr_pool_vector2_array_read_access IVRAPI *ivr_pool_vector2_array_read_access_copy(const ivr_pool_vector2_array_read_access *p_other);
const ivr_vector2 IVRAPI *ivr_pool_vector2_array_read_access_ptr(const ivr_pool_vector2_array_read_access *p_read);
void IVRAPI ivr_pool_vector2_array_read_access_operator_assign(ivr_pool_vector2_array_read_access *p_read, ivr_pool_vector2_array_read_access *p_other);
void IVRAPI ivr_pool_vector2_array_read_access_destroy(ivr_pool_vector2_array_read_access *p_read);

ivr_pool_vector3_array_read_access IVRAPI *ivr_pool_vector3_array_read_access_copy(const ivr_pool_vector3_array_read_access *p_other);
const ivr_vector3 IVRAPI *ivr_pool_vector3_array_read_access_ptr(const ivr_pool_vector3_array_read_access *p_read);
void IVRAPI ivr_pool_vector3_array_read_access_operator_assign(ivr_pool_vector3_array_read_access *p_read, ivr_pool_vector3_array_read_access *p_other);
void IVRAPI ivr_pool_vector3_array_read_access_destroy(ivr_pool_vector3_array_read_access *p_read);

ivr_pool_color_array_read_access IVRAPI *ivr_pool_color_array_read_access_copy(const ivr_pool_color_array_read_access *p_other);
const ivr_color IVRAPI *ivr_pool_color_array_read_access_ptr(const ivr_pool_color_array_read_access *p_read);
void IVRAPI ivr_pool_color_array_read_access_operator_assign(ivr_pool_color_array_read_access *p_read, ivr_pool_color_array_read_access *p_other);
void IVRAPI ivr_pool_color_array_read_access_destroy(ivr_pool_color_array_read_access *p_read);

//
// write accessor functions
//

ivr_pool_byte_array_write_access IVRAPI *ivr_pool_byte_array_write_access_copy(const ivr_pool_byte_array_write_access *p_other);
uint8_t IVRAPI *ivr_pool_byte_array_write_access_ptr(const ivr_pool_byte_array_write_access *p_write);
void IVRAPI ivr_pool_byte_array_write_access_operator_assign(ivr_pool_byte_array_write_access *p_write, ivr_pool_byte_array_write_access *p_other);
void IVRAPI ivr_pool_byte_array_write_access_destroy(ivr_pool_byte_array_write_access *p_write);

ivr_pool_int_array_write_access IVRAPI *ivr_pool_int_array_write_access_copy(const ivr_pool_int_array_write_access *p_other);
ivr_int IVRAPI *ivr_pool_int_array_write_access_ptr(const ivr_pool_int_array_write_access *p_write);
void IVRAPI ivr_pool_int_array_write_access_operator_assign(ivr_pool_int_array_write_access *p_write, ivr_pool_int_array_write_access *p_other);
void IVRAPI ivr_pool_int_array_write_access_destroy(ivr_pool_int_array_write_access *p_write);

ivr_pool_real_array_write_access IVRAPI *ivr_pool_real_array_write_access_copy(const ivr_pool_real_array_write_access *p_other);
ivr_real IVRAPI *ivr_pool_real_array_write_access_ptr(const ivr_pool_real_array_write_access *p_write);
void IVRAPI ivr_pool_real_array_write_access_operator_assign(ivr_pool_real_array_write_access *p_write, ivr_pool_real_array_write_access *p_other);
void IVRAPI ivr_pool_real_array_write_access_destroy(ivr_pool_real_array_write_access *p_write);

ivr_pool_string_array_write_access IVRAPI *ivr_pool_string_array_write_access_copy(const ivr_pool_string_array_write_access *p_other);
ivr_string IVRAPI *ivr_pool_string_array_write_access_ptr(const ivr_pool_string_array_write_access *p_write);
void IVRAPI ivr_pool_string_array_write_access_operator_assign(ivr_pool_string_array_write_access *p_write, ivr_pool_string_array_write_access *p_other);
void IVRAPI ivr_pool_string_array_write_access_destroy(ivr_pool_string_array_write_access *p_write);

ivr_pool_vector2_array_write_access IVRAPI *ivr_pool_vector2_array_write_access_copy(const ivr_pool_vector2_array_write_access *p_other);
ivr_vector2 IVRAPI *ivr_pool_vector2_array_write_access_ptr(const ivr_pool_vector2_array_write_access *p_write);
void IVRAPI ivr_pool_vector2_array_write_access_operator_assign(ivr_pool_vector2_array_write_access *p_write, ivr_pool_vector2_array_write_access *p_other);
void IVRAPI ivr_pool_vector2_array_write_access_destroy(ivr_pool_vector2_array_write_access *p_write);

ivr_pool_vector3_array_write_access IVRAPI *ivr_pool_vector3_array_write_access_copy(const ivr_pool_vector3_array_write_access *p_other);
ivr_vector3 IVRAPI *ivr_pool_vector3_array_write_access_ptr(const ivr_pool_vector3_array_write_access *p_write);
void IVRAPI ivr_pool_vector3_array_write_access_operator_assign(ivr_pool_vector3_array_write_access *p_write, ivr_pool_vector3_array_write_access *p_other);
void IVRAPI ivr_pool_vector3_array_write_access_destroy(ivr_pool_vector3_array_write_access *p_write);

ivr_pool_color_array_write_access IVRAPI *ivr_pool_color_array_write_access_copy(const ivr_pool_color_array_write_access *p_other);
ivr_color IVRAPI *ivr_pool_color_array_write_access_ptr(const ivr_pool_color_array_write_access *p_write);
void IVRAPI ivr_pool_color_array_write_access_operator_assign(ivr_pool_color_array_write_access *p_write, ivr_pool_color_array_write_access *p_other);
void IVRAPI ivr_pool_color_array_write_access_destroy(ivr_pool_color_array_write_access *p_write);

#ifdef __cplusplus
}
#endif

#endif // IVR_POOL_ARRAYS_H
