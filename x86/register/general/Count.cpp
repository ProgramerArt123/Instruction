#include "Count.h"
namespace x86
{
	namespace reg
	{
		namespace general
		{
			Count &Count::GetInstance() {
				static Count instance;
				return instance;
			}

			Count::Count() {
				m_string.append("CX");
			}
		}
	}
}