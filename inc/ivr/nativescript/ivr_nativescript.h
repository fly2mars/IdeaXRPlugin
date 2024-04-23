/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_NATIVESCRIPT_H
#define IVR_NATIVESCRIPT_H

#include <native/native.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
	IVR_METHOD_RPC_MODE_DISABLED,
	IVR_METHOD_RPC_MODE_REMOTE,
	IVR_METHOD_RPC_MODE_MASTER,
	IVR_METHOD_RPC_MODE_PUPPET,
	IVR_METHOD_RPC_MODE_SLAVE = IVR_METHOD_RPC_MODE_PUPPET,
	IVR_METHOD_RPC_MODE_REMOTESYNC,
	IVR_METHOD_RPC_MODE_SYNC = IVR_METHOD_RPC_MODE_REMOTESYNC,
	IVR_METHOD_RPC_MODE_MASTERSYNC,
	IVR_METHOD_RPC_MODE_PUPPETSYNC,
} ivr_method_rpc_mode;

typedef enum {
	IVR_PROPERTY_HINT_NONE, ///< no hint provided.
	IVR_PROPERTY_HINT_RANGE, ///< hint_text = "min,max,step,slider; //slider is optional"
	IVR_PROPERTY_HINT_EXP_RANGE, ///< hint_text = "min,max,step", exponential edit
	IVR_PROPERTY_HINT_ENUM, ///< hint_text= "val1,val2,val3,etc"
	IVR_PROPERTY_HINT_EXP_EASING, /// exponential easing function (Math::ease)
	IVR_PROPERTY_HINT_LENGTH, ///< hint_text= "length" (as integer)
	IVR_PROPERTY_HINT_SPRITE_FRAME, // FIXME: Obsolete: drop whenever we can break compat
	IVR_PROPERTY_HINT_KEY_ACCEL, ///< hint_text= "length" (as integer)
	IVR_PROPERTY_HINT_FLAGS, ///< hint_text= "flag1,flag2,etc" (as bit flags)
	IVR_PROPERTY_HINT_LAYERS_2D_RENDER,
	IVR_PROPERTY_HINT_LAYERS_2D_PHYSICS,
	IVR_PROPERTY_HINT_LAYERS_3D_RENDER,
	IVR_PROPERTY_HINT_LAYERS_3D_PHYSICS,
	IVR_PROPERTY_HINT_FILE, ///< a file path must be passed, hint_text (optionally) is a filter "*.png,*.wav,*.doc,"
	IVR_PROPERTY_HINT_DIR, ///< a directory path must be passed
	IVR_PROPERTY_HINT_GLOBAL_FILE, ///< a file path must be passed, hint_text (optionally) is a filter "*.png,*.wav,*.doc,"
	IVR_PROPERTY_HINT_GLOBAL_DIR, ///< a directory path must be passed
	IVR_PROPERTY_HINT_RESOURCE_TYPE, ///< a resource object type
	IVR_PROPERTY_HINT_MULTILINE_TEXT, ///< used for string properties that can contain multiple lines
	IVR_PROPERTY_HINT_PLACEHOLDER_TEXT, ///< used to set a placeholder text for string properties
	IVR_PROPERTY_HINT_COLOR_NO_ALPHA, ///< used for ignoring alpha component when editing a color
	IVR_PROPERTY_HINT_IMAGE_COMPRESS_LOSSY,
	IVR_PROPERTY_HINT_IMAGE_COMPRESS_LOSSLESS,
	IVR_PROPERTY_HINT_OBJECT_ID,
	IVR_PROPERTY_HINT_TYPE_STRING, ///< a type string, the hint is the base type to choose
	IVR_PROPERTY_HINT_NODE_PATH_TO_EDITED_NODE, ///< so something else can provide this (used in scripts)
	IVR_PROPERTY_HINT_METHOD_OF_VARIANT_TYPE, ///< a method of a type
	IVR_PROPERTY_HINT_METHOD_OF_BASE_TYPE, ///< a method of a base type
	IVR_PROPERTY_HINT_METHOD_OF_INSTANCE, ///< a method of an instance
	IVR_PROPERTY_HINT_METHOD_OF_SCRIPT, ///< a method of a script & base
	IVR_PROPERTY_HINT_PROPERTY_OF_VARIANT_TYPE, ///< a property of a type
	IVR_PROPERTY_HINT_PROPERTY_OF_BASE_TYPE, ///< a property of a base type
	IVR_PROPERTY_HINT_PROPERTY_OF_INSTANCE, ///< a property of an instance
	IVR_PROPERTY_HINT_PROPERTY_OF_SCRIPT, ///< a property of a script & base
	IVR_PROPERTY_HINT_MAX,
} ivr_property_hint;

