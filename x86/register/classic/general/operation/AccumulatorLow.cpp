#include "AccumulatorLow.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace operation
				{
					AccumulatorLow &AccumulatorLow::GetInstance() {
						static AccumulatorLow instance;
						return instance;
					}
					AccumulatorLow::AccumulatorLow() {
						m_string.append("AL");
					}
				}
			}
		}
	}
}
