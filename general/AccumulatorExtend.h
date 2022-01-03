#ifndef __GENERAL_ACCUMULATOR_EXTEND_H__
#define __GENERAL_ACCUMULATOR_EXTEND_H__
#include "General32.h"
namespace general
{
	class Accumulator;
	class AccumulatorExtend : public General32 {
	public:
		static AccumulatorExtend &GetInstance();
	private:
		explicit AccumulatorExtend();
		Accumulator &m_low;
	};
}

#define EAX general::AccumulatorExtend::GetInstance()

#endif