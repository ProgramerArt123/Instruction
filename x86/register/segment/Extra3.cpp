#include "Extra3.h"
namespace x86
{
	namespace reg
	{
		namespace segment
		{
			Extra3 &Extra3::GetInstance() {
				static Extra3 instance;
				return instance;
			}
			Extra3::Extra3() {
				m_string.append("GS");
			}
		}
	}
}