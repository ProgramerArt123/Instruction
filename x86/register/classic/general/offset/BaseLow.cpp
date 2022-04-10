#include "BaseLow.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace offset
				{
					BaseLow &BaseLow::GetInstance() {
						static BaseLow instance;
						return instance;
					}
					BaseLow::BaseLow() {
						m_string.append("BPL");
					}
				}
			}
		}
	}
}