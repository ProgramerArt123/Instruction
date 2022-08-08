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
						const char *Compare_Unordered_Scalar_Single_EFLAGS_32() {
							return "VUCOMISS";
						}
						const char *Compare_Unordered_Scalar_Double_EFLAGS_64() {
							return "VUCOMISD";
						}
						const char *Compare_Ordered_Scalar_Single_EFLAGS_32() {
							return "VCOMISS";
						}
						const char *Compare_Packed_Signed_Bytes_Greater_128() {
							return "VPCMPGTB";
						}
						const char *Compare_Packed_Signed_Words_Greater_128() {
							return "VPCMPGTW";
						}
						const char *Compare_Packed_Signed_Doublewords_Greater_128() {
							return "VPCMPGTD";
						}
						const char *Compare_Scalar_Single_32() {
							return "VCMPSS";
						}
						const char *Compare_Scalar_Double_64() {
							return "VCMPSD";
						}
					}
				}
			}
		}
	}
}