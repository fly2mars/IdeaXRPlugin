/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/

#ifndef IVR_NATIVE_H
#define IVR_NATIVE_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined(_WIN32) || defined(__ANDROID__)
#define IVRCALLINGCONV
#define IVRAPI IVRCALLINGCONV
#elif defined(__APPLE__)
#include "TargetConditionals.h"
#if TARGET_OS_IPHONE
#define IVRCALLINGCONV __attribute__((visibility("default")))
#define IVRAPI IVRCALLINGCONV
#elif TARGET_OS_MAC
#define IVRCALLINGCONV __attribute__((sysv_abi))
#define IVRAPI IVRCALLINGCONV
#endif
#else // !_WIN32 && !__APPLE__
#define IVRCALLINGCONV __attribute__((sysv_abi))
#define IVRAPI IVRCALLINGCONV
#endif

// This is for libraries *using* the header, NOT IDEAVR EXPOSING STUFF!!
#ifdef __GNUC__
#define IVR_EXPORT __attribute__((visibility("default")))
#elif defined(_WIN32)
#define IVR_EXPORT __declspec(dllexport)
#else
#define IVR_EXPORT
#endif

#include <stdbool.h>
#include <stdint.h>

#define ivr_API_VERSION 1

////// Error

typedef enum {
	IVR_OK, // (0)
	IVR_FAILED, ///< Generic fail error
	IVR_ERR_UNAVAILABLE, ///< What is requested is unsupported/unavailable
	IVR_ERR_UNCONFIGURED, ///< The object being used hasn't been properly set up yet
	IVR_ERR_UNAUTHORIZED, ///< Missing credentials for requested resource
	IVR_ERR_PARAMETER_RANGE_ERROR, ///< Parameter given out of range (5)
	IVR_ERR_OUT_OF_MEMORY, ///< Out of memory
	IVR_ERR_FILE_NOT_FOUND,
	IVR_ERR_FILE_BAD_DRIVE,
	IVR_ERR_FILE_BAD_PATH,
	IVR_ERR_FILE_NO_PERMISSION, // (10)
	IVR_ERR_FILE_ALREADY_IN_USE,
	IVR_ERR_FILE_CANT_OPEN,
	IVR_ERR_FILE_CANT_WRITE,
	IVR_ERR_FILE_CANT_READ,
	IVR_ERR_FILE_UNRECOGNIZED, // (15)
	IVR_ERR_FILE_CORRUPT,
	IVR_ERR_FILE_MISSING_DEPENDENCIES,
	IVR_ERR_FILE_EOF,
	IVR_ERR_CANT_OPEN, ///< Can't open a resource/socket/file
	IVR_ERR_CANT_CREATE, // (20)
	IVR_ERR_QUERY_FAILED,
	IVR_ERR_ALREADY_IN_USE,
	IVR_ERR_LOCKED, ///< resource is locked
	IVR_ERR_TIMEOUT,
	IVR_ERR_CANT_CONNECT, // (25)
	IVR_ERR_CANT_RESOLVE,
	IVR_ERR_CONNECTION_ERROR,
	IVR_ERR_CANT_ACQUIRE_RESOURCE,
	IVR_ERR_CANT_FORK,
	IVR_ERR_INVALID_DATA, ///< Data passed is invalid (30)
	IVR_ERR_INVALID_PARAMETER, ///< Parameter passed is invalid
	IVR_ERR_ALREADY_EXISTS, ///< When adding, item already exists
	IVR_ERR_DOES_NOT_EXIST, ///< When retrieving/erasing, it item does not exist
	IVR_ERR_DATABASE_CANT_READ, ///< database is full
	IVR_ERR_DATABASE_CANT_WRITE, ///< database is full (35)
	IVR_ERR_COMPILATION_FAILED,
	IVR_ERR_METHOD_NOT_FOUND,
	IVR_ERR_LINK_FAILED,
	IVR_ERR_SCRIPT_FAILED,
	IVR_ERR_CYCLIC_LINK, // (40)
	IVR_ERR_INVALID_DECLARATION,
	IVR_ERR_DUPLICATE_SYMBOL,
	IVR_ERR_PARSE_ERROR,
	IVR_ERR_BUSY,
	IVR_ERR_SKIP, // (45)
	IVR_ERR_HELP, ///< user requested help!!
	IVR_ERR_BUG, ///< a bug in the software certainly happened, due to a double check failing or unexpected behavior.
	IVR_ERR_PRINTER_ON_FIRE, /// the parallel port printer is engulfed in flames
} ivr_error;

////// bool

typedef bool ivr_bool;

#define ivr_TRUE 1
#define ivr_FALSE 0

/////// int

typedef int ivr_int;

/////// real

typedef float ivr_real;

