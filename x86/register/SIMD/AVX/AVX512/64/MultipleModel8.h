#ifndef __X86_REGISTER_SIMD_AVX_AVX512_64_MULTIPLE_MODEL_8_H__
#define __X86_REGISTER_SIMD_AVX_AVX512_64_MULTIPLE_MODEL_8_H__
#include "x86/register/SIMD/AVX/AVX512/MultipleModel.h"
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

#define ZMM8 x86::reg::SIMD::AVX::AVX512::size64::MultipleModel8::GetInstance()

#endif