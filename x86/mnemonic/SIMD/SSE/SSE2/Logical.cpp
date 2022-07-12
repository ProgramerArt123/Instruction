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
					}
				}
			}
		}
	}
}