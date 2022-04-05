#include "BaseHigh.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				BaseHigh &BaseHigh::GetInstance() {
					static BaseHigh instance;
					return instance;
				}
				BaseHigh::BaseHigh() {
					m_string.append("BH");
				}
			}
		}
	}
}