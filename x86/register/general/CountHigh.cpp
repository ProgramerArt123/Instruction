#include "CountHigh.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			CountHigh &CountHigh::GetInstance() {
				static CountHigh instance;
				return instance;
			}
			CountHigh::CountHigh() {
				m_string.append("CH");
			}
		}
	}
}