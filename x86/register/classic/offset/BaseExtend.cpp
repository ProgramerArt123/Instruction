#include "BaseExtend.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace offset
			{
				BaseExtend &BaseExtend::GetInstance() {
					static BaseExtend instance;
					return instance;
				}
				BaseExtend::BaseExtend() {
					m_string.append("EBP");
				}
			}
		}
	}
}