#include "DataTransmitted.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX2
				{
					namespace data_transmitted 
					{
						const char *Load_Double_Quadword_Non_Temporal_Aligned_Hint_256() {
							return "VMOVNTDQA";
						}
						const char *Variable_Blend_Packed_Bytes_256() {
							return "VPBLENDVB";
						}
						const char *Blend_Packed_Words_256() {
							return "VPBLENDW";
						}
						const char *Broadcast_Float_128() {
							return "VBROADCASTI128";
						}
						const char *Broadcast_Double_128() {
							return "VBROADCASTSD";
						}
						const char *Broadcast_Single_128() {
							return "VBROADCASTSS";
						}
						const char *Extract_Packed_Float_128() {
							return "VEXTRACTI128";
						}
						const char *Insert_Packed_Float_128() {
							return "VINSERTI128";
						}
						const char *Load__Save_Packed_Single_Mask_128__256() {
							return "VMASKMOVPS";
						}
						const char *Load__Save_Packed_Double_Mask_128__256() {
							return "VMASKMOVPD";
						}
						const char *Blend_Packed_Dwords_128__256() {
							return "VPBLENDD";
						}
					}
				}
			}
		}
	}
}