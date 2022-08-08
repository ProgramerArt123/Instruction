#include "Logical.h"
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
					namespace logical {
						const char *Logical_And_Packed_Double_128() {
							return "ANDPD";
						}
						const char *Logical_And_Not_Packed_Double_128() {
							return "ANDNPD";
						}
						const char *Logical_Or_Packed_Double_128() {
							return "ORPD";
						}
						const char *Logical_Xor_Packed_Double_128() {
							return "XORPD";
						}
						const char *Logical_AND_128() {
							return "PAND";
						}
						const char *Logical_And_Not_128() {
							return "PANDN";
						}
						const char *Logical_Or_128() {
							return "POR";
						}
						const char *Logical_Exclusive_Or_128() {
							return "PXOR";
						}
					}
				}
			}
		}
	}
}