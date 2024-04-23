/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_PLUGINSCRIPT_H
#define IVR_PLUGINSCRIPT_H

#include <native/native.h>
#include <nativescript/ivr_nativescript.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void ivr_pluginscript_instance_data;
typedef void ivr_pluginscript_script_data;
typedef void ivr_pluginscript_language_data;

// --- Instance ---

// TODO: use ivr_string_name for faster lookup ?
typedef struct {
	ivr_pluginscript_instance_data *(*init)(ivr_pluginscript_script_data *p_data, ivr_object *p_owner);
	void (*finish)(ivr_pluginscript_instance_data *p_data);

	ivr_bool (*set_prop)(ivr_pluginscript_instance_data *p_data, const ivr_string *p_name, const ivr_variant *p_value);
	ivr_bool (*get_prop)(ivr_pluginscript_instance_data *p_data, const ivr_string *p_name, ivr_variant *r_ret);

	ivr_variant (*call_method)(ivr_pluginscript_instance_data *p_data,
			const ivr_string_name *p_method, const ivr_variant **p_args,
			int p_argcount, ivr_variant_call_error *r_error);

	void (*notification)(ivr_pluginscript_instance_data *p_data, int p_notification);
	// TODO: could this rpc mode stuff be moved to the ivr_pluginscript_script_manifest ?
	ivr_method_rpc_mode (*get_rpc_mode)(ivr_pluginscript_instance_data *p_data, const ivr_string *p_method);
	ivr_method_rpc_mode (*get_rset_mode)(ivr_pluginscript_instance_data *p_data, const ivr_string *p_variable);

	//this is used by script languages that keep a reference counter of their own
	//you can make make Ref<> not die when it reaches zero, so deleting the reference
	//depends entirely from the script.
	// Note: You can set those function pointer to NULL if not needed.
	void (*refcount_incremented)(ivr_pluginscript_instance_data *p_data);
	bool (*refcount_decremented)(ivr_pluginscript_instance_data *p_data); // return true if it can die
} ivr_pluginscript_instance_desc;

// --- Script ---

typedef struct {
	ivr_pluginscript_script_data *data;
	ivr_string_name name;
	ivr_bool is_tool;
	ivr_string_name base;

	// Member lines format: {<string>: <int>}
	ivr_dictionary member_lines;
	// Method info dictionary format
	// {
	//  name: <string>
	//  args: [<dict:property>]
	//  default_args: [<variant>]
	//  return: <dict:property>
	//  flags: <int>
	//  rpc_mode: <int:ivr_method_rpc_mode>
	// }
	ivr_array methods;
	// Same format than for methods
	ivr_array signals;
	// Property info dictionary format
	// {
	//  name: <string>
	//  type: <int:ivr_variant_type>
	//  hint: <int:ivr_property_hint>
	//  hint_string: <string>
	//  usage: <int:ivr_property_usage_flags>
	//  default_value: <variant>
	//  rset_mode: <int:ivr_method_rpc_mode>
	// }
	ivr_array properties;
} ivr_pluginscript_script_manifest;

typedef struct {
	ivr_pluginscript_script_manifest (*init)(ivr_pluginscript_language_data *p_data, const ivr_string *p_path, const ivr_string *p_source, ivr_error *r_error);
	void (*finish)(ivr_pluginscript_script_data *p_data);
	ivr_pluginscript_instance_desc instance_desc;
} ivr_pluginscript_script_desc;

// --- Language ---

typedef struct {
	ivr_string_name signature;
	ivr_int call_count;
	ivr_int total_time; // In microseconds
	ivr_int self_time; // In microseconds
} ivr_pluginscript_profiling_data;

