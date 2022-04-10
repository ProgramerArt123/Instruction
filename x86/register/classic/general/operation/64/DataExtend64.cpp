#include "x86/register/classic/general/operation/DataExtend.h"
#include "DataExtend64.h"
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
					namespace size64
					{
						DataExtend &DataExtend::GetInstance() {
							static size64::DataExtend instance;
							return instance;
						}
						DataExtend::DataExtend()
							: m_low(EDX) {
							m_string.append("RDX");
						}
					}
				}
			}
		}
	}
}