#ifndef RID_H
#define RID_H

#include <native/rid.h>

namespace ivr {

class Object;

class RID {
	ivr_rid _ivr_rid;

public:
	RID();

	RID(Object *p);

	ivr_rid _get_ivr_rid() const;

	int32_t get_id() const;

	inline bool is_valid() const {
		// is_valid() is not available in the C API...
		return *this != RID();
	}

	bool operator==(const RID &p_other) const;
	bool operator!=(const RID &p_other) const;
	bool operator<(const RID &p_other) const;
	bool operator>(const RID &p_other) const;
	bool operator<=(const RID &p_other) const;
	bool operator>=(const RID &p_other) const;
};

} // namespace ivr

#endif // RID_H
