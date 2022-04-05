#include "Accumulator.h"
#include "AccumulatorExtend.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				AccumulatorExtend &AccumulatorExtend::GetInstance() {
					static AccumulatorExtend instance;
					return instance;
				}
				AccumulatorExtend::AccumulatorExtend()
					: m_low(Accumulator::GetInstance()) {
					m_string.append("EAX");
				}
			}
		}
	}
}