/////// Object (forward declared)
typedef void ivr_object;

/////// String

#include <native/string.h>

/////// String name

#include <native/string_name.h>

////// Vector2

#include <native/vector2.h>

////// Rect2

#include <native/rect2.h>

////// Vector3

#include <native/vector3.h>

////// Transform2D

#include <native/transform2d.h>

/////// Plane

#include <native/plane.h>

/////// Quat

#include <native/quat.h>

/////// AABB

#include <native/aabb.h>

/////// Basis

#include <native/basis.h>

/////// Transform

#include <native/transform.h>

/////// Color

#include <native/color.h>

/////// NodePath

#include <native/node_path.h>

/////// RID

#include <native/rid.h>

/////// Dictionary

#include <native/dictionary.h>

/////// Array

#include <native/array.h>

// single API file for Pool*Array
#include <native/pool_arrays.h>

void IVRAPI ivr_object_destroy(ivr_object *p_o);

////// Variant

#include <native/variant.h>

////// Singleton API

ivr_object IVRAPI *ivr_global_get_singleton(char *p_name); // result shouldn't be freed

////// MethodBind API

typedef struct {
	uint8_t _dont_touch_that[1]; // TODO
} ivr_method_bind;

ivr_method_bind IVRAPI *ivr_method_bind_get_method(const char *p_classname, const char *p_methodname);
void IVRAPI ivr_method_bind_ptrcall(ivr_method_bind*p_method_bind, ivr_object *p_instance, const void **p_args, void *p_ret);
ivr_variant IVRAPI ivr_method_bind_call(ivr_method_bind*p_method_bind, ivr_object *p_instance, const ivr_variant **p_args, const int p_arg_count, ivr_variant_call_error *p_call_error);
////// Script API

typedef struct ivr_native_api_version {
	unsigned int major;
	unsigned int minor;
} ivr_native_api_version;

typedef struct ivr_native_api_struct ivr_native_api_struct;

struct ivr_native_api_struct {
	unsigned int type;
	ivr_native_api_version version;
	const ivr_native_api_struct *next;
};

#define IVRNATIVE_VERSION_COMPATIBLE(want, have) (want.major == have.major && want.minor <= have.minor)

typedef struct {
	ivr_bool in_editor;
	uint64_t core_api_hash;
	uint64_t editor_api_hash;
	uint64_t no_api_hash;
	void (*report_version_mismatch)(const ivr_object *p_library, const char *p_what, ivr_native_api_version p_want, ivr_native_api_version p_have);
	void (*report_loading_error)(const ivr_object *p_library, const char *p_what);
	ivr_object *ivr_native_library; // pointer to IVRNativeLibrary that is being initialized
	const struct ivr_native_core_api_struct *api_struct;
	const ivr_string *active_library_path;
} ivr_native_init_options;

typedef struct {
	ivr_bool in_editor;
} ivr_native_terminate_options;

// Calling convention?
typedef ivr_object *(*ivr_class_constructor)();

ivr_class_constructor IVRAPI ivr_get_class_constructor(const char *p_classname);

ivr_dictionary IVRAPI ivr_get_global_constants();

////// IVRNative procedure types
typedef void (*ivr_native_init_fn)(ivr_native_init_options *);
typedef void (*ivr_native_terminate_fn)(ivr_native_terminate_options *);
typedef ivr_variant (*ivr_native_procedure_fn)(ivr_array *);

////// System Functions

typedef ivr_variant (*native_call_cb)(void *, ivr_array *);
void IVRAPI ivr_register_native_call_type(const char *p_call_type, native_call_cb p_callback);

//using these will help IdeaVR track how much memory is in use in debug mode
void IVRAPI * ivr_alloc(int p_bytes);
void IVRAPI * ivr_realloc(void *p_ptr, int p_bytes);
void IVRAPI ivr_free(void *p_ptr);

//print using IdeaVR's error handler list
void IVRAPI ivr_print_error(const char *p_description, const char *p_function, const char *p_file, int p_line);
void IVRAPI ivr_print_warning(const char *p_description, const char *p_function, const char *p_file, int p_line);
void IVRAPI ivr_print(const ivr_string *p_message);

// IVRNATIVE CORE 1.0.1

bool IVRAPI ivr_is_instance_valid(const ivr_object *p_object);

//tags used for safe dynamic casting
void IVRAPI * ivr_get_class_tag(const ivr_string_name *p_class);
ivr_object IVRAPI * ivr_object_cast_to(const ivr_object *p_object, void *p_class_tag);

// equivalent of IVRScript's instance_from_id
ivr_object IVRAPI * ivr_instance_from_id(ivr_int p_instance_id);

#ifdef __cplusplus
}
#endif

#endif // IVR_NATIVE_H
