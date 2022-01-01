#ifndef __BASE_LOW_H__
#define __BASE_LOW_H__
#include "General8.h"
class BaseLow : public General8 {
public:
	static BaseLow &GetInstance();
private:
	explicit BaseLow();
};

#define BL BaseLow::GetInstance()

#endif