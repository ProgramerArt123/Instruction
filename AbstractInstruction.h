#ifndef __ABSTRACT_INSTRUCTION_H__
#define __ABSTRACT_INSTRUCTION_H__

#include <string>
#include <ostream>

class Operand;
class AbstractInstruction {
public:
	
	const char *String()const;
	friend std::ostream &operator<<(std::ostream &out, const AbstractInstruction &instruction);
	
protected:
	explicit AbstractInstruction(const char *mnemonic);
	explicit AbstractInstruction(const char *mnemonic, const Operand &source);
	explicit AbstractInstruction(const char *mnemonic, const Operand &source, const Operand &destination);
	explicit AbstractInstruction(const char *mnemonic, const Operand &source, const Operand &destination, const Operand &auxiliary);
	virtual ~AbstractInstruction();
	std::string m_string;
};



#endif