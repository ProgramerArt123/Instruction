#ifndef __ACCUMULATOR_H__
#define __ACCUMULATOR_H__
#include "Register.h"
class Accumulator : public Register {
public:
	static Accumulator &GetInstance();
	const char *ToString() override;
private:
	explicit Accumulator();
};

#endif