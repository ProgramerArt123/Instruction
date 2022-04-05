#include "Extra.h"
namespace x86
{
	namespace reg
	{
		namespace classic
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
}