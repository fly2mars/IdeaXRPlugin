/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_VARIANT_H
#define IVR_VARIANT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_VARIANT_SIZE (16 + sizeof(int64_t))

#ifndef IVR_CORE_API_IVR_VARIANT_TYPE_DEFINED
#define IVR_CORE_API_IVR_VARIANT_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_VARIANT_SIZE];
} ivr_variant;
#endif

typedef enum ivr_variant_type {
	IVR_VARIANT_TYPE_NIL,

	// atomic types
	IVR_VARIANT_TYPE_BOOL,
	IVR_VARIANT_TYPE_INT,
	IVR_VARIANT_TYPE_REAL,
	IVR_VARIANT_TYPE_STRING,

	// math types

	IVR_VARIANT_TYPE_VECTOR2, // 5
	IVR_VARIANT_TYPE_RECT2,
	IVR_VARIANT_TYPE_VECTOR3,
	IVR_VARIANT_TYPE_TRANSFORM2D,
	IVR_VARIANT_TYPE_PLANE,
	IVR_VARIANT_TYPE_QUAT, // 10
	IVR_VARIANT_TYPE_AABB,
	IVR_VARIANT_TYPE_BASIS,
	IVR_VARIANT_TYPE_TRANSFORM,

	// misc types
	IVR_VARIANT_TYPE_COLOR,
	IVR_VARIANT_TYPE_NODE_PATH, // 15
	IVR_VARIANT_TYPE_RID,
	IVR_VARIANT_TYPE_OBJECT,
	IVR_VARIANT_TYPE_DICTIONARY,
	IVR_VARIANT_TYPE_ARRAY, // 20

	// arrays
	IVR_VARIANT_TYPE_POOL_BYTE_ARRAY,
	IVR_VARIANT_TYPE_POOL_INT_ARRAY,
	IVR_VARIANT_TYPE_POOL_REAL_ARRAY,
	IVR_VARIANT_TYPE_POOL_STRING_ARRAY,
	IVR_VARIANT_TYPE_POOL_VECTOR2_ARRAY, // 25
	IVR_VARIANT_TYPE_POOL_VECTOR3_ARRAY,
	IVR_VARIANT_TYPE_POOL_COLOR_ARRAY,
} ivr_variant_type;

typedef enum ivr_variant_call_error_error {
	IVR_CALL_ERROR_CALL_OK,
	IVR_CALL_ERROR_CALL_ERROR_INVALID_METHOD,
	IVR_CALL_ERROR_CALL_ERROR_INVALID_ARGUMENT,
	IVR_CALL_ERROR_CALL_ERROR_TOO_MANY_ARGUMENTS,
	IVR_CALL_ERROR_CALL_ERROR_TOO_FEW_ARGUMENTS,
	IVR_CALL_ERROR_CALL_ERROR_INSTANCE_IS_NULL,
} ivr_variant_call_error_error;

typedef struct ivr_variant_call_error {
	ivr_variant_call_error_error error;
	int argument;
	ivr_variant_type expected;
} ivr_variant_call_error;

typedef enum ivr_variant_operator {
	// comparison
	IVR_VARIANT_OP_EQUAL,
	IVR_VARIANT_OP_NOT_EQUAL,
	IVR_VARIANT_OP_LESS,
	IVR_VARIANT_OP_LESS_EQUAL,
	IVR_VARIANT_OP_GREATER,
	IVR_VARIANT_OP_GREATER_EQUAL,

	// mathematic
	IVR_VARIANT_OP_ADD,
	IVR_VARIANT_OP_SUBTRACT,
	IVR_VARIANT_OP_MULTIPLY,
	IVR_VARIANT_OP_DIVIDE,
	IVR_VARIANT_OP_NEGATE,
	IVR_VARIANT_OP_POSITIVE,
	IVR_VARIANT_OP_MODULE,
	IVR_VARIANT_OP_STRING_CONCAT,

	// bitwise
	IVR_VARIANT_OP_SHIFT_LEFT,
	IVR_VARIANT_OP_SHIFT_RIGHT,
	IVR_VARIANT_OP_BIT_AND,
	IVR_VARIANT_OP_BIT_OR,
	IVR_VARIANT_OP_BIT_XOR,
	IVR_VARIANT_OP_BIT_NEGATE,

	// logic
	IVR_VARIANT_OP_AND,
	IVR_VARIANT_OP_OR,
	IVR_VARIANT_OP_XOR,
	IVR_VARIANT_OP_NOT,

	// containment
	IVR_VARIANT_OP_IN,

	IVR_VARIANT_OP_MAX,
} ivr_variant_operator;

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/aabb.h>
#include <native/array.h>
#include <native/basis.h>
#include <native/color.h>
#include <native/dictionary.h>
#include <native/node_path.h>
#include <native/plane.h>
#include <native/pool_arrays.h>
#include <native/quat.h>
#include <native/rect2.h>
#include <native/rid.h>
#include <native/string.h>
#include <native/transform.h>
#include <native/transform2d.h>
#include <native/variant.h>
#include <native/vector2.h>
#include <native/vector3.h>

