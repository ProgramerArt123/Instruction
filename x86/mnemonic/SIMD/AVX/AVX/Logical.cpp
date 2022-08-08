#include "Logical.h"
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
						const char *Logical_Xor_Packed_Single_128__256() {
							return "VXORPS";
						}
						const char *Logical_Xor_Packed_Double_128__256() {
							return "VXORPD";
						}
						const char *Logical_Or_Packed_Single_128__256() {
							return "VORPS";
						}
						const char *Logical_Or_Packed_Double_128__256() {
							return "VORPD";
						}
						const char *Logical_And_Not_Packed_Double_128__256() {
							return "VANDNPD";
						}
						const char *Logical_And_Not_Packed_Single_128__256() {
							return "VANDNPS";
						}
						const char *Logical_And_Packed_Double_128__256() {
							return "VANDPD";
						}
						const char *Logical_And_Packed_Single_128__256() {
							return "VANDPS";
						}
						const char *Logical_AND_128() {
							return "VPAND";
						}
						const char *Logical_And_Not_128() {
							return "VPANDN";
						}
						const char *Logical_Or_128() {
							return "VPOR";
						}
						const char *Logical_Exclusive_Or_128() {
							return "VPXOR";
						}
					}
				}
			}
		}
	}
}