#include "DataHigh.h"
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
					DataHigh &DataHigh::GetInstance() {
						static DataHigh instance;
						return instance;
					}
					DataHigh::DataHigh() {
						m_string.append("DH");
					}
				}
			}
		}
	}
}