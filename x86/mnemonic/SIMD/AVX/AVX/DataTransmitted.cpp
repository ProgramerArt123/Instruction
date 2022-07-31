#include "DataTransmitted.h"
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
					namespace data_transmitted 
					{
						const char *Transmitted_Aligned_Packed_Single_128__256() {
							return "VMOVAPS";
						}
						const char *Transmitted_Aligned_Packed_Double_128__256() {
							return "VMOVAPD";
						}
						const char *Transmitted_Aligned_Packed_Integer_128__256() {
							return "VMOVDQA";
						}
						const char *Transmitted_Unaligned_Packed_Single_128__256() {
							return "MOVUPS";
						}
						const char *Transmitted_Unaligned_Packed_Double_128__256() {
							return "VMOVUPD";
						}
						const char *Transmitted_Unaligned_Packed_Integer_128__256() {
							return "VMOVDQU";
						}
						const char *Extract_Packed_Single_Sign_Mask() {
							return "VMOVMSKPS";
						}
						const char *Extract_Packed_Double_Sign_Mask() {
							return "VMOVMSKPD";
						}
						const char *Load_Unaligned_Integer_128__256() {
							return "VLDDQU";
						}
						const char *Store_Packed_Single_Non_Temporal_Hint_128__256() {
							return "VMOVNTPS";
						}
						const char *Store_Packed_Double_Non_Temporal_Hint_128__256() {
							return "VMOVNTPD";
						}
						const char *Store_Packed_Integer_Non_Temporal_Hint_128__256() {
							return "VMOVNTDQ";
						}
						const char *Load_Double_Quadword_Non_Temporal_Aligned_Hint_128() {
							return "VMOVNTDQA";
						}
						const char *Replicate_Single_High_FP_128__256() {
							return "VMOVSHDUP";
						}
						const char *Replicate_Single_Low_FP_128__256() {
							return "VMOVSLDUP";
						}
						const char *Replicate_Double_FP_64__256() {
							return "VMOVDDUP";
						}
						const char *Blend_Packed_Single_128__256() {
							return "VBLENDPS";
						}
						const char *Blend_Packed_Double_128__256() {
							return "VBLENDPD";
						}
						const char *Variable_Blend_Packed_Single_128__256() {
							return "VBLENDVPS";
						}
						const char *Variable_Blend_Packed_Double_128__256() {
							return "VBLENDVPD";
						}
						const char *Broadcast_Float_128() {
							return "VBROADCASTF128";
						}
						const char *Broadcast_Double_64() {
							return "VBROADCASTSD";
						}
						const char *Broadcast_Single_32() {
							return "VBROADCASTSS";
						}
					}
				}
			}
		}
	}
}