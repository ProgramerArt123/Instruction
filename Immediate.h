#ifndef __IMMEDIATE_H__
#define __IMMEDIATE_H__
#include "Operand.h"

class Immediate : public Operand {
public:
	const char *PureString() const override;
protected:
	explicit Immediate();
};

#endif