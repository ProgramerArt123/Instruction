#include "x86/register/general/DataExtend.h"
#include "Extra.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			namespace size64
			{
				Extra &Extra::GetInstance() {
					static size64::Extra instance;
					return instance;
				}
				Extra::Extra() {
					m_string.append("R8");
				}
			}
		}
	}
}