typedef struct {
	const char *name;
	const char *type;
	const char *extension;
	const char **recognized_extensions; // NULL terminated array
	ivr_pluginscript_language_data *(*init)();
	void (*finish)(ivr_pluginscript_language_data *p_data);
	const char **reserved_words; // NULL terminated array
	const char **comment_delimiters; // NULL terminated array
	const char **string_delimiters; // NULL terminated array
	ivr_bool has_named_classes;
	ivr_bool supports_builtin_mode;

	ivr_string (*get_template_source_code)(ivr_pluginscript_language_data *p_data, const ivr_string *p_class_name, const ivr_string *p_base_class_name);
	ivr_bool (*validate)(ivr_pluginscript_language_data *p_data, const ivr_string *p_script, int *r_line_error, int *r_col_error, ivr_string *r_test_error, const ivr_string *p_path, ivr_pool_string_array *r_functions);
	int (*find_function)(ivr_pluginscript_language_data *p_data, const ivr_string *p_function, const ivr_string *p_code); // Can be NULL
	ivr_string (*make_function)(ivr_pluginscript_language_data *p_data, const ivr_string *p_class, const ivr_string *p_name, const ivr_pool_string_array *p_args);
	ivr_error (*complete_code)(ivr_pluginscript_language_data *p_data, const ivr_string *p_code, const ivr_string *p_path, ivr_object *p_owner, ivr_array *r_options, ivr_bool *r_force, ivr_string *r_call_hint);
	void (*auto_indent_code)(ivr_pluginscript_language_data *p_data, ivr_string *p_code, int p_from_line, int p_to_line);

	void (*add_global_constant)(ivr_pluginscript_language_data *p_data, const ivr_string *p_variable, const ivr_variant *p_value);
	ivr_string (*debug_get_error)(ivr_pluginscript_language_data *p_data);
	int (*debug_get_stack_level_count)(ivr_pluginscript_language_data *p_data);
	int (*debug_get_stack_level_line)(ivr_pluginscript_language_data *p_data, int p_level);
	ivr_string (*debug_get_stack_level_function)(ivr_pluginscript_language_data *p_data, int p_level);
	ivr_string (*debug_get_stack_level_source)(ivr_pluginscript_language_data *p_data, int p_level);
	void (*debug_get_stack_level_locals)(ivr_pluginscript_language_data *p_data, int p_level, ivr_pool_string_array *p_locals, ivr_array *p_values, int p_max_subitems, int p_max_depth);
	void (*debug_get_stack_level_members)(ivr_pluginscript_language_data *p_data, int p_level, ivr_pool_string_array *p_members, ivr_array *p_values, int p_max_subitems, int p_max_depth);
	void (*debug_get_globals)(ivr_pluginscript_language_data *p_data, ivr_pool_string_array *p_locals, ivr_array *p_values, int p_max_subitems, int p_max_depth);
	ivr_string (*debug_parse_stack_level_expression)(ivr_pluginscript_language_data *p_data, int p_level, const ivr_string *p_expression, int p_max_subitems, int p_max_depth);

	// TODO: could this stuff be moved to the ivr_pluginscript_language_desc ?
	void (*get_public_functions)(ivr_pluginscript_language_data *p_data, ivr_array *r_functions);
	void (*get_public_constants)(ivr_pluginscript_language_data *p_data, ivr_dictionary *r_constants);

	void (*profiling_start)(ivr_pluginscript_language_data *p_data);
	void (*profiling_stop)(ivr_pluginscript_language_data *p_data);
	int (*profiling_get_accumulated_data)(ivr_pluginscript_language_data *p_data, ivr_pluginscript_profiling_data *r_info, int p_info_max);
	int (*profiling_get_frame_data)(ivr_pluginscript_language_data *p_data, ivr_pluginscript_profiling_data *r_info, int p_info_max);
	void (*profiling_frame)(ivr_pluginscript_language_data *p_data);

	ivr_pluginscript_script_desc script_desc;
} ivr_pluginscript_language_desc;

void IVRAPI ivr_pluginscript_register_language(const ivr_pluginscript_language_desc *language_desc);

#ifdef __cplusplus
}
#endif

#endif // IVR_PLUGINSCRIPT_H
