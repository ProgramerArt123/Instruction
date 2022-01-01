#include "AccumulatorLow.h"
AccumulatorLow &AccumulatorLow::GetInstance() {
	static AccumulatorLow instance;
	return instance;
}
AccumulatorLow::AccumulatorLow() {
	m_string.append("AL");
}
