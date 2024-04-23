#ifndef IVR_CPP_TCP_SERVER_HPP
#define IVR_CPP_TCP_SERVER_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace ivr {

class StreamPeerTCP;

class TCP_Server : public Reference {
	struct ___method_bindings {
		ivr_method_bind *mb_is_connection_available;
		ivr_method_bind *mb_is_listening;
		ivr_method_bind *mb_listen;
		ivr_method_bind *mb_stop;
		ivr_method_bind *mb_take_connection;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "TCP_Server"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "TCP_Server"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static TCP_Server *_new();

	// methods
	bool is_connection_available() const;
	bool is_listening() const;
	Error listen(const int64_t port, const String bind_address = "*");
	void stop();
	Ref<StreamPeerTCP> take_connection();

};

}

#endif