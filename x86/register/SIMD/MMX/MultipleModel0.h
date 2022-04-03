#ifndef __X86_REGISTER_SIMD_XMM_MULTIPLE_MODEL_0_H__
#define __X86_REGISTER_SIMD_XMM_MULTIPLE_MODEL_0_H__
#include "MultipleModel.h"
namespace x86
{
	namespace reg
	{
		namespace SIMD
		{
			namespace XMM
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

#define XMM0 x86::reg::SIMD::XMM::MultipleModel0::GetInstance()

#endif