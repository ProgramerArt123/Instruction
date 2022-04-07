#include "x86/register/classic/general/DataExtend.h"
#include "DataExtend64.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace size64
				{
					DataExtend &DataExtend::GetInstance() {
						static size64::DataExtend instance;
						return instance;
					}
					DataExtend::DataExtend()
						: m_low(general::DataExtend::GetInstance()) {
						m_string.append("RDX");
					}
				}
			}
		}
	}
}