#ifndef __X86_MNEMONIC_SIMD_SSE_SSE2_CHANGE_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE2_CHANGE_H__
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
					namespace change {
						const char *Shuffles_Packed_Double_128();
						const char *Unpacks_Interleaves_High_128();
						const char *Unpacks_Interleaves_Low_128();
						const char *Shuffle_Packed_Low_Words_128();
						const char *Shuffle_Packed_High_Words_128();
						const char *Shuffle_Packed_Doublewords_128();
						const char *Shift_Two_Quadword_Left();
						const char *Shift_Two_Quadword_Right();
						const char *Unpack_High_Quadwords_128();
						const char *Unpack_Low_Quadwords_128();
					}
				}
			}
		}
	}
}

#endif