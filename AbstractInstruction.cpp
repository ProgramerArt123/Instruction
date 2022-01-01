#include "Define.h"
#include "x86/Operand.h"
#include "AbstractInstruction.h"

AbstractInstruction::AbstractInstruction(const char *mnemonic) {
		m_string = mnemonic;
}
AbstractInstruction::AbstractInstruction(const char *mnemonic, const Operand &source) {
	
}
AbstractInstruction::AbstractInstruction(const char *mnemonic, const Operand &source, const Operand &destination) {
#if FORMAT=='A'
	m_string = std::string(mnemonic) + "\t" + source.String() + ", " + destination.String();
#else
	m_string = std::string(mnemonic) + "\t" + destination.String() + ", " + source.String();
#endif
}
AbstractInstruction::AbstractInstruction(const char *mnemonic, const Operand &source, const Operand &destination, const Operand &auxiliary) {
	
}
AbstractInstruction::~AbstractInstruction() {
	
}
const char *AbstractInstruction::String()const {
	return m_string.c_str();
}
std::ostream &operator<<(std::ostream &out, const AbstractInstruction &instruction) {
	out << instruction.String();
	return out;
}
