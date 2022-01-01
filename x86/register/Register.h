#ifndef __X86_REGISTER_H__
#define __X86_REGISTER_H__
#include "x86/Operand.h"
class Register : public Operand {
public:
	const char *PureString() const override;
protected:
	explicit Register();
};

#endif
