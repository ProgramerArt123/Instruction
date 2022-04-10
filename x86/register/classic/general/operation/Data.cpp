#include "DataLow.h"
#include "DataHigh.h"
#include "Data.h"
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
					Data &Data::GetInstance() {
						static Data instance;
						return instance;
					}

					Data::Data()
						: m_low(DataLow::GetInstance())
						, m_high(DataHigh::GetInstance()) {
						m_string.append("DX");
					}
				}
			}
		}
	}
}