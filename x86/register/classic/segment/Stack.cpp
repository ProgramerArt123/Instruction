#include "Stack.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace segment
			{
				Stack &Stack::GetInstance() {
					static Stack instance;
					return instance;
				}
				Stack::Stack() {
					m_string.append("SS");
				}
			}
		}
	}
}