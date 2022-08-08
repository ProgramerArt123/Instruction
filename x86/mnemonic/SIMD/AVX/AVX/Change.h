#ifndef __X86_MNEMONIC_SIMD_AVX_AVX_CHANGE_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX_CHANGE_H__
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
					namespace change {
						const char *Packed_Interleave_Shuffle_Two_Double_128__256();
						const char *Packed_Interleave_Shuffle_Quadruplets_Single_128__256();
						const char *Unpack_Interleave_Low_Packed_Single_128__256();
						const char *Permute_Double_128__256();
						const char *Permute_Single_128__256();
						const char *Permute_Float_256();
						const char *Move_Packed_Words_Left_Logical();
						const char *Move_Packed_Doublewords_Left_Logical();
						const char *Move_Packed_Quadwords_Left_Logical();
						const char *Move_Packed_Words_Right_Arithmetic();
						const char *Move_Packed_Words_Right_Logical();
						const char *Move_Packed_Doublewords_Right_Logical();
						const char *Move_Packed_Quadwords_Right_Logical();
						const char *Move_Packed_Doublewords_Right_Arithmetic();
						const char *Shuffle_Packed_Low_Words_128();
						const char *Shuffle_Packed_High_Words_128();
						const char *Shuffle_Packed_Doublewords_128();
					}
				}
			}
		}
	}
}

#endif