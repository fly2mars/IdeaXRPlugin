#ifndef IVR_PROFILING_HPP
#define IVR_PROFILING_HPP

#include "OS.hpp"

namespace ivr {

class FunctionProfiling {
	char signature[1024];
	uint64_t ticks;

public:
	FunctionProfiling(const char *p_function, const int p_line) {
		snprintf(signature, 1024, "::%d::%s", p_line, p_function);
		ticks = OS::get_singleton()->get_ticks_usec();
	}
	~FunctionProfiling() {
		uint64_t t = OS::get_singleton()->get_ticks_usec() - ticks;
		if (t > 0) {
			ivr::native_profiling_add_data(signature, t);
		}
	}
};

} // namespace ivr

#ifdef DEBUG_ENABLED
#define IVR_PROFILING_FUNCTION FunctionProfiling __function_profiling(__FUNCTION__, __LINE__);
#else
#define IVR_PROFILING_HPP
#endif

#endif
