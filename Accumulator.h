#ifndef __ACCUMULATOR_H__
#define __ACCUMULATOR_H__
#include "Data.h"
class Accumulator : public Data {
public:
	static Accumulator &GetInstance();
private:
	explicit Accumulator();
};

#endif