typedef enum {

	IVR_PROPERTY_USAGE_STORAGE = 1,
	IVR_PROPERTY_USAGE_EDITOR = 2,
	IVR_PROPERTY_USAGE_NETWORK = 4,
	IVR_PROPERTY_USAGE_EDITOR_HELPER = 8,
	IVR_PROPERTY_USAGE_CHECKABLE = 16, //used for editing global variables
	IVR_PROPERTY_USAGE_CHECKED = 32, //used for editing global variables
	IVR_PROPERTY_USAGE_INTERNATIONALIZED = 64, //hint for internationalized strings
	IVR_PROPERTY_USAGE_GROUP = 128, //used for grouping props in the editor
	IVR_PROPERTY_USAGE_CATEGORY = 256,
	IVR_PROPERTY_USAGE_STORE_IF_NONZERO = 512, // FIXME: Obsolete: drop whenever we can break compat
	IVR_PROPERTY_USAGE_STORE_IF_NONONE = 1024, // FIXME: Obsolete: drop whenever we can break compat
	IVR_PROPERTY_USAGE_NO_INSTANCE_STATE = 2048,
	IVR_PROPERTY_USAGE_RESTART_IF_CHANGED = 4096,
	IVR_PROPERTY_USAGE_SCRIPT_VARIABLE = 8192,
	IVR_PROPERTY_USAGE_STORE_IF_NULL = 16384,
	IVR_PROPERTY_USAGE_ANIMATE_AS_TRIGGER = 32768,
	IVR_PROPERTY_USAGE_UPDATE_ALL_IF_MODIFIED = 65536,

	IVR_PROPERTY_USAGE_DEFAULT = IVR_PROPERTY_USAGE_STORAGE | IVR_PROPERTY_USAGE_EDITOR | IVR_PROPERTY_USAGE_NETWORK,
	IVR_PROPERTY_USAGE_DEFAULT_INTL = IVR_PROPERTY_USAGE_STORAGE | IVR_PROPERTY_USAGE_EDITOR | IVR_PROPERTY_USAGE_NETWORK | IVR_PROPERTY_USAGE_INTERNATIONALIZED,
	IVR_PROPERTY_USAGE_NOEDITOR = IVR_PROPERTY_USAGE_STORAGE | IVR_PROPERTY_USAGE_NETWORK,
} ivr_property_usage_flags;

typedef struct {
	ivr_method_rpc_mode rset_type;

	ivr_int type;
	ivr_property_hint hint;
	ivr_string hint_string;
	ivr_property_usage_flags usage;
	ivr_variant default_value;
} ivr_property_attributes;

typedef struct {
	// instance pointer, method_data - return user data
	IVRCALLINGCONV void *(*create_func)(ivr_object *, void *);
	void *method_data;
	IVRCALLINGCONV void (*free_func)(void *);
} ivr_instance_create_func;

typedef struct {
	// instance pointer, method data, user data
	IVRCALLINGCONV void (*destroy_func)(ivr_object *, void *, void *);
	void *method_data;
	IVRCALLINGCONV void (*free_func)(void *);
} ivr_instance_destroy_func;

void IVRAPI ivr_nativescript_register_class(void *p_ivrnative_handle, const char *p_name, const char *p_base, ivr_instance_create_func p_create_func, ivr_instance_destroy_func p_destroy_func);

void IVRAPI ivr_nativescript_register_tool_class(void * p_ivrnative_handle, const char *p_name, const char *p_base, ivr_instance_create_func p_create_func, ivr_instance_destroy_func p_destroy_func);

typedef struct {
	ivr_method_rpc_mode rpc_type;
} ivr_method_attributes;

typedef struct {
	// instance pointer, method data, user data, num args, args - return result as varaint
	IVRCALLINGCONV ivr_variant (*method)(ivr_object *, void *, void *, int, ivr_variant **);
	void *method_data;
	IVRCALLINGCONV void (*free_func)(void *);
} ivr_instance_method;

