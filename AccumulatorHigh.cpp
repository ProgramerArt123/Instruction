#include "AccumulatorHigh.h"
AccumulatorHigh &AccumulatorHigh::GetInstance() {
	static AccumulatorHigh instance;
	return instance;
}
AccumulatorHigh::AccumulatorHigh() {
	m_string.append("AH");
}