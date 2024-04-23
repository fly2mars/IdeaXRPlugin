#ifndef WRAPPED_HPP
#define WRAPPED_HPP

#include <native/native.h>

namespace ivr {

// This is an internal base class used by the bindings. You should not need to access its members.
class _Wrapped {
public:
	ivr_object *_owner;
	size_t _type_tag;
};

} // namespace ivr

#endif // WRAPPED_HPP
