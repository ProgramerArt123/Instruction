#ifndef __OPERAND_H__
#define __OPERAND_H__

class Operand {
public:
	explicit Operand();
	virtual ~Operand();
	virtual const char *ToString() = 0;
};

#endif