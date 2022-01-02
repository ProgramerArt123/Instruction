#ifndef __BASE_H__
#define __BASE_H__
#include "Data.h"
class Base : public Data {
public:
	static Base &GetInstance();
private:
	explicit Base();
};

#endif