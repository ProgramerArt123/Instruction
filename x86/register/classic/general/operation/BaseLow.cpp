#include "BaseLow.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace operation
				{
					BaseLow &BaseLow::GetInstance() {
						static BaseLow instance;
						return instance;
					}
					BaseLow::BaseLow() {
						m_string.append("BL");
					}
				}
			}
		}
	}
}