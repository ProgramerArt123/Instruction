#ifndef __X86_REGISTER_SIMD_SSE_SSE2_MULTIPLE_MODEL_H__
#define __X86_REGISTER_SIMD_SSE_SSE2_MULTIPLE_MODEL_H__
#include "x86/register/Register.h"
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
					class MultipleModel : public Register {
					protected:
						explicit MultipleModel();
					};
				}
			}
		}
	}
}


#endif