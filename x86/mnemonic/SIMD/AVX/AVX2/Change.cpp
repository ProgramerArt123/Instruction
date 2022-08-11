#include "Change.h"
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
					namespace change {
						
						const char *Move_Packed_Words_Right_Logical() {
							return "VPSRLW";
						}
						const char *Move_Packed_Doublewords_Right_Logical() {
							return "VPSRLD";
						}
						const char *Move_Packed_Quadwords_Right_Logical() {
							return "VPSRLQ";
						}
						const char *Move_Packed_Words_Right_Arithmetic() {
							return "VPSRAW";
						}
						const char *Move_Packed_Doublewords_Right_Arithmetic() {
							return "VPSRAD";
						}
						const char *Move_Packed_Words_Left_Logical() {
							return "VPSLLW";
						}
						const char *Move_Packed_Doublewords_Left_Logical() {
							return "VPSLLD";
						}
						const char *Move_Packed_Quadwords_Left_Logical() {
							return "VPSLLQ";
						}
						const char *Permute_Float_256() {
							return "VPERM2I128";
						}
						const char *Permute_Packed_Doublewords_Words_Elements_256() {
							return "VPERMD";
						}
						const char *Permute_Single_Elements_256() {
							return "VPERMPS";
						}
						const char *Permute_Quadwords_256() {
							return "VPERMQ";
						}
						const char *Permute_Double_Elements_256() {
							return "VPERMPD";
						}
						const char *Move_Doublewords_Left_Logical_128_256() {
							return "VPSLLVD";
						}
						const char *Move_Quadwords_Left_Logical_128_256() {
							return "VPSLLVQ";
						}
						const char *Move_Doublewords_Right_Arithmetic_128_256() {
							return "VPSRAVD";
						}
						const char *Move_Doublewords_Right_Logical_128_256() {
							return "VPSRLVD";
						}
						const char *Move_Quadwords_Right_Logical_128_256() {
							return "VPSRLVQ";
						}
						const char *Gather_Packed_Double_Signed_Doubleword_Indices() {
							return "VGATHERDPD";
						}
						const char *Gather_Packed_Double_Signed_Quadword_Indices() {
							return "VGATHERQPD";
						}
						const char *Gather_Packed_Single_Signed_Doubleword_Indices() {
							return "VGATHERDPS";
						}
						const char *Gather_Packed_Single_Signed_Quadword_Indices() {
							return "VGATHERQPS";
						}
						const char *Gather_Packed_Doubleword_Signed_Doubleword_Indices() {
							return "VPGATHERDD";
						}
						const char *Gather_Packed_Doubleword_Signed_Quadword_Indices() {
							return "VPGATHERQD";
						}
						const char *Gather_Packed_Quadword_Signed_Doubleword_Indices() {
							return "VPGATHERDQ";
						}
						const char *Gather_Packed_Quadword_Signed_Quadword_Indices() {
							return "VPGATHERQQ";
						}
					}
				}
			}
		}
	}
}