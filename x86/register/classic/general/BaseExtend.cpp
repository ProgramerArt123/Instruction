#include "Base.h"
#include "BaseExtend.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				BaseExtend &BaseExtend::GetInstance() {
					static BaseExtend instance;
					return instance;
				}
				BaseExtend::BaseExtend()
					: m_low(Base::GetInstance()) {
					m_string.append("EBX");
				}
			}
		}
	}
}
