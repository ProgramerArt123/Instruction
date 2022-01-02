#include "BaseExtend.h"
namespace x86
{
	namespace reg
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