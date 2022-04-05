#include "x86/register/classic/general/BaseExtend.h"
#include "BaseExtend64.h"
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
					BaseExtend &BaseExtend::GetInstance() {
						static size64::BaseExtend instance;
						return instance;
					}
					BaseExtend::BaseExtend()
						: m_low(general::BaseExtend::GetInstance()) {
						m_string.append("RBX");
					}
				}
			}
		}
	}
}