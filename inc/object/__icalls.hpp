#ifndef IVR_CPP__ICALLS_HPP
#define IVR_CPP__ICALLS_HPP

#include <ivrnative_api_struct.gen.h>
#include <stdint.h>

#include <core/IVRGlobal.hpp>
#include <core/CoreTypes.hpp>
#include "Object.hpp"


namespace ivr {

static inline bool ___ivr_icall_bool_String_String(ivr_method_bind *mb, const Object *inst, const String&arg0, const String&arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_String_String_Variant(ivr_method_bind *mb, const Object *inst, const String&arg0, const String&arg1, const Variant&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_int_Object(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const Object *arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline String ___ivr_icall_String(ivr_method_bind *mb, const Object *inst) {
	String ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___ivr_icall_int_int_int_float(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const int64_t arg1, const double arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___ivr_icall_bool_String_Variant(ivr_method_bind *mb, const Object *inst, const String&arg0, const Variant&arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_String_String_Object(ivr_method_bind *mb, const Object *inst, const String&arg0, const String&arg1, const Object *arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) (arg2) ? arg2->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Dictionary(ivr_method_bind *mb, const Object *inst, const Dictionary&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Object_Object_Object(ivr_method_bind *mb, const Object *inst, const Object *arg0, const Object *arg1, const Object *arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) (arg2) ? arg2->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_bool_Vector2_Vector2(ivr_method_bind *mb, const Object *inst, const bool arg0, const Vector2&arg1, const Vector2&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___ivr_icall_bool(ivr_method_bind *mb, const Object *inst) {
	bool ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Object_Vector2_String_Color_int(ivr_method_bind *mb, const Object *inst, const Object *arg0, const Vector2&arg1, const String&arg2, const Color&arg3, const int64_t arg4) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Dictionary ___ivr_icall_Dictionary(ivr_method_bind *mb, const Object *inst) {
	Dictionary ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___ivr_icall_int_int_String(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const String&arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Variant ___ivr_icall_Variant(ivr_method_bind *mb, const Object *inst) {
	Variant ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_NodePath_Variant(ivr_method_bind *mb, const Object *inst, const NodePath&arg0, const Variant&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Object_Rect2_Rect2_Color_bool_Object_bool(ivr_method_bind *mb, const Object *inst, const Object *arg0, const Rect2&arg1, const Rect2&arg2, const Color&arg3, const bool arg4, const Object *arg5, const bool arg6) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) (arg5) ? arg5->_owner : nullptr,
		(void *) &arg6,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___ivr_icall_bool_Vector2_Variant(ivr_method_bind *mb, const Object *inst, const Vector2&arg0, const Variant&arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Vector3_float(ivr_method_bind *mb, const Object *inst, const Vector3&arg0, const double arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___ivr_icall_int_int_String_PoolStringArray_String(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const String&arg1, const PoolStringArray&arg2, const String&arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline NodePath ___ivr_icall_NodePath_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0) {
	NodePath ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Object *___ivr_icall_Object_String_bool_bool(ivr_method_bind *mb, const Object *inst, const String&arg0, const bool arg1, const bool arg2) {
	ivr_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, ret);
	}

	return (Object *) ret;
}

static inline void ___ivr_icall_void_RID_Rect2(ivr_method_bind *mb, const Object *inst, const RID&arg0, const Rect2&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline double ___ivr_icall_float(ivr_method_bind *mb, const Object *inst) {
	double ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___ivr_icall_bool_String(ivr_method_bind *mb, const Object *inst, const String&arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_String_String_int(ivr_method_bind *mb, const Object *inst, const String&arg0, const String&arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Vector2 ___ivr_icall_Vector2_Vector2(ivr_method_bind *mb, const Object *inst, const Vector2&arg0) {
	Vector2 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___ivr_icall_int_String_PoolStringArray_bool_int_String(ivr_method_bind *mb, const Object *inst, const String&arg0, const PoolStringArray&arg1, const bool arg2, const int64_t arg3, const String&arg4) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Rect2_Color_bool_float_bool(ivr_method_bind *mb, const Object *inst, const Rect2&arg0, const Color&arg1, const bool arg2, const double arg3, const bool arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___ivr_icall_bool_Object(ivr_method_bind *mb, const Object *inst, const Object *arg0) {
	bool ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Variant ___ivr_icall_Variant_bool(ivr_method_bind *mb, const Object *inst, const bool arg0) {
	Variant ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline double ___ivr_icall_float_String(ivr_method_bind *mb, const Object *inst, const String&arg0) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___ivr_icall_int_int_String_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const String&arg1, const int64_t arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Transform ___ivr_icall_Transform_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0) {
	Transform ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_int_Array_Array_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const Array&arg1, const Array&arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline NodePath ___ivr_icall_NodePath(ivr_method_bind *mb, const Object *inst) {
	NodePath ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_int_int_Color(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const int64_t arg1, const Color&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___ivr_icall_int_PoolByteArray_int_int(ivr_method_bind *mb, const Object *inst, const PoolByteArray&arg0, const int64_t arg1, const int64_t arg2) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Object *___ivr_icall_Object_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0) {
	ivr_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, ret);
	}

	return (Object *) ret;
}

static inline void ___ivr_icall_void_String_String_Color(ivr_method_bind *mb, const Object *inst, const String&arg0, const String&arg1, const Color&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___ivr_icall_bool_String_Object_String(ivr_method_bind *mb, const Object *inst, const String&arg0, const Object *arg1, const String&arg2) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___ivr_icall_bool_NodePath(ivr_method_bind *mb, const Object *inst, const NodePath&arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___ivr_icall_int_Object_bool_String_Object(ivr_method_bind *mb, const Object *inst, const Object *arg0, const bool arg1, const String&arg2, const Object *arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_RID_Vector2_String_Color_int_Color(ivr_method_bind *mb, const Object *inst, const RID&arg0, const Vector2&arg1, const String&arg2, const Color&arg3, const int64_t arg4, const Color&arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Transform2D ___ivr_icall_Transform2D_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0) {
	Transform2D ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Vector2_float_Vector2(ivr_method_bind *mb, const Object *inst, const Vector2&arg0, const double arg1, const Vector2&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Transform ___ivr_icall_Transform(ivr_method_bind *mb, const Object *inst) {
	Transform ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Vector3(ivr_method_bind *mb, const Object *inst, const Vector3&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline PoolVector3Array ___ivr_icall_PoolVector3Array(ivr_method_bind *mb, const Object *inst) {
	PoolVector3Array ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Object_bool(ivr_method_bind *mb, const Object *inst, const Object *arg0, const bool arg1) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_String_String(ivr_method_bind *mb, const Object *inst, const String&arg0, const String&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Object_Vector2_Color_Object(ivr_method_bind *mb, const Object *inst, const Object *arg0, const Vector2&arg1, const Color&arg2, const Object *arg3) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Object *___ivr_icall_Object(ivr_method_bind *mb, const Object *inst) {
	ivr_object *ret;
	ret = nullptr;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, ret);
	}

	return (Object *) ret;
}

static inline Vector2 ___ivr_icall_Vector2_String_float(ivr_method_bind *mb, const Object *inst, const String&arg0, const double arg1) {
	Vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___ivr_icall_int_PoolByteArray(ivr_method_bind *mb, const Object *inst, const PoolByteArray&arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_String_Variant(ivr_method_bind *mb, const Object *inst, const String&arg0, const Variant&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_PoolVector2Array_PoolColorArray_float_bool(ivr_method_bind *mb, const Object *inst, const PoolVector2Array&arg0, const PoolColorArray&arg1, const double arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void(ivr_method_bind *mb, const Object *inst) {
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Vector2 ___ivr_icall_Vector2_int_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const int64_t arg1) {
	Vector2 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_String_bool(ivr_method_bind *mb, const Object *inst, const String&arg0, const bool arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Vector3 ___ivr_icall_Vector3_Vector2_float(ivr_method_bind *mb, const Object *inst, const Vector2&arg0, const double arg1) {
	Vector3 ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Vector2_Variant(ivr_method_bind *mb, const Object *inst, const Vector2&arg0, const Variant&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_PoolRealArray(ivr_method_bind *mb, const Object *inst, const PoolRealArray&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_RID_Rect2_bool_Color_bool_Object(ivr_method_bind *mb, const Object *inst, const RID&arg0, const Rect2&arg1, const bool arg2, const Color&arg3, const bool arg4, const Object *arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) (arg5) ? arg5->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_PoolVector2Array_PoolColorArray_PoolVector2Array_Object_float_Object(ivr_method_bind *mb, const Object *inst, const PoolVector2Array&arg0, const PoolColorArray&arg1, const PoolVector2Array&arg2, const Object *arg3, const double arg4, const Object *arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
		(void *) &arg4,
		(void *) (arg5) ? arg5->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___ivr_icall_int_Variant_bool(ivr_method_bind *mb, const Object *inst, const Variant&arg0, const bool arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_String(ivr_method_bind *mb, const Object *inst, const String&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_String_Array_bool(ivr_method_bind *mb, const Object *inst, const String&arg0, const Array&arg1, const bool arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___ivr_icall_int_Vector2(ivr_method_bind *mb, const Object *inst, const Vector2&arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Array ___ivr_icall_Array(ivr_method_bind *mb, const Object *inst) {
	Array ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___ivr_icall_bool_float(ivr_method_bind *mb, const Object *inst, const double arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_AABB(ivr_method_bind *mb, const Object *inst, const AABB&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_int_int_PoolByteArray(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const int64_t arg1, const PoolByteArray&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline String ___ivr_icall_String_String(ivr_method_bind *mb, const Object *inst, const String&arg0) {
	String ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Object *___ivr_icall_Object_float_bool(ivr_method_bind *mb, const Object *inst, const double arg0, const bool arg1) {
	ivr_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, ret);
	}

	return (Object *) ret;
}

static inline void ___ivr_icall_void_Object_Rect2(ivr_method_bind *mb, const Object *inst, const Object *arg0, const Rect2&arg1) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Object(ivr_method_bind *mb, const Object *inst, const Object *arg0) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_int_Transform2D(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const Transform2D&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_bool(ivr_method_bind *mb, const Object *inst, const bool arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Variant ___ivr_icall_Variant_String(ivr_method_bind *mb, const Object *inst, const String&arg0) {
	Variant ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Vector3 ___ivr_icall_Vector3_Vector2(ivr_method_bind *mb, const Object *inst, const Vector2&arg0) {
	Vector3 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline PoolColorArray ___ivr_icall_PoolColorArray(ivr_method_bind *mb, const Object *inst) {
	PoolColorArray ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Array ___ivr_icall_Array_String(ivr_method_bind *mb, const Object *inst, const String&arg0) {
	Array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Dictionary ___ivr_icall_Dictionary_Vector2_Vector2_Array_int_bool_bool(ivr_method_bind *mb, const Object *inst, const Vector2&arg0, const Vector2&arg1, const Array&arg2, const int64_t arg3, const bool arg4, const bool arg5) {
	Dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Dictionary ___ivr_icall_Dictionary_Object(ivr_method_bind *mb, const Object *inst, const Object *arg0) {
	Dictionary ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_int_int_Vector2_float(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const int64_t arg1, const Vector2&arg2, const double arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_int_float_float_bool(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const double arg1, const double arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_String_Object_String(ivr_method_bind *mb, const Object *inst, const String&arg0, const Object *arg1, const String&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Array ___ivr_icall_Array_Object(ivr_method_bind *mb, const Object *inst, const Object *arg0) {
	Array ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___ivr_icall_int_String_int(ivr_method_bind *mb, const Object *inst, const String&arg0, const int64_t arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___ivr_icall_bool_Vector2_Rect2(ivr_method_bind *mb, const Object *inst, const Vector2&arg0, const Rect2&arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Array(ivr_method_bind *mb, const Object *inst, const Array&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___ivr_icall_int_String_int_bool_bool(ivr_method_bind *mb, const Object *inst, const String&arg0, const int64_t arg1, const bool arg2, const bool arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_RID_Vector2_Color_bool_Object(ivr_method_bind *mb, const Object *inst, const RID&arg0, const Vector2&arg1, const Color&arg2, const bool arg3, const Object *arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) (arg4) ? arg4->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Object_Object_Object_Transform2D_Color(ivr_method_bind *mb, const Object *inst, const Object *arg0, const Object *arg1, const Object *arg2, const Transform2D&arg3, const Color&arg4) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) &arg3,
		(void *) &arg4,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline PoolStringArray ___ivr_icall_PoolStringArray_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0) {
	PoolStringArray ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Variant ___ivr_icall_Variant_NodePath(ivr_method_bind *mb, const Object *inst, const NodePath&arg0) {
	Variant ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Rect2 ___ivr_icall_Rect2(ivr_method_bind *mb, const Object *inst) {
	Rect2 ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Vector2_bool(ivr_method_bind *mb, const Object *inst, const Vector2&arg0, const bool arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Color ___ivr_icall_Color_Vector2(ivr_method_bind *mb, const Object *inst, const Vector2&arg0) {
	Color ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Object *___ivr_icall_Object_String_String(ivr_method_bind *mb, const Object *inst, const String&arg0, const String&arg1) {
	ivr_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, ret);
	}

	return (Object *) ret;
}

static inline void ___ivr_icall_void_int_String_Variant(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const String&arg1, const Variant&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Color(ivr_method_bind *mb, const Object *inst, const Color&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___ivr_icall_int_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline NodePath ___ivr_icall_NodePath_Object(ivr_method_bind *mb, const Object *inst, const Object *arg0) {
	NodePath ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___ivr_icall_int_String_Object_String_Array_int(ivr_method_bind *mb, const Object *inst, const String&arg0, const Object *arg1, const String&arg2, const Array&arg3, const int64_t arg4) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_int_bool(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const bool arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline PoolStringArray ___ivr_icall_PoolStringArray(ivr_method_bind *mb, const Object *inst) {
	PoolStringArray ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___ivr_icall_bool_Vector2(ivr_method_bind *mb, const Object *inst, const Vector2&arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___ivr_icall_int_Object_Object_Object_Object(ivr_method_bind *mb, const Object *inst, const Object *arg0, const Object *arg1, const Object *arg2, const Object *arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) (arg2) ? arg2->_owner : nullptr,
		(void *) (arg3) ? arg3->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Transform2D ___ivr_icall_Transform2D(ivr_method_bind *mb, const Object *inst) {
	Transform2D ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_PoolVector3Array(ivr_method_bind *mb, const Object *inst, const PoolVector3Array&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___ivr_icall_int_Transform_float(ivr_method_bind *mb, const Object *inst, const Transform&arg0, const double arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_float(ivr_method_bind *mb, const Object *inst, const double arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Object *___ivr_icall_Object_String(ivr_method_bind *mb, const Object *inst, const String&arg0) {
	ivr_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, ret);
	}

	return (Object *) ret;
}

static inline void ___ivr_icall_void_RID_Rect2_Rect2_Color_bool_Object_bool(ivr_method_bind *mb, const Object *inst, const RID&arg0, const Rect2&arg1, const Rect2&arg2, const Color&arg3, const bool arg4, const Object *arg5, const bool arg6) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) (arg5) ? arg5->_owner : nullptr,
		(void *) &arg6,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___ivr_icall_int(ivr_method_bind *mb, const Object *inst) {
	int64_t ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_int_float_bool_bool(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const double arg1, const bool arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_int_String_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const String&arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Vector2 ___ivr_icall_Vector2_Vector3(ivr_method_bind *mb, const Object *inst, const Vector3&arg0) {
	Vector2 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_String_Color(ivr_method_bind *mb, const Object *inst, const String&arg0, const Color&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___ivr_icall_int_String_bool(ivr_method_bind *mb, const Object *inst, const String&arg0, const bool arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_int_int_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const int64_t arg1, const int64_t arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_float_float_float(ivr_method_bind *mb, const Object *inst, const double arg0, const double arg1, const double arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_PoolVector2Array_Color_PoolVector2Array_Object_Object_bool(ivr_method_bind *mb, const Object *inst, const PoolVector2Array&arg0, const Color&arg1, const PoolVector2Array&arg2, const Object *arg3, const Object *arg4, const bool arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
		(void *) (arg4) ? arg4->_owner : nullptr,
		(void *) &arg5,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Object *___ivr_icall_Object_Object(ivr_method_bind *mb, const Object *inst, const Object *arg0) {
	ivr_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, ret);
	}

	return (Object *) ret;
}

static inline Object *___ivr_icall_Object_bool(ivr_method_bind *mb, const Object *inst, const bool arg0) {
	ivr_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, ret);
	}

	return (Object *) ret;
}

static inline double ___ivr_icall_float_RID_Vector2_int_int_Color_bool(ivr_method_bind *mb, const Object *inst, const RID&arg0, const Vector2&arg1, const int64_t arg2, const int64_t arg3, const Color&arg4, const bool arg5) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Vector2_Color(ivr_method_bind *mb, const Object *inst, const Vector2&arg0, const Color&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Vector2 ___ivr_icall_Vector2(ivr_method_bind *mb, const Object *inst) {
	Vector2 ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline PoolByteArray ___ivr_icall_PoolByteArray(ivr_method_bind *mb, const Object *inst) {
	PoolByteArray ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Object_Object_Rect2_Vector2(ivr_method_bind *mb, const Object *inst, const Object *arg0, const Object *arg1, const Rect2&arg2, const Vector2&arg3) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_PoolVector2Array_Color_float_bool(ivr_method_bind *mb, const Object *inst, const PoolVector2Array&arg0, const Color&arg1, const double arg2, const bool arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_PoolVector2Array_PoolColorArray_PoolVector2Array_Object_Object_bool(ivr_method_bind *mb, const Object *inst, const PoolVector2Array&arg0, const PoolColorArray&arg1, const PoolVector2Array&arg2, const Object *arg3, const Object *arg4, const bool arg5) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) (arg3) ? arg3->_owner : nullptr,
		(void *) (arg4) ? arg4->_owner : nullptr,
		(void *) &arg5,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline double ___ivr_icall_float_Object_Vector2_String_String_Color(ivr_method_bind *mb, const Object *inst, const Object *arg0, const Vector2&arg1, const String&arg2, const String&arg3, const Color&arg4) {
	double ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Object_Rect2_Vector2(ivr_method_bind *mb, const Object *inst, const Object *arg0, const Rect2&arg1, const Vector2&arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Variant ___ivr_icall_Variant_String_Array(ivr_method_bind *mb, const Object *inst, const String&arg0, const Array&arg1) {
	Variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Color ___ivr_icall_Color_int_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const int64_t arg1) {
	Color ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_int_int_bool_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const int64_t arg1, const bool arg2, const int64_t arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Array ___ivr_icall_Array_Vector2_int_int_Array_int_bool_bool(ivr_method_bind *mb, const Object *inst, const Vector2&arg0, const int64_t arg1, const int64_t arg2, const Array&arg3, const int64_t arg4, const bool arg5, const bool arg6) {
	Array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Color ___ivr_icall_Color_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0) {
	Color ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_int_Color(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const Color&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Vector2_float_float_float_int_Color_float_bool(ivr_method_bind *mb, const Object *inst, const Vector2&arg0, const double arg1, const double arg2, const double arg3, const int64_t arg4, const Color&arg5, const double arg6, const bool arg7) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
		(void *) &arg6,
		(void *) &arg7,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_bool_int(ivr_method_bind *mb, const Object *inst, const bool arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Object *___ivr_icall_Object_NodePath(ivr_method_bind *mb, const Object *inst, const NodePath&arg0) {
	ivr_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, ret);
	}

	return (Object *) ret;
}

static inline NodePath ___ivr_icall_NodePath_int_bool(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const bool arg1) {
	NodePath ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Variant_Object(ivr_method_bind *mb, const Object *inst, const Variant&arg0, const Object *arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_NodePath(ivr_method_bind *mb, const Object *inst, const NodePath&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Transform(ivr_method_bind *mb, const Object *inst, const Transform&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Transform2D(ivr_method_bind *mb, const Object *inst, const Transform2D&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline String ___ivr_icall_String_int_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const int64_t arg1) {
	String ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Vector3_Vector3_Vector3(ivr_method_bind *mb, const Object *inst, const Vector3&arg0, const Vector3&arg1, const Vector3&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Variant ___ivr_icall_Variant_int_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const int64_t arg1) {
	Variant ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Basis(ivr_method_bind *mb, const Object *inst, const Basis&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline bool ___ivr_icall_bool_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_PoolVector2Array(ivr_method_bind *mb, const Object *inst, const PoolVector2Array&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_int_String(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const String&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Array ___ivr_icall_Array_Vector2_int_Array_int_bool_bool(ivr_method_bind *mb, const Object *inst, const Vector2&arg0, const int64_t arg1, const Array&arg2, const int64_t arg3, const bool arg4, const bool arg5) {
	Array ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___ivr_icall_bool_Vector3(ivr_method_bind *mb, const Object *inst, const Vector3&arg0) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Array ___ivr_icall_Array_NodePath(ivr_method_bind *mb, const Object *inst, const NodePath&arg0) {
	Array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_int_String_String_Variant(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const String&arg1, const String&arg2, const Variant&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Vector3_Vector3(ivr_method_bind *mb, const Object *inst, const Vector3&arg0, const Vector3&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Array ___ivr_icall_Array_PoolByteArray(ivr_method_bind *mb, const Object *inst, const PoolByteArray&arg0) {
	Array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline RID ___ivr_icall_RID(ivr_method_bind *mb, const Object *inst) {
	RID ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Vector2(ivr_method_bind *mb, const Object *inst, const Vector2&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Variant_bool(ivr_method_bind *mb, const Object *inst, const Variant&arg0, const bool arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline double ___ivr_icall_float_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0) {
	double ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline PoolVector2Array ___ivr_icall_PoolVector2Array(ivr_method_bind *mb, const Object *inst) {
	PoolVector2Array ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Object *___ivr_icall_Object_Rect2(ivr_method_bind *mb, const Object *inst, const Rect2&arg0) {
	ivr_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, ret);
	}

	return (Object *) ret;
}

static inline String ___ivr_icall_String_Vector2(ivr_method_bind *mb, const Object *inst, const Vector2&arg0) {
	String ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_String_Object(ivr_method_bind *mb, const Object *inst, const String&arg0, const Object *arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) (arg1) ? arg1->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline PoolIntArray ___ivr_icall_PoolIntArray(ivr_method_bind *mb, const Object *inst) {
	PoolIntArray ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline bool ___ivr_icall_bool_String_bool(ivr_method_bind *mb, const Object *inst, const String&arg0, const bool arg1) {
	bool ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Rect2(ivr_method_bind *mb, const Object *inst, const Rect2&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Variant ___ivr_icall_Variant_Vector2(ivr_method_bind *mb, const Object *inst, const Vector2&arg0) {
	Variant ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline String ___ivr_icall_String_Dictionary(ivr_method_bind *mb, const Object *inst, const Dictionary&arg0) {
	String ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Object *___ivr_icall_Object_float(ivr_method_bind *mb, const Object *inst, const double arg0) {
	ivr_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, ret);
	}

	return (Object *) ret;
}

static inline void ___ivr_icall_void_Object_Object_bool(ivr_method_bind *mb, const Object *inst, const Object *arg0, const Object *arg1, const bool arg2) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) (arg1) ? arg1->_owner : nullptr,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Object *___ivr_icall_Object_Transform2D_Vector2(ivr_method_bind *mb, const Object *inst, const Transform2D&arg0, const Vector2&arg1) {
	ivr_object *ret;
	ret = nullptr;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	if (ret) {
		return (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, ret);
	}

	return (Object *) ret;
}

static inline int64_t ___ivr_icall_int_String_String(ivr_method_bind *mb, const Object *inst, const String&arg0, const String&arg1) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Object_int(ivr_method_bind *mb, const Object *inst, const Object *arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_RID(ivr_method_bind *mb, const Object *inst, const RID&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_int_NodePath(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const NodePath&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_int_int_bool_int_PoolByteArray(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const int64_t arg1, const bool arg2, const int64_t arg3, const PoolByteArray&arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_int_Transform(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const Transform&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_float_Vector2_float_float(ivr_method_bind *mb, const Object *inst, const double arg0, const Vector2&arg1, const double arg2, const double arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline PoolStringArray ___ivr_icall_PoolStringArray_String(ivr_method_bind *mb, const Object *inst, const String&arg0) {
	PoolStringArray ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Array ___ivr_icall_Array_Object_Vector3(ivr_method_bind *mb, const Object *inst, const Object *arg0, const Vector3&arg1) {
	Array ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Vector3 ___ivr_icall_Vector3_Vector3(ivr_method_bind *mb, const Object *inst, const Vector3&arg0) {
	Vector3 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_Vector2_Vector2_Color_float_bool(ivr_method_bind *mb, const Object *inst, const Vector2&arg0, const Vector2&arg1, const Color&arg2, const double arg3, const bool arg4) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Object_Rect2_bool_Color_bool_Object(ivr_method_bind *mb, const Object *inst, const Object *arg0, const Rect2&arg1, const bool arg2, const Color&arg3, const bool arg4, const Object *arg5) {
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) (arg5) ? arg5->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_String_int(ivr_method_bind *mb, const Object *inst, const String&arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_String_Array(ivr_method_bind *mb, const Object *inst, const String&arg0, const Array&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Basis ___ivr_icall_Basis(ivr_method_bind *mb, const Object *inst) {
	Basis ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_int_int_PoolStringArray_PoolByteArray(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const int64_t arg1, const PoolStringArray&arg2, const PoolByteArray&arg3) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline String ___ivr_icall_String_String_int(ivr_method_bind *mb, const Object *inst, const String&arg0, const int64_t arg1) {
	String ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Array ___ivr_icall_Array_Object_int(ivr_method_bind *mb, const Object *inst, const Object *arg0, const int64_t arg1) {
	Array ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Vector3 ___ivr_icall_Vector3(ivr_method_bind *mb, const Object *inst) {
	Vector3 ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___ivr_icall_int_String(ivr_method_bind *mb, const Object *inst, const String&arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Dictionary ___ivr_icall_Dictionary_Vector3_Vector3_Array_int_bool_bool(ivr_method_bind *mb, const Object *inst, const Vector3&arg0, const Vector3&arg1, const Array&arg2, const int64_t arg3, const bool arg4, const bool arg5) {
	Dictionary ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
		(void *) &arg4,
		(void *) &arg5,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___ivr_icall_int_Object(ivr_method_bind *mb, const Object *inst, const Object *arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) (arg0) ? arg0->_owner : nullptr,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_int_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline int64_t ___ivr_icall_int_bool(ivr_method_bind *mb, const Object *inst, const bool arg0) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline int64_t ___ivr_icall_int_int_String_PoolStringArray_PoolByteArray(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const String&arg1, const PoolStringArray&arg2, const PoolByteArray&arg3) {
	int64_t ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
		(void *) &arg3,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Vector2 ___ivr_icall_Vector2_String(ivr_method_bind *mb, const Object *inst, const String&arg0) {
	Vector2 ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline AABB ___ivr_icall_AABB(ivr_method_bind *mb, const Object *inst) {
	AABB ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline String ___ivr_icall_String_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0) {
	String ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Color ___ivr_icall_Color_String_String(ivr_method_bind *mb, const Object *inst, const String&arg0, const String&arg1) {
	Color ret;
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline void ___ivr_icall_void_PoolStringArray_int(ivr_method_bind *mb, const Object *inst, const PoolStringArray&arg0, const int64_t arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Vector2_float_Color(ivr_method_bind *mb, const Object *inst, const Vector2&arg0, const double arg1, const Color&arg2) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
		(void *) &arg2,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_int_float(ivr_method_bind *mb, const Object *inst, const int64_t arg0, const double arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_Variant_Variant(ivr_method_bind *mb, const Object *inst, const Variant&arg0, const Variant&arg1) {
	const void *args[] = {
		(void *) &arg0,
		(void *) &arg1,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline void ___ivr_icall_void_PoolColorArray(ivr_method_bind *mb, const Object *inst, const PoolColorArray&arg0) {
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, nullptr);
}

static inline Color ___ivr_icall_Color(ivr_method_bind *mb, const Object *inst) {
	Color ret;
	const void *args[1] = {
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

static inline Array ___ivr_icall_Array_int(ivr_method_bind *mb, const Object *inst, const int64_t arg0) {
	Array ret;
	const void *args[] = {
		(void *) &arg0,
	};

	ivr::api->ivr_method_bind_ptrcall(mb, inst->_owner, args, &ret);
	return ret;
}

}

#endif