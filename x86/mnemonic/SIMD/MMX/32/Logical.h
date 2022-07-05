#ifndef __X86_MNEMONIC_SIMD_MMX_32_LOGICAL_H__
#define __X86_MNEMONIC_SIMD_MMX_32_LOGICAL_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace MMX
			{
				namespace size32
				{
					namespace logical {
						const char *Logical_And_64();
						const char *Logical_And_Not_64();
						const char *Logical_Or_64();
						const char *Logical_Exclusive_Or_64();
					}
				}
			}
		}
	}
}

#endif