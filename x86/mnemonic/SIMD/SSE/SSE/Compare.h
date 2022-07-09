#ifndef __X86_MNEMONIC_SIMD_SSE_SSE_COMPARE_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE_COMPARE_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE
				{
					namespace compare {
						const char *Compare_Packed_Single_128();
						const char *Compare_Scalar_Single_32();
						const char *Compare_Ordered_Scalar_Single_EFLAGS_32();
						const char *Compare_Unordered_Scalar_Single_EFLAGS_32();
					}
				}
			}
		}
	}
}

#endif