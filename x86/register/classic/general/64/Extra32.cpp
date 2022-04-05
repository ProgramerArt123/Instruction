#include "Extra32.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace size64
				{
					Extra32 &Extra32::GetInstance() {
						static Extra32 instance;
						return instance;
					}
					Extra32::Extra32() {
						m_string.append("R8D");
					}
				}
			}
		}
	}
}
