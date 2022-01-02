#ifndef __INSTRUCTION_H__
#define __INSTRUCTION_H__

#include <string>
#include <ostream>

class Operand;
class Instruction {
public:
	explicit Instruction(const char *mnemonic);
	explicit Instruction(const char *mnemonic, Operand &source);
	explicit Instruction(const char *mnemonic, Operand &source, Operand &destination);
	explicit Instruction(const char *mnemonic, Operand &source, Operand &destination, Operand &auxiliary);
	virtual ~Instruction();
	const char *String();
	friend std::ostream &operator<<(std::ostream &out, Instruction &instruction);
protected:
	std::string m_string;
};

#endif