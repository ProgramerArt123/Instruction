#include "CountLow.h"
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
					CountLow &CountLow::GetInstance() {
						static CountLow instance;
						return instance;
					}
					CountLow::CountLow() {
						m_string.append("CL");
					}
				}
			}
		}
	}
}