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
					}
				}
			}
		}
	}
}