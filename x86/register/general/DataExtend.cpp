#include "Data.h"
#include "DataExtend.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			DataExtend &DataExtend::GetInstance() {
				static DataExtend instance;
				return instance;
			}
			DataExtend::DataExtend()
				: m_low(Data::GetInstance()) {
				m_string.append("EDX");
			}
		}
	}
}
