#include "Instruction.h"

Instruction::Instruction(const char *mnemonic): 
	m_mnemonic(mnemonic) {
	
}
Instruction::Instruction(const char *mnemonic, Operand &source): 
	m_mnemonic(mnemonic), m_source(&source) {
	
}
Instruction::Instruction(const char *mnemonic, Operand &source, Operand &destination): 
	m_mnemonic(mnemonic), m_source(&source), m_destination(&destination) {
	
}
Instruction::Instruction(const char *mnemonic, Operand &source, Operand &destination, Operand &auxiliary): 
	m_mnemonic(mnemonic), m_source(&source), m_destination(&destination), m_auxiliary(&auxiliary) {
	
}
Instruction::~Instruction() {
	
}
const char *Instruction::ToATATString() {
	return m_mnemonic.c_str();
}
const char *Instruction::ToIntelString() {
	return m_mnemonic.c_str();
}
std::ostream &operator<<(std::ostream &out, Instruction &instruction) {
	out << instruction.ToATATString();
	return out;
}
