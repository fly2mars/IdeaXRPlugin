#define MY_DLL_EXPORTS
#include <IVR.hpp>
#include "MyScriptClass.h"

#ifdef WIN32
#include "Windows.h"
BOOL __stdcall DllMain(HANDLE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
#endif

extern "C" void IVR_EXPORT ivr_native_init(ivr_native_init_options * o) {
    ivr::IVR::native_init(o);
}

extern "C" void IVR_EXPORT ivr_native_terminate(ivr_native_terminate_options * o) {
    ivr::IVR::native_terminate(o);
}

extern "C" void IVR_EXPORT ivr_nativescript_init(void* handle) {
    ivr::IVR::nativescript_init(handle);

    ivr::register_class<ivr::MyScriptClass>();
}

extern "C" MY_DLL_API IScriptClass* create() {
	return new ivr::MyScriptClass();
}