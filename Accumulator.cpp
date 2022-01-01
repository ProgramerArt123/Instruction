#include "Define.h"
#include "Accumulator.h"
Accumulator &Accumulator::GetInstance() {
	static  Accumulator instance;
	return instance;
}
const char *Accumulator::ToString() {
#if FORMAT=='A'
	return "%AX";
#else
	return "AX";
#endif
}
Accumulator::Accumulator() {
	
}
