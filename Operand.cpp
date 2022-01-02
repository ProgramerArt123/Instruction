#include "Operand.h"
Operand::Operand() {
	
}
Operand::~Operand() {
	
}
const char *Operand::String() {
	return m_string.c_str();
}
const char *Operand::PureString() {
	return String();
}