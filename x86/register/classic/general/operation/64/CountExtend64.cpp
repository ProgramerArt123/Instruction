#include "x86/register/classic/general/operation/CountExtend.h"
#include "CountExtend64.h"
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
						CountExtend &CountExtend::GetInstance() {
							static size64::CountExtend instance;
							return instance;
						}
						CountExtend::CountExtend()
							: m_low(ECX) {
							m_string.append("RCX");
						}
					}
				}
			}
		}
	}
}