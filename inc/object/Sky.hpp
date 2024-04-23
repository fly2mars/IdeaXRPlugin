#ifndef IVR_CPP_SKY_HPP
#define IVR_CPP_SKY_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "Sky.hpp"

#include "Resource.hpp"
namespace ivr {


class Sky : public Resource {
	struct ___method_bindings {
		ivr_method_bind *mb_get_radiance_size;
		ivr_method_bind *mb_set_radiance_size;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Sky"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "Sky"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum RadianceSize {
		RADIANCE_SIZE_32 = 0,
		RADIANCE_SIZE_64 = 1,
		RADIANCE_SIZE_128 = 2,
		RADIANCE_SIZE_256 = 3,
		RADIANCE_SIZE_512 = 4,
		RADIANCE_SIZE_1024 = 5,
		RADIANCE_SIZE_2048 = 6,
		RADIANCE_SIZE_MAX = 7,
	};

	// constants

	// methods
	Sky::RadianceSize get_radiance_size() const;
	void set_radiance_size(const int64_t size);

};

}

#endif