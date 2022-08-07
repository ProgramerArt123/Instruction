#include "Arithmetic.h"
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
					namespace arithmetic
					{
						const char *Square_Root_Single_128__256() {
							return "VSQRTPS";
						}
						const char *Square_Root_Double_128__256() {
							return "VSQRTPD";
						}
						const char *Square_Roots_Reciprocals_Packed_Single_128__256() {
							return "VRSQRTPS";
						}
						const char *Reciprocals_Packed_Single_128__256() {
							return "VRCPPS";
						}
						const char *Add_Packed_Single_128__256() {
							return "VADDPS";
						}
						const char *Add_Packed_Double_128__256() {
							return "VADDPD";
						}
						const char *Subtract_Packed_Single_128__256() {
							return "VSUBPS";
						}
						const char *Subtract_Packed_Double_128__256() {
							return "VSUBPD";
						}
						const char *Multiply_Packed_Single_128__256() {
							return "VMULPS";
						}
						const char *Multiply_Packed_Double_128__256() {
							return "VMULPD";
						}
						const char *Divide_Packed_Single_128__256() {
							return "VDIVPS";
						}
						const char *Divide_Packed_Double_128__256() {
							return "VDIVPD";
						}
						const char *Minimum_Packed_Single_128__256() {
							return "VMINPS";
						}
						const char *Minimum_Packed_Double_128__256() {
							return "VMINPD";
						}
						const char *Maximum_Packed_Single_128__256() {
							return "VMAXPS";
						}
						const char *Maximum_Packed_Double_128__256() {
							return "VMAXPD";
						}
						const char *Packed_Double_Horizontal_Add_128__256() {
							return "VHADDPD";
						}
						const char *Packed_Single_Horizontal_Add_128__256() {
							return "VHADDPS";
						}
						const char *Packed_Double_Horizontal_Subtract_128__256() {
							return "VHSUBPD";
						}
						const char *Packed_Single_Horizontal_Subtract_128__256() {
							return "VHSUBPS";
						}
						const char *Packed_Double_Add__Subtract_128__256() {
							return "VADDSUBPD";
						}
						const char *Packed_Single_Add__Subtract_128__256() {
							return "VADDSUBPS";
						}
						const char *Dot_Product_Packed_Single_128__256() {
							return "VDPPS";
						}
						const char *Round_Packed_Double_128__256() {
							return "VROUNDPD";
						}
						const char *Round_Packed_Single_128__256() {
							return "VROUNDPS";
						}
						const char *Multiply_Add_Packed_Integers_128() {
							return "VPMADDWD";
						}
						const char *Multiply_Add_Packed_Signed__Unsigned_Bytes_128() {
							return "VPMADDUBSW";
						}
						const char *Average_Packed_Unsigned_Bytes_128() {
							return "VPAVGB";
						}
						const char *Average_Packed_Unsigned_Words_128() {
							return "VPAVGW";
						}
						const char *Average_Packed_Unsigned_Doublewords_128() {
							return "VPMULUDQ";
						}
						const char *Multiply_Packed_Signed_Doublewords_128() {
							return "VPMULLW";
						}
						const char *Multiply_Packed_Unsigned_Words_128() {
							return "VPMULHUW";
						}
						const char *Multiply_Packed_Signed_Words_128() {
							return "VPMULHW";
						}
						const char *Subtract_Packed_Signed_Words_128() {
							return "VPSUBSW";
						}
						const char *Add_Packed_Signed_Words_128() {
							return "VPADDSW";
						}
						const char *Sum_Absolute_Differences_128() {
							return "VPSADBW";
						}
						const char *Add_Packed_Unsigned_Bytes_128() {
							return "VPADDUSB";
						}
						const char *Add_Packed_Unsigned_Words_128() {
							return "VPADDUSW";
						}
						const char *Add_Packed_Signed_Bytes_128() {
							return "VPADDSB";
						}
						const char *Subtract_Packed_Unsigned_Bytes_128() {
							return "VPSUBUSB";
						}
						const char *Subtract_Packed_Unsigned_Words_128() {
							return "VPSUBUSW";
						}
						const char *Subtract_Packed_Signed_Bytes_128() {
							return "VPSUBSB";
						}
						const char *Minimum_Packed_Unsigned_Bytes_128() {
							return "VPMINUB";
						}
						const char *Minimum_Packed_Signed_Words_128() {
							return "VPMINSW";
						}
						const char *Maximum_Packed_Unsigned_Bytes_128() {
							return "VPMAXUB";
						}
						const char *Maximum_Packed_Signed_Words_128() {
							return "VPMAXSW";
						}
						const char *Add_Packed_Bytes_128() {
							return "VPADDB";
						}
						const char *Add_Packed_Words_128() {
							return "VPADDW";
						}
						const char *Add_Packed_Doublewords_128() {
							return "VPADDD";
						}
						const char *Add_Packed_Quadwords_128() {
							return "VPADDQ";
						}
						const char *Subtract_Packed_Bytes_128() {
							return "VPSUBB";
						}
						const char *Subtract_Packed_Words_128() {
							return "VPSUBW";
						}
						const char *Subtract_Packed_Doublewords_128() {
							return "VPSUBD";
						}
						const char *Subtract_Packed_Quadwords_128() {
							return "VPSUBQ";
						}
						const char *Horizontal_Subtraction_Words_Packed_128() {
							return "VPHSUBW";
						}
						const char *Horizontal_Subtraction_Signed_Doublewords_Packed_128() {
							return "VPHSUBD";
						}
						const char *Horizontal_Subtraction_Words_Saturated_Packed_128() {
							return "VPHSUBSW";
						}
						const char *Horizontal_Add_Words_Packed_128() {
							return "VPHADDW";
						}
						const char *Horizontal_Add_Doublewords_Packed_128() {
							return "VPHADDD";
						}
						const char *Horizontal_Add_Signed_Words_Packed_128() {
							return "VPHADDSW";
						}
						const char *Multiply_Signed_Words_Scale_Round_Signed_Doublewords_128() {
							return "VPMULHRSW";
						}
						const char *Packed_Sign_Bytes_128() {
							return "VPSIGNB";
						}
						const char *Packed_Sign_Words_128() {
							return "VPSIGNW";
						}
						const char *Packed_Sign_Doublewords_128() {
							return "VPSIGND";
						}
						const char *Absolute_Bytes_128() {
							return "VPABSB";
						}
						const char *Absolute_Words_128() {
							return "VPABSW";
						}
						const char *Absolute_Doublewords_128() {
							return "VPABSD";
						}
						const char *Packed_Double_Dot_Product_128() {
							return "VDPPD";
						}
						const char *Packed_Horizontal_Word_Minimum() {
							return "VPHMINPOSUW";
						}
						const char *Absolute_Difference_Sum() {
							return "VMPSADBW";
						}
						const char *Maximum_Packed_Signed_Bytes_128() {
							return "VPMAXSB";
						}
						const char *Maximum_Packed_Signed_Doublewords_128() {
							return "VPMAXSD";
						}
						const char *Maximum_Packed_Unsigned_Doublewords_128() {
							return "VPMAXUD";
						}
						const char *Minimum_Packed_Signed_Bytes_128() {
							return "VPMINSB";
						}
						const char *Minimum_Packed_Signed_Doublewords_128() {
							return "VPMINSD";
						}
						const char *Minimum_Packed_Unsigned_Doublewords_128() {
							return "VPMINUD";
						}
						const char *Maximum_Packed_Unsigned_Words_128() {
							return "VPMAXUW";
						}
						const char *Minimum_Packed_Unsigned_Words_128() {
							return "VPMINUW";
						}
						const char *Multiply_Packed_Signed_Doublewords_Store_Quadwords_128() {
							return "VPMULDQ";
						}
						const char *Multiply_Packed_Signed_Doublewords_Store_Low_128() {
							return "VPMULLD";
						}
						const char *Round_Scalar_Single_32() {
							return "VROUNDSS";
						}
						const char *Round_Scalar_Double_64() {
							return "VROUNDSD";
						}
					}
				}
			}
		}
	}
}