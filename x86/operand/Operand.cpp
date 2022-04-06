#include "Operand.h"
namespace x86
{
	Operand::Operand() {
	
	}
	Operand::~Operand() {
	
	}
	const char *Operand::String()  const {
		return m_string.c_str();
	}
	const char *Operand::PureString()  const {
		return String();
	}
	const char *Operand::SizeString() const {
		return "WORD";
	}
}