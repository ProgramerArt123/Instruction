#ifndef __REGISTER_H__
#define __REGISTER_H__
#include "Operand.h"
class Register : public Operand {
public:
	explicit Register();
	const char *PureString() override;
};

#endif
