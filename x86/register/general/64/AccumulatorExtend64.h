#ifndef __X86_64_ACCUMULATOR_EXTEND_64_H__
#define __X86_64_ACCUMULATOR_EXTEND_64_H__
#include "General64.h"
namespace general
{
	class AccumulatorExtend;
}
namespace size64
{
	class AccumulatorExtend : public General64 {
	public:
		static AccumulatorExtend &GetInstance();
	private:
		explicit AccumulatorExtend();
		general::AccumulatorExtend &m_low;
	};
}
#define RAX size64::AccumulatorExtend::GetInstance()

#endif