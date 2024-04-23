#ifndef IVR_CPP_STREAMPEERSSL_HPP
#define IVR_CPP_STREAMPEERSSL_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "StreamPeerSSL.hpp"

#include "StreamPeer.hpp"
namespace ivr {

class StreamPeer;
class CryptoKey;
class X509Certificate;

class StreamPeerSSL : public StreamPeer {
	struct ___method_bindings {
		ivr_method_bind *mb_accept_stream;
		ivr_method_bind *mb_connect_to_stream;
		ivr_method_bind *mb_disconnect_from_stream;
		ivr_method_bind *mb_get_status;
		ivr_method_bind *mb_is_blocking_handshake_enabled;
		ivr_method_bind *mb_poll;
		ivr_method_bind *mb_set_blocking_handshake_enabled;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "StreamPeerSSL"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "StreamPeerSSL"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Status {
		STATUS_DISCONNECTED = 0,
		STATUS_HANDSHAKING = 1,
		STATUS_CONNECTED = 2,
		STATUS_ERROR = 3,
		STATUS_ERROR_HOSTNAME_MISMATCH = 4,
	};

	// constants


	static StreamPeerSSL *_new();

	// methods
	Error accept_stream(const Ref<StreamPeer> stream, const Ref<CryptoKey> private_key, const X509Certificate *certificate, const X509Certificate *chain = nullptr);
	Error connect_to_stream(const Ref<StreamPeer> stream, const bool validate_certs = false, const String for_hostname = "", const X509Certificate *valid_certificate = nullptr);
	void disconnect_from_stream();
	StreamPeerSSL::Status get_status() const;
	bool is_blocking_handshake_enabled() const;
	void poll();
	void set_blocking_handshake_enabled(const bool enabled);

};

}

#endif