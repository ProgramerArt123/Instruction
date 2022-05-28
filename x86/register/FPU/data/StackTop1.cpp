#include "StackTop1.h"

namespace x86
{
	namespace reg
	{
		namespace FPU
		{
			StackTop1 &StackTop1::GetInstance() {
				static StackTop1 instance;
				return instance;
			}
			
			StackTop1::StackTop1(){
				m_string.append("ST(1)");
			}
		}
	}
}