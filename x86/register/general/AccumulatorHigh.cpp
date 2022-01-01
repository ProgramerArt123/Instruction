#include "AccumulatorHigh.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			AccumulatorHigh &AccumulatorHigh::GetInstance() {
				static AccumulatorHigh instance;
				return instance;
			}
			AccumulatorHigh::AccumulatorHigh() {
				m_string.append("AH");
			}
		}
	}
}