void IVRAPI ivr_nativescript_register_method(void * p_ivrnative_handle, const char *p_name, const char *p_function_name, ivr_method_attributes p_attr, ivr_instance_method p_method);

typedef struct {
	// instance pointer, method data, user data, value
	IVRCALLINGCONV void (*set_func)(ivr_object *, void *, void *, ivr_variant *);
	void *method_data;
	IVRCALLINGCONV void (*free_func)(void *);
} ivr_property_set_func;

typedef struct {
	// instance pointer, method data, user data, value
	IVRCALLINGCONV ivr_variant (*get_func)(ivr_object *, void *, void *);
	void *method_data;
	IVRCALLINGCONV void (*free_func)(void *);
} ivr_property_get_func;

void IVRAPI ivr_nativescript_register_property(void * p_ivrnative_handle, const char *p_name, const char *p_path, ivr_property_attributes *p_attr, ivr_property_set_func p_set_func, ivr_property_get_func p_get_func);

typedef struct {
	ivr_string name;
	ivr_int type;
	ivr_property_hint hint;
	ivr_string hint_string;
	ivr_property_usage_flags usage;
	ivr_variant default_value;
} ivr_signal_argument;

typedef struct {
	ivr_string name;
	int num_args;
	ivr_signal_argument *args;
	int num_default_args;
	ivr_variant *default_args;
} ivr_signal;

void IVRAPI ivr_nativescript_register_signal(void * p_ivrnative_handle, const char *p_name, const ivr_signal *p_signal);

void IVRAPI *ivr_nativescript_get_userdata(ivr_object *p_instance);

/*
 *
 *
 * NativeScript 1.1
 *
 *
 */

// method registering with argument names

typedef struct {
	ivr_string name;

	ivr_variant_type type;
	ivr_property_hint hint;
	ivr_string hint_string;
} ivr_method_arg;

void IVRAPI ivr_nativescript_set_method_argument_information(void * p_ivrnative_handle, const char *p_name, const char *p_function_name, int p_num_args, const ivr_method_arg *p_args);

// documentation

void IVRAPI ivr_nativescript_set_class_documentation(void * p_ivrnative_handle, const char *p_name, ivr_string p_documentation);
void IVRAPI ivr_nativescript_set_method_documentation(void * p_ivrnative_handle, const char *p_name, const char *p_function_name, ivr_string p_documentation);
void IVRAPI ivr_nativescript_set_property_documentation(void * p_ivrnative_handle, const char *p_name, const char *p_path, ivr_string p_documentation);
void IVRAPI ivr_nativescript_set_signal_documentation(void * p_ivrnative_handle, const char *p_name, const char *p_signal_name, ivr_string p_documentation);

// type tag API

void IVRAPI ivr_nativescript_set_global_type_tag(int p_idx, const char *p_name, const void *p_type_tag);
const void IVRAPI *ivr_nativescript_get_global_type_tag(int p_idx, const char *p_name);

void IVRAPI ivr_nativescript_set_type_tag(void * p_ivrnative_handle, const char *p_name, const void *p_type_tag);
const void IVRAPI *ivr_nativescript_get_type_tag(const ivr_object *p_object);

// instance binding API

typedef struct {
	IVRCALLINGCONV void *(*alloc_instance_binding_data)(void *, const void *, ivr_object *);
	IVRCALLINGCONV void (*free_instance_binding_data)(void *, void *);
	IVRCALLINGCONV void (*refcount_incremented_instance_binding)(void *, ivr_object *);
	IVRCALLINGCONV bool (*refcount_decremented_instance_binding)(void *, ivr_object *);
	void *data;
	IVRCALLINGCONV void (*free_func)(void *);
} ivr_instance_binding_functions;

int IVRAPI ivr_nativescript_register_instance_binding_data_functions(ivr_instance_binding_functions p_binding_functions);
void IVRAPI ivr_nativescript_unregister_instance_binding_data_functions(int p_idx);

void IVRAPI *ivr_nativescript_get_instance_binding_data(int p_idx, ivr_object *p_object);

void IVRAPI ivr_nativescript_profiling_add_data(const char *p_signature, uint64_t p_time);

#ifdef __cplusplus
}
#endif

#endif //IVR_NATIVESCRIPT_H
