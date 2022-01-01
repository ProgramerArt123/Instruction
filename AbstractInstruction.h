#ifndef __ABSTRACT_INSTRUCTION_H__
#define __ABSTRACT_INSTRUCTION_H__

#include <string>
#include <ostream>

class Operand;
class AbstractInstruction {
public:
	
	const char *String();
	friend std::ostream &operator<<(std::ostream &out, AbstractInstruction &instruction);
	
protected:
	explicit AbstractInstruction(const char *mnemonic);
	explicit AbstractInstruction(const char *mnemonic, Operand &source);
	explicit AbstractInstruction(const char *mnemonic, Operand &source, Operand &destination);
	explicit AbstractInstruction(const char *mnemonic, Operand &source, Operand &destination, Operand &auxiliary);
	virtual ~AbstractInstruction();
	std::string m_string;
};



#endif