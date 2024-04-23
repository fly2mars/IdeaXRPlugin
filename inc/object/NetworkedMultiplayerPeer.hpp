#ifndef IVR_CPP_NETWORKEDMULTIPLAYERPEER_HPP
#define IVR_CPP_NETWORKEDMULTIPLAYERPEER_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "NetworkedMultiplayerPeer.hpp"

#include "PacketPeer.hpp"
namespace ivr {


class NetworkedMultiplayerPeer : public PacketPeer {
	struct ___method_bindings {
		ivr_method_bind *mb_get_connection_status;
		ivr_method_bind *mb_get_packet_peer;
		ivr_method_bind *mb_get_transfer_mode;
		ivr_method_bind *mb_get_unique_id;
		ivr_method_bind *mb_is_refusing_new_connections;
		ivr_method_bind *mb_poll;
		ivr_method_bind *mb_set_refuse_new_connections;
		ivr_method_bind *mb_set_target_peer;
		ivr_method_bind *mb_set_transfer_mode;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "NetworkedMultiplayerPeer"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "NetworkedMultiplayerPeer"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ConnectionStatus {
		CONNECTION_DISCONNECTED = 0,
		CONNECTION_CONNECTING = 1,
		CONNECTION_CONNECTED = 2,
	};
	enum TransferMode {
		TRANSFER_MODE_UNRELIABLE = 0,
		TRANSFER_MODE_UNRELIABLE_ORDERED = 1,
		TRANSFER_MODE_RELIABLE = 2,
	};

	// constants
	const static int TARGET_PEER_BROADCAST = 0;
	const static int TARGET_PEER_SERVER = 1;

	// methods
	NetworkedMultiplayerPeer::ConnectionStatus get_connection_status() const;
	int64_t get_packet_peer() const;
	NetworkedMultiplayerPeer::TransferMode get_transfer_mode() const;
	int64_t get_unique_id() const;
	bool is_refusing_new_connections() const;
	void poll();
	void set_refuse_new_connections(const bool enable);
	void set_target_peer(const int64_t id);
	void set_transfer_mode(const int64_t mode);

};

}

#endif