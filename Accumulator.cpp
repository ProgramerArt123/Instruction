#include "Accumulator.h"
Accumulator &Accumulator::GetInstance() {
	static  Accumulator instance;
	return instance;
}
Accumulator::Accumulator() {
	m_string.append("AX");
}
