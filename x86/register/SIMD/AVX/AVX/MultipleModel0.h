#ifndef __X86_REGISTER_SIMD_AVX_AVX_MULTIPLE_MODEL_0_H__
#define __X86_REGISTER_SIMD_AVX_AVX_MULTIPLE_MODEL_0_H__
#include "MultipleModel.h"
namespace x86
{
	namespace reg
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX
				{
					class MultipleModel0 : public MultipleModel {
					public:
						static MultipleModel0 &GetInstance();
					private:
						explicit MultipleModel0();
					};
				}
			}
		}
	}
}

#define YMM0 x86::reg::SIMD::AVX::AVX::MultipleModel0::GetInstance()

#endif