#include "Change.h"
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
						const char *Packed_Interleave_Shuffle_Two_Double_128__256() {
							return "VSHUFPD";
						}
						const char *Packed_Interleave_Shuffle_Quadruplets_Single_128__256() {
							return "VSHUFPS";
						}
						const char *Unpack_Interleave_Low_Packed_Single_128__256() {
							return "VUNPCKLPS";
						}
						const char *Permute_Double_128__256() {
							return "VPERMILPD";
						}
						const char *Permute_Single_128__256() {
							return "VPERMILPS";
						}
						const char *Permute_Float_256() {
							return "VPERM2F128";
						}
						const char *Move_Packed_Words_Left_Logical() {
							return "VPSLLW";
						}
						const char *Move_Packed_Doublewords_Left_Logical() {
							return "VPSLLD";
						}
						const char *Move_Packed_Quadwords_Left_Logical() {
							return "VPSLLD";
						}
						const char *Move_Packed_Words_Right_Arithmetic() {
							return "VPSRAW";
						}
						const char *Move_Packed_Words_Right_Logical() {
							return "VPSRLW";
						}
						const char *Move_Packed_Doublewords_Right_Logical() {
							return "VPSRLD";
						}
						const char *Move_Packed_Quadwords_Right_Logical() {
							return "VPSRLQ";
						}
						const char *Move_Packed_Doublewords_Right_Arithmetic() {
							return "VPSRAD";
						}
					}
				}
			}
		}
	}
}