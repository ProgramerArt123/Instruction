#include "MultipleModel0.h"

namespace x86
{
	namespace reg
	{
		namespace SIMD
		{
			namespace SSE
			{
				MultipleModel0 &MultipleModel0::GetInstance() {
					static MultipleModel0 instance;
					return instance;
				}
			
				MultipleModel0::MultipleModel0() {
					m_string.append("MM0");
				}
			}
		}
	}
}