#include <native/native.h>

#ifdef __cplusplus
extern "C" {
#endif

ivr_variant_type IVRAPI ivr_variant_get_type(const ivr_variant *p_v);

void IVRAPI ivr_variant_new_copy(ivr_variant *r_dest, const ivr_variant *p_src);

void IVRAPI ivr_variant_new_nil(ivr_variant *r_dest);

void IVRAPI ivr_variant_new_bool(ivr_variant *r_dest, const ivr_bool p_b);
void IVRAPI ivr_variant_new_uint(ivr_variant *r_dest, const uint64_t p_i);
void IVRAPI ivr_variant_new_int(ivr_variant *r_dest, const int64_t p_i);
void IVRAPI ivr_variant_new_real(ivr_variant *r_dest, const double p_r);
void IVRAPI ivr_variant_new_string(ivr_variant *r_dest, const ivr_string *p_s);
void IVRAPI ivr_variant_new_vector2(ivr_variant *r_dest, const ivr_vector2 *p_v2);
void IVRAPI ivr_variant_new_rect2(ivr_variant *r_dest, const ivr_rect2 *p_rect2);
void IVRAPI ivr_variant_new_vector3(ivr_variant *r_dest, const ivr_vector3 *p_v3);
void IVRAPI ivr_variant_new_transform2d(ivr_variant *r_dest, const ivr_transform2d *p_t2d);
void IVRAPI ivr_variant_new_plane(ivr_variant *r_dest, const ivr_plane *p_plane);
void IVRAPI ivr_variant_new_quat(ivr_variant *r_dest, const ivr_quat *p_quat);
void IVRAPI ivr_variant_new_aabb(ivr_variant *r_dest, const ivr_aabb *p_aabb);
void IVRAPI ivr_variant_new_basis(ivr_variant *r_dest, const ivr_basis *p_basis);
void IVRAPI ivr_variant_new_transform(ivr_variant *r_dest, const ivr_transform *p_trans);
void IVRAPI ivr_variant_new_color(ivr_variant *r_dest, const ivr_color *p_color);
void IVRAPI ivr_variant_new_node_path(ivr_variant *r_dest, const ivr_node_path *p_np);
void IVRAPI ivr_variant_new_rid(ivr_variant *r_dest, const ivr_rid *p_rid);
void IVRAPI ivr_variant_new_object(ivr_variant *r_dest, const ivr_object *p_obj);
void IVRAPI ivr_variant_new_dictionary(ivr_variant *r_dest, const ivr_dictionary *p_dict);
void IVRAPI ivr_variant_new_array(ivr_variant *r_dest, const ivr_array *p_arr);
void IVRAPI ivr_variant_new_pool_byte_array(ivr_variant *r_dest, const ivr_pool_byte_array *p_pba);
void IVRAPI ivr_variant_new_pool_int_array(ivr_variant *r_dest, const ivr_pool_int_array *p_pia);
void IVRAPI ivr_variant_new_pool_real_array(ivr_variant *r_dest, const ivr_pool_real_array *p_pra);
void IVRAPI ivr_variant_new_pool_string_array(ivr_variant *r_dest, const ivr_pool_string_array *p_psa);
void IVRAPI ivr_variant_new_pool_vector2_array(ivr_variant *r_dest, const ivr_pool_vector2_array *p_pv2a);
void IVRAPI ivr_variant_new_pool_vector3_array(ivr_variant *r_dest, const ivr_pool_vector3_array *p_pv3a);
void IVRAPI ivr_variant_new_pool_color_array(ivr_variant *r_dest, const ivr_pool_color_array *p_pca);

ivr_bool IVRAPI ivr_variant_as_bool(const ivr_variant *p_self);
uint64_t IVRAPI ivr_variant_as_uint(const ivr_variant *p_self);
int64_t IVRAPI ivr_variant_as_int(const ivr_variant *p_self);
double IVRAPI ivr_variant_as_real(const ivr_variant *p_self);
ivr_string IVRAPI ivr_variant_as_string(const ivr_variant *p_self);
ivr_vector2 IVRAPI ivr_variant_as_vector2(const ivr_variant *p_self);
ivr_rect2 IVRAPI ivr_variant_as_rect2(const ivr_variant *p_self);
ivr_vector3 IVRAPI ivr_variant_as_vector3(const ivr_variant *p_self);
ivr_transform2d IVRAPI ivr_variant_as_transform2d(const ivr_variant *p_self);
ivr_plane IVRAPI ivr_variant_as_plane(const ivr_variant *p_self);
ivr_quat IVRAPI ivr_variant_as_quat(const ivr_variant *p_self);
ivr_aabb IVRAPI ivr_variant_as_aabb(const ivr_variant *p_self);
ivr_basis IVRAPI ivr_variant_as_basis(const ivr_variant *p_self);
ivr_transform IVRAPI ivr_variant_as_transform(const ivr_variant *p_self);
ivr_color IVRAPI ivr_variant_as_color(const ivr_variant *p_self);
ivr_node_path IVRAPI ivr_variant_as_node_path(const ivr_variant *p_self);
ivr_rid IVRAPI ivr_variant_as_rid(const ivr_variant *p_self);
ivr_object IVRAPI *ivr_variant_as_object(const ivr_variant *p_self);
ivr_dictionary IVRAPI ivr_variant_as_dictionary(const ivr_variant *p_self);
ivr_array IVRAPI ivr_variant_as_array(const ivr_variant *p_self);
ivr_pool_byte_array IVRAPI ivr_variant_as_pool_byte_array(const ivr_variant *p_self);
ivr_pool_int_array IVRAPI ivr_variant_as_pool_int_array(const ivr_variant *p_self);
ivr_pool_real_array IVRAPI ivr_variant_as_pool_real_array(const ivr_variant *p_self);
ivr_pool_string_array IVRAPI ivr_variant_as_pool_string_array(const ivr_variant *p_self);
ivr_pool_vector2_array IVRAPI ivr_variant_as_pool_vector2_array(const ivr_variant *p_self);
ivr_pool_vector3_array IVRAPI ivr_variant_as_pool_vector3_array(const ivr_variant *p_self);
ivr_pool_color_array IVRAPI ivr_variant_as_pool_color_array(const ivr_variant *p_self);

ivr_variant IVRAPI ivr_variant_call(ivr_variant *p_self, const ivr_string *p_method, const ivr_variant **p_args, const ivr_int p_argcount, ivr_variant_call_error *r_error);

ivr_bool IVRAPI ivr_variant_has_method(const ivr_variant *p_self, const ivr_string *p_method);

ivr_bool IVRAPI ivr_variant_operator_equal(const ivr_variant *p_self, const ivr_variant *p_other);
ivr_bool IVRAPI ivr_variant_operator_less(const ivr_variant *p_self, const ivr_variant *p_other);

ivr_bool IVRAPI ivr_variant_hash_compare(const ivr_variant *p_self, const ivr_variant *p_other);

ivr_bool IVRAPI ivr_variant_booleanize(const ivr_variant *p_self);

void IVRAPI ivr_variant_destroy(ivr_variant *p_self);

// ivr_native core 1.1

ivr_string IVRAPI ivr_variant_get_operator_name(ivr_variant_operator p_op);
void IVRAPI ivr_variant_evaluate(ivr_variant_operator p_op, const ivr_variant *p_a, const ivr_variant *p_b, ivr_variant *r_ret, ivr_bool *r_valid);

#ifdef __cplusplus
}
#endif

#endif //IVR_VARIANT_H
