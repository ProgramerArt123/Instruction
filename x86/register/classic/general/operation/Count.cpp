#include "CountLow.h"
#include "CountHigh.h"
#include "Count.h"
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
					Count &Count::GetInstance() {
						static Count instance;
						return instance;
					}

					Count::Count() 
						: m_low(CountLow::GetInstance())
						, m_high(CountHigh::GetInstance()) {
						m_string.append("CX");
					}
				}
			}
		}
	}
}