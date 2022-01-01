#include "AccumulatorLow.h"
#include "AccumulatorHigh.h"
#include "Accumulator.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			Accumulator &Accumulator::GetInstance() {
				static Accumulator instance;
				return instance;
			}
			Accumulator::Accumulator()
				: m_low(AccumulatorLow::GetInstance())
				, m_high(AccumulatorHigh::GetInstance()) {
				m_string.append("AX");
			}
		}
	}
}
