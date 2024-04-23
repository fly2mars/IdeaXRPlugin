#ifndef IVR_CPP_MAINLOOP_HPP
#define IVR_CPP_MAINLOOP_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Object.hpp"
namespace ivr {

class InputEvent;

class MainLoop : public Object {
	struct ___method_bindings {
		ivr_method_bind *mb__drop_files;
		ivr_method_bind *mb__finalize;
		ivr_method_bind *mb__global_menu_action;
		ivr_method_bind *mb__idle;
		ivr_method_bind *mb__initialize;
		ivr_method_bind *mb__input_event;
		ivr_method_bind *mb__input_text;
		ivr_method_bind *mb__iteration;
		ivr_method_bind *mb_finish;
		ivr_method_bind *mb_idle;
		ivr_method_bind *mb_init;
		ivr_method_bind *mb_input_event;
		ivr_method_bind *mb_input_text;
		ivr_method_bind *mb_iteration;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "MainLoop"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "MainLoop"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int NOTIFICATION_APP_PAUSED = 1015;
	const static int NOTIFICATION_APP_RESUMED = 1014;
	const static int NOTIFICATION_CRASH = 1012;
	const static int NOTIFICATION_OS_IME_UPDATE = 1013;
	const static int NOTIFICATION_OS_MEMORY_WARNING = 1009;
	const static int NOTIFICATION_TRANSLATION_CHANGED = 1010;
	const static int NOTIFICATION_WM_ABOUT = 1011;
	const static int NOTIFICATION_WM_FOCUS_IN = 1004;
	const static int NOTIFICATION_WM_FOCUS_OUT = 1005;
	const static int NOTIFICATION_WM_GO_BACK_REQUEST = 1007;
	const static int NOTIFICATION_WM_MOUSE_ENTER = 1002;
	const static int NOTIFICATION_WM_MOUSE_EXIT = 1003;
	const static int NOTIFICATION_WM_QUIT_REQUEST = 1006;
	const static int NOTIFICATION_WM_UNFOCUS_REQUEST = 1008;


	static MainLoop *_new();

	// methods
	void _drop_files(const PoolStringArray files, const int64_t from_screen);
	void _finalize();
	void _global_menu_action(const Variant id, const Variant meta);
	bool _idle(const real_t delta);
	void _initialize();
	void _input_event(const Ref<InputEvent> event);
	void _input_text(const String text);
	bool _iteration(const real_t delta);
	void finish();
	bool idle(const real_t delta);
	void init();
	void input_event(const Ref<InputEvent> event);
	void input_text(const String text);
	bool iteration(const real_t delta);

};

}

#endif