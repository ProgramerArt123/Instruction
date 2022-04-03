#include "x86/register/general/DataExtend.h"
#include "ExtraExtend64.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			namespace size64
			{
				ExtraExtend &ExtraExtend::GetInstance() {
					static size64::ExtraExtend instance;
					return instance;
				}
				ExtraExtend::ExtraExtend() {
					m_string.append("R8");
				}
			}
		}
	}
}