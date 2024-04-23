#ifndef IVR_CPP_CRYPTOKEY_HPP
#define IVR_CPP_CRYPTOKEY_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace ivr {


class CryptoKey : public Resource {
	struct ___method_bindings {
		ivr_method_bind *mb_load;
		ivr_method_bind *mb_save;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "CryptoKey"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "CryptoKey"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static CryptoKey *_new();

	// methods
	Error load(const String path);
	Error save(const String path);

};

}

#endif