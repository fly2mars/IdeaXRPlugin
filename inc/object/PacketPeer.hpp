#ifndef IVR_CPP_PACKETPEER_HPP
#define IVR_CPP_PACKETPEER_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace ivr {


class PacketPeer : public Reference {
	struct ___method_bindings {
		ivr_method_bind *mb_get_available_packet_count;
		ivr_method_bind *mb_get_encode_buffer_max_size;
		ivr_method_bind *mb_get_packet;
		ivr_method_bind *mb_get_packet_error;
		ivr_method_bind *mb_get_var;
		ivr_method_bind *mb_is_object_decoding_allowed;
		ivr_method_bind *mb_put_packet;
		ivr_method_bind *mb_put_var;
		ivr_method_bind *mb_set_allow_object_decoding;
		ivr_method_bind *mb_set_encode_buffer_max_size;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "PacketPeer"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "PacketPeer"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	int64_t get_available_packet_count() const;
	int64_t get_encode_buffer_max_size() const;
	PoolByteArray get_packet();
	Error get_packet_error() const;
	Variant get_var(const bool allow_objects = false);
	bool is_object_decoding_allowed() const;
	Error put_packet(const PoolByteArray buffer);
	Error put_var(const Variant var, const bool full_objects = false);
	void set_allow_object_decoding(const bool enable);
	void set_encode_buffer_max_size(const int64_t max_size);

};

}

#endif