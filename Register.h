#ifndef __REGISTER_H__
#define __REGISTER_H__
#include "Operand.h"
class Register : public Operand {
public:
	const char *PureString() const override;
protected:
	explicit Register();
};

#endif
