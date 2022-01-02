#ifndef __IMMEDIATE_H__
#define __IMMEDIATE_H__
#include "Operand.h"

class Immediate : public Operand {
public:
	explicit Immediate();
	const char *PureString() override;
};

#endif