#include "Compare.h"
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
					namespace compare {
						const char *Compare_Packed_Single_128__256() {
							return "VCMPPS";
						}
						const char *Compare_Packed_Double_128__256() {
							return "VCMPPD";
						}
						const char *Logical_Compare_128__256() {
							return "VPTEST";
						}
						const char *Packed_Bit_Test_Single_128__256() {
							return "VTESTPS";
						}
						const char *Packed_Bit_Test_Double_128__256() {
							return "VTESTPD";
						}
						const char *Compare_Packed_Bytes_128() {
							return "VPCMPEQB";
						}
						const char *Compare_Packed_Words_128() {
							return "VPCMPEQW";
						}
						const char *Compare_Packed_Doublewords_128() {
							return "VPCMPEQD";
						}
						const char *Compare_Packed_Signed_Quadwords_128() {
							return "VPCMPGTQ";
						}
						const char *Compare_Ordered_Scalar_Double_EFLAGS_64() {
							return "VCOMISD";
						}
						
					}
				}
			}
		}
	}
}