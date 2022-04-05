#ifndef __X86_REGISTER_SIMD_SSE_SSE2_64_MULTIPLE_MODEL_8_H__
#define __X86_REGISTER_SIMD_SSE_SSE2_64_MULTIPLE_MODEL_8_H__
#include "x86/register/SIMD/SSE/SSE2/MultipleModel.h"
namespace x86
{
	namespace reg
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE2
				{
					namespace size64
					{
						class MultipleModel8 : public MultipleModel {
						public:
							static MultipleModel8 &GetInstance();
						private:
							explicit MultipleModel8();
						};
					}
				}
			}
		}
	}
}

#define XMM8 x86::reg::SIMD::SSE::SSE2::size64::MultipleModel8::GetInstance()

#endif