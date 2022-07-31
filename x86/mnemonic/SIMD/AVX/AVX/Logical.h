#ifndef __X86_MNEMONIC_SIMD_AVX_AVX_LOGICAL_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX_LOGICAL_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX
				{
					namespace logical {
						const char *Logical_Xor_Packed_Single_128__256();
						const char *Logical_Xor_Packed_Double_128__256();
						const char *Logical_Or_Packed_Single_128__256();
						const char *Logical_Or_Packed_Double_128__256();
						const char *Logical_And_Not_Packed_Double_128__256();
						const char *Logical_And_Not_Packed_Single_128__256();
						const char *Logical_And_Packed_Double_128__256();
						const char *Logical_And_Packed_Single_128__256();
					}
				}
			}
		}
	}
}

#endif