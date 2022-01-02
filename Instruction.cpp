#include "Define.h"
#include "Operand.h"
#include "Instruction.h"

Instruction::Instruction(const char *mnemonic){
		m_string = mnemonic;
}
Instruction::Instruction(const char *mnemonic, Operand &source){
	
}
Instruction::Instruction(const char *mnemonic, Operand &source, Operand &destination){
#if FORMAT=='A'
	m_string = std::string(mnemonic) + "\t" + source.String() + ", " + destination.String();
#else
	m_string = std::string(mnemonic) + "\t" + destination.String() + ", " + source.String();
#endif
}
Instruction::Instruction(const char *mnemonic, Operand &source, Operand &destination, Operand &auxiliary){
	
}
Instruction::~Instruction() {
	
}
const char *Instruction::String() {
	return m_string.c_str();
}
std::ostream &operator<<(std::ostream &out, Instruction &instruction) {
	out << instruction.String();
	return out;
}
