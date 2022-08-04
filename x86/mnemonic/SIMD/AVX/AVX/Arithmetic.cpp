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
					}
				}
			}
		}
	}
}