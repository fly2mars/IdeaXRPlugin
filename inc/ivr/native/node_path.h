/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/

#ifndef IVR_NODE_PATH_H
#define IVR_NODE_PATH_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define IVR_NODE_PATH_SIZE sizeof(void *)

#ifndef IVR_CORE_API_IVR_NODE_PATH_TYPE_DEFINED
#define IVR_CORE_API_IVR_NODE_PATH_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_NODE_PATH_SIZE];
} ivr_node_path;
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

void IVRAPI ivr_node_path_new(ivr_node_path *r_dest, const ivr_string *p_from);
void IVRAPI ivr_node_path_new_copy(ivr_node_path *r_dest, const ivr_node_path *p_src);
void IVRAPI ivr_node_path_destroy(ivr_node_path *p_self);

ivr_string IVRAPI ivr_node_path_as_string(const ivr_node_path *p_self);

ivr_bool IVRAPI ivr_node_path_is_absolute(const ivr_node_path *p_self);

ivr_int IVRAPI ivr_node_path_get_name_count(const ivr_node_path *p_self);

ivr_string IVRAPI ivr_node_path_get_name(const ivr_node_path *p_self, const ivr_int p_idx);

ivr_int IVRAPI ivr_node_path_get_subname_count(const ivr_node_path *p_self);

ivr_string IVRAPI ivr_node_path_get_subname(const ivr_node_path *p_self, const ivr_int p_idx);

ivr_string IVRAPI ivr_node_path_get_concatenated_subnames(const ivr_node_path *p_self);

ivr_bool IVRAPI ivr_node_path_is_empty(const ivr_node_path *p_self);

ivr_bool IVRAPI ivr_node_path_operator_equal(const ivr_node_path *p_self, const ivr_node_path *p_b);

ivr_node_path ivr_node_path_get_as_property_path(const ivr_node_path *p_self);

#ifdef __cplusplus
}
#endif

#endif // IVR_NODE_PATH_H
