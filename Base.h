#ifndef __BASE_H__
#define __BASE_H__
#include "Register.h"
class Base : public Register {
public:
	static Base &GetInstance();
	const char *ToString() override;
private:
	explicit Base();
};

#endif