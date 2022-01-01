#include "../AccumulatorExtend.h"
#include "AccumulatorExtend64.h"
namespace size64
{
	AccumulatorExtend &AccumulatorExtend::GetInstance() {
		static AccumulatorExtend instance;
		return instance;
	}
	AccumulatorExtend::AccumulatorExtend()
		: m_low(AccumulatorExtend::GetInstance()) {
		m_string.append("RAX");
	}
}