#ifndef __X86_MNEMONIC_SIMD_AVX_AVX2_LOGICAL_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX2_LOGICAL_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX2
				{
					namespace logical {
						const char *Logical_AND_256();
						const char *Logical_And_Not_256();
						const char *Logical_Or_256();
						const char *Logical_Exclusive_Or_256();
					}
				}
			}
		}
	}
}

#endif