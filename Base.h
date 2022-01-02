#ifndef __BASE_H__
#define __BASE_H__
#include "General16.h"
class Base : public General16 {
public:
	static Base &GetInstance();
private:
	explicit Base();
};

#define BX Base::GetInstance()

#endif