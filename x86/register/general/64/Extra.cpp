#include "Extra32.h"
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
					static Extra instance;
					return instance;
				}
				Extra::Extra()
					: m_low(Extra32::GetInstance()) {
					m_string.append("R8");
				}
			}
		}
	}
}