#include "Define.h"
#include "x86/operand/Operand.h"
#include "AbstractInstruction.h"

AbstractInstruction::AbstractInstruction(const char *mnemonic) {
		m_string = mnemonic;
}
AbstractInstruction::AbstractInstruction(const char *mnemonic, const x86::Operand &source, const char *size) {
	m_string = std::string(mnemonic) + "\t" + size + " " + source.String();
}
AbstractInstruction::AbstractInstruction(const char *mnemonic, const x86::Operand &source, const x86::Operand &destination, const char *size) {
#if FORMAT=='A'
	m_string = std::string(mnemonic) + "\t" + size + " " + source.String() + ", " + destination.String();
#else
	m_string = std::string(mnemonic) + "\t" + size + " " + destination.String() + ", " + source.String();
#endif
}
AbstractInstruction::AbstractInstruction(const char *mnemonic, const x86::Operand &source, const x86::Operand &destination, const x86::Operand &auxiliary, const char *size) {
	
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
