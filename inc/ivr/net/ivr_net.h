/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_NATIVENET_H
#define IVR_NATIVENET_H

#include <native/native.h>

#ifdef __cplusplus
extern "C" {
#endif

// For future versions of the API we should only add new functions at the end of the structure and use the
// version info to detect whether a call is available

// Use these to populate version in your plugin
#define IVR_NET_API_MAJOR 3
#define IVR_NET_API_MINOR 1

typedef struct {

	ivr_native_api_version version; /* version of our API */
	ivr_object *data; /* User reference */

	/* This is StreamPeer */
	ivr_error (*get_data)(void *user, uint8_t *p_buffer, int p_bytes);
	ivr_error (*get_partial_data)(void *user, uint8_t *p_buffer, int p_bytes, int *r_received);
	ivr_error (*put_data)(void *user, const uint8_t *p_data, int p_bytes);
	ivr_error (*put_partial_data)(void *user, const uint8_t *p_data, int p_bytes, int *r_sent);

	int (*get_available_bytes)(const void *user);

	void *next; /* For extension? */
} ivr_net_stream_peer;

/* Binds a StreamPeerivr_native to the provided interface */
void ivr_net_bind_stream_peer(ivr_object *p_obj, const ivr_net_stream_peer *p_interface);

typedef struct {
	ivr_native_api_version version; /* version of our API */

	ivr_object *data; /* User reference */

	/* This is PacketPeer */
	ivr_error (*get_packet)(void *, const uint8_t **, int *);
	ivr_error (*put_packet)(void *, const uint8_t *, int);
	ivr_int (*get_available_packet_count)(const void *);
	ivr_int (*get_max_packet_size)(const void *);

	void *next; /* For extension? */
} ivr_net_packet_peer;

/* Binds a PacketPeerivr_native to the provided interface */
void IVRAPI ivr_net_bind_packet_peer(ivr_object *p_obj, const ivr_net_packet_peer *);

typedef struct {
	ivr_native_api_version version; /* version of our API */

	ivr_object *data; /* User reference */

	/* This is PacketPeer */
	ivr_error (*get_packet)(void *, const uint8_t **, int *);
	ivr_error (*put_packet)(void *, const uint8_t *, int);
	ivr_int (*get_available_packet_count)(const void *);
	ivr_int (*get_max_packet_size)(const void *);

	/* This is NetworkedMultiplayerPeer */
	void (*set_transfer_mode)(void *, ivr_int);
	ivr_int (*get_transfer_mode)(const void *);
	// 0 = broadcast, 1 = server, <0 = all but abs(value)
	void (*set_target_peer)(void *, ivr_int);
	ivr_int (*get_packet_peer)(const void *);
	ivr_bool (*is_server)(const void *);
	void (*poll)(void *);
	// Must be > 0, 1 is for server
	int32_t (*get_unique_id)(const void *);
	void (*set_refuse_new_connections)(void *, ivr_bool);
	ivr_bool (*is_refusing_new_connections)(const void *);
	ivr_int (*get_connection_status)(const void *);

	void *next; /* For extension? Or maybe not... */
} ivr_net_multiplayer_peer;

/* Binds a MultiplayerPeerivr_native to the provided interface */
void IVRAPI ivr_net_bind_multiplayer_peer(ivr_object *p_obj, const ivr_net_multiplayer_peer *);

#ifdef __cplusplus
}
#endif

// WebRTC Bindings
#include "net/ivr_webrtc.h"

#endif /* IVR_NATIVENET_H */
