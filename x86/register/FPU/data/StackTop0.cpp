#include "StackTop0.h"

namespace x86
{
	namespace reg
	{
		namespace FPU
		{
			StackTop0 &StackTop0::GetInstance() {
				static StackTop0 instance;
				return instance;
			}
			
			StackTop0::StackTop0(){
				m_string.append("ST(0)");
			}
		}
	}
}