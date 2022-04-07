#ifndef __ABSTRACT_INSTRUCTION_H__
#define __ABSTRACT_INSTRUCTION_H__

#include <string>
#include <ostream>
namespace x86
{
	class Operand; 
}
class AbstractInstruction {
public:
	
	const char *String()const;
	friend std::ostream &operator<<(std::ostream &out, const AbstractInstruction &instruction);
	
protected:
	explicit AbstractInstruction(const char *mnemonic);
	explicit AbstractInstruction(const char *mnemonic, const x86::Operand &source, bool isPure = false);
	explicit AbstractInstruction(const char *mnemonic, const x86::Operand &source, const x86::Operand &destination);
	explicit AbstractInstruction(const char *mnemonic, const x86::Operand &source, const x86::Operand &destination, const x86::Operand &auxiliary);
	virtual ~AbstractInstruction();
	std::string m_string;
};



#endif