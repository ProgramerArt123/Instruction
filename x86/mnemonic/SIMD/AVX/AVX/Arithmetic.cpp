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
					}
				}
			}
		}
	}
}