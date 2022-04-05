#include "DataLow.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				DataLow &DataLow::GetInstance() {
					static DataLow instance;
					return instance;
				}
				DataLow::DataLow() {
					m_string.append("DL");
				}
			}
		}
	}
}