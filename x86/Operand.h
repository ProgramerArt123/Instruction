#ifndef __X86_OPERAND_H__
#define __X86_OPERAND_H__

#include <string>
class Operand {
public:
	const char *String() const;
	virtual const char *PureString() const;
protected:
	explicit Operand();
	virtual ~Operand();
	std::string m_string;
};

#endif