#include "Accumulator.h"
#include "AccumulatorExtend.h"
AccumulatorExtend &AccumulatorExtend::GetInstance() {
	static AccumulatorExtend instance;
	return instance;
}
AccumulatorExtend::AccumulatorExtend():
	m_low(Accumulator::GetInstance()){
	m_string.append("EAX");
}
