#ifndef __ACCUMULATOR_EXTEND_64_H__
#define __ACCUMULATOR_EXTEND_64_H__
#include "General64.h"
class AccumulatorExtend;
namespace size64
{
	class AccumulatorExtend : public General64 {
	public:
		static AccumulatorExtend &GetInstance();
	private:
		explicit AccumulatorExtend();
		::AccumulatorExtend &m_low;
	};
}
#define RAX size64::AccumulatorExtend::GetInstance()

#endif