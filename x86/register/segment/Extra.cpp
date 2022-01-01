#include "Extra.h"
namespace x86
{
	namespace reg
	{
		namespace segment
		{
			Extra &Extra::GetInstance() {
				static Extra instance;
				return instance;
			}
			Extra::Extra() {
				m_string.append("ES");
			}
		}
	}
}