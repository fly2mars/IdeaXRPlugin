/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_NATIVEVIDEODECODER_H
#define IVR_NATIVEVIDEODECODER_H

#include <native/native.h>

#ifdef __cplusplus
extern "C" {
#endif

#define IDEAVRAV_API_MAJOR 0
#define IDEAVRAV_API_MINOR 1

typedef struct
{
	ivr_native_api_version version;
	void *next;
	void *(*constructor)(ivr_object *);
	void (*destructor)(void *);
	const char *(*get_plugin_name)(void);
	const char **(*get_supported_extensions)(int *count);
	ivr_bool (*open_file)(void *, void *); // data struct, and a FileAccess pointer
	ivr_real (*get_length)(const void *);
	ivr_real (*get_playback_position)(const void *);
	void (*seek)(void *, ivr_real);
	void (*set_audio_track)(void *, ivr_int);
	void (*update)(void *, ivr_real);
	ivr_pool_byte_array *(*get_videoframe)(void *);
	ivr_int (*get_audioframe)(void *, float *, int);
	ivr_int (*get_channels)(const void *);
	ivr_int (*get_mix_rate)(const void *);
	ivr_vector2 (*get_texture_size)(const void *);
} ivr_videodecoder_interface_ivrnative;

typedef int (*ivr_nativeAudioMixCallback)(void *, const float *, int);

// FileAccess wrappers for custom FFmpeg IO
ivr_int IVRAPI ivr_videodecoder_file_read(void *file_ptr, uint8_t *buf, int buf_size);
int64_t IVRAPI ivr_videodecoder_file_seek(void *file_ptr, int64_t pos, int whence);
void IVRAPI ivr_videodecoder_register_decoder(const ivr_videodecoder_interface_ivrnative *p_interface);

#ifdef __cplusplus
}
#endif

#endif /* IVR_NATIVEVIDEODECODER_H */
