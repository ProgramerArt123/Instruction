#include "StackLow.h"
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
					StackLow &StackLow::GetInstance() {
						static StackLow instance;
						return instance;
					}
					StackLow::StackLow() {
						m_string.append("SPL");
					}
				}
			}
		}
	}
}