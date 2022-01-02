#ifndef __OPERAND_H__
#define __OPERAND_H__

#include <string>
class Operand {
public:
	explicit Operand();
	virtual ~Operand();
	const char *ToString();
protected:
	std::string m_string;
};

#endif