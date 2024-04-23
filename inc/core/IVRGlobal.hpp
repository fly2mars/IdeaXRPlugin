#ifndef IVR_GLOBAL_HPP
#define IVR_GLOBAL_HPP

#include "Array.hpp"
#include "String.hpp"
#include <ivrnative_api_struct.gen.h>

namespace ivr {

extern "C" const ivr_native_core_api_struct *api;
extern "C" const ivr_native_core_1_1_api_struct *core_1_1_api;
extern "C" const ivr_native_core_1_2_api_struct *core_1_2_api;

extern "C" const ivr_native_ext_nativescript_api_struct *nativescript_api;
extern "C" const ivr_native_ext_nativescript_1_1_api_struct *nativescript_1_1_api;
extern "C" const ivr_native_ext_pluginscript_api_struct *pluginscript_api;
extern "C" const ivr_native_ext_android_api_struct *android_api;
extern "C" const ivr_native_ext_arvr_api_struct *arvr_api;
extern "C" const ivr_native_ext_videodecoder_api_struct *videodecoder_api;
extern "C" const ivr_native_ext_net_api_struct *net_api;
extern "C" const ivr_native_ext_net_3_2_api_struct *net_3_2_api;

extern "C" const void *idnlib;

class IVR {
public:
	static void print(const String &message);
	static void print_warning(const String &description, const String &function, const String &file, int line);
	static void print_error(const String &description, const String &function, const String &file, int line);

	static void native_init(ivr_native_init_options *o);
	static void native_terminate(ivr_native_terminate_options *o);
	static void nativescript_init(void *handle);
	static void nativescript_terminate(void *handle);

	static void native_profiling_add_data(const char *p_signature, uint64_t p_time);

	template <class... Args>
	static void print(const String &fmt, Args... values) {
		print(fmt.format(Array::make(values...)));
	}
};

struct _RegisterState {
	static void *nativescript_handle;
	static int language_index;
};

} // namespace ivr

#endif //IVR_GLOBAL_HPP
