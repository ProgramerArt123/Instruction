#include "Define.h"
#include "Operand.h"
#include "Instruction.h"

Instruction::Instruction(const char *mnemonic): 
	m_mnemonic(mnemonic) {
		m_string = m_mnemonic;
}
Instruction::Instruction(const char *mnemonic, Operand &source): 
	m_mnemonic(mnemonic), m_source(&source) {
	
}
Instruction::Instruction(const char *mnemonic, Operand &source, Operand &destination): 
	m_mnemonic(mnemonic), m_source(&source), m_destination(&destination) {
#if FORMAT=='A'
		m_string = m_mnemonic + "\t" + m_source->ToString() + ", " + m_destination->ToString();
#else
		m_string = m_mnemonic + "\t" + m_destination->ToString() + ", " + m_source->ToString();
#endif
}
Instruction::Instruction(const char *mnemonic, Operand &source, Operand &destination, Operand &auxiliary): 
	m_mnemonic(mnemonic), m_source(&source), m_destination(&destination), m_auxiliary(&auxiliary) {
	
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
