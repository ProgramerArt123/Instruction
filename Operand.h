#ifndef __OPERAND_H__
#define __OPERAND_H__

#include <string>
class Operand {
public:
	const char *String();
	virtual const char *PureString();
protected:
	explicit Operand();
	virtual ~Operand();
	std::string m_string;
};

#endif