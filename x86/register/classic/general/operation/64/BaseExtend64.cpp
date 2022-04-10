#include "x86/register/classic/general/operation/BaseExtend.h"
#include "BaseExtend64.h"
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
						BaseExtend &BaseExtend::GetInstance() {
							static size64::BaseExtend instance;
							return instance;
						}
						BaseExtend::BaseExtend()
							: m_low(EBX) {
							m_string.append("RBX");
						}
					}
				}
			}
		}
	}
}