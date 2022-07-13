#ifndef __X86_MNEMONIC_SIMD_SSE_SSE2_COMPARE_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE2_COMPARE_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE2
				{
					namespace compare {
						const char *Compare_Packed_Double_128();
						const char *Compare_Scalar_Double_64();
						const char *Compare_Ordered_Scalar_Double_EFLAGS_64();
						const char *Compare_Unordered_Scalar_Double_EFLAGS_64();
					}
				}
			}
		}
	}
}

#endif