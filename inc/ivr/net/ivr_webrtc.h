/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_NATIVEWEBRTC_H
#define IVR_NATIVEWEBRTC_H

#include <native/native.h>

#ifdef __cplusplus
extern "C" {
#endif

#define IVR_NET_WEBRTC_API_MAJOR 3
#define IVR_NET_WEBRTC_API_MINOR 2

/* Library Interface (used to set default ivr_native WebRTC implementation */
typedef struct {
	ivr_native_api_version version; /* version of our API */

	/* Called when the library is unset as default interface via ivr_net_set_webrtc_library */
	void (*unregistered)();

	/* Used by WebRTCPeerConnection create when ivr_native is the default implementation. */
	/* Takes a pointer to WebRTCPeerConnectionivr_native, should bind and return OK, failure if binding was unsuccessful. */
	ivr_error (*create_peer_connection)(ivr_object *);

	void *next; /* For extension */
} ivr_net_webrtc_library;

/* WebRTCPeerConnection interface */
typedef struct {
	ivr_native_api_version version; /* version of our API */

	ivr_object *data; /* User reference */

	/* This is WebRTCPeerConnection */
	ivr_int (*get_connection_state)(const void *);

	ivr_error (*initialize)(void *, const ivr_dictionary *);
	ivr_object *(*create_data_channel)(void *, const char *p_channel_name, const ivr_dictionary *);
	ivr_error (*create_offer)(void *);
	ivr_error (*create_answer)(void *); /* unused for now, should be done automatically on set_local_description */
	ivr_error (*set_remote_description)(void *, const char *, const char *);
	ivr_error (*set_local_description)(void *, const char *, const char *);
	ivr_error (*add_ice_candidate)(void *, const char *, int, const char *);
	ivr_error (*poll)(void *);
	void (*close)(void *);

	void *next; /* For extension? */
} ivr_net_webrtc_peer_connection;

/* WebRTCDataChannel interface */
typedef struct {
	ivr_native_api_version version; /* version of our API */

	ivr_object *data; /* User reference */

	/* This is PacketPeer */
	ivr_error (*get_packet)(void *, const uint8_t **, int *);
	ivr_error (*put_packet)(void *, const uint8_t *, int);
	ivr_int (*get_available_packet_count)(const void *);
	ivr_int (*get_max_packet_size)(const void *);

	/* This is WebRTCDataChannel */
	void (*set_write_mode)(void *, ivr_int);
	ivr_int (*get_write_mode)(const void *);
	bool (*was_string_packet)(const void *);

	ivr_int (*get_ready_state)(const void *);
	const char *(*get_label)(const void *);
	bool (*is_ordered)(const void *);
	int (*get_id)(const void *);
	int (*get_max_packet_life_time)(const void *);
	int (*get_max_retransmits)(const void *);
	const char *(*get_protocol)(const void *);
	bool (*is_negotiated)(const void *);

	ivr_error (*poll)(void *);
	void (*close)(void *);

	void *next; /* For extension? */
} ivr_net_webrtc_data_channel;

/* Set the default ivr_native library */
ivr_error IVRAPI ivr_net_set_webrtc_library(const ivr_net_webrtc_library *);
/* Binds a WebRTCPeerConnectionivr_native to the provided interface */
void IVRAPI ivr_net_bind_webrtc_peer_connection(ivr_object *p_obj, const ivr_net_webrtc_peer_connection *);
/* Binds a WebRTCDataChannelivr_native to the provided interface */
void IVRAPI ivr_net_bind_webrtc_data_channel(ivr_object *p_obj, const ivr_net_webrtc_data_channel *);

#ifdef __cplusplus
}
#endif

#endif //IVR_NATIVEWEBRTC_H
