#include "MultipleModel8.h"

namespace x86
{
	namespace reg
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX512
				{
					namespace size64
					{
						MultipleModel8 &MultipleModel8::GetInstance() {
							static MultipleModel8 instance;
							return instance;
						}
			
						MultipleModel8::MultipleModel8() {
							m_string.append("ZMM8");
						}
					}
				}
			}
		}
	}
}