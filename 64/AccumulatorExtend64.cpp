#include "register/general/AccumulatorExtend.h"
#include "AccumulatorExtend64.h"
namespace size64
{
	AccumulatorExtend &AccumulatorExtend::GetInstance() {
		static size64::AccumulatorExtend instance;
		return instance;
	}
	AccumulatorExtend::AccumulatorExtend()
		: m_low(general::AccumulatorExtend::GetInstance()) {
		m_string.append("RAX");
	}
}