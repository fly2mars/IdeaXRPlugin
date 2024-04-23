/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/

#ifndef IVR_ANDROID_IVR_H
#define IVR_ANDROID_IVR_H

#include <native/native.h>

#ifdef __ANDROID__
#include <jni.h>
#else
#define JNIEnv void
#define jobject void *
#endif

#ifdef __cplusplus
extern "C" {
#endif

JNIEnv *IVRAPI ivr_android_get_env();
jobject IVRAPI ivr_android_get_activity();
jobject IVRAPI ivr_android_get_surface();
bool IVRAPI ivr_android_is_activity_resumed();

#ifdef __cplusplus
}
#endif

#endif /* !IVR_ANDROID_IVR_H */
