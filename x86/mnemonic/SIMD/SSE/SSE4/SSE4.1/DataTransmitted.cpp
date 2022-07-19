#include "DataTransmitted.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE4
				{
					namespace SSE4_1
					{
						namespace data_transmitted
						{
							const char *Load_Two_Quadwords_Non_Temporal_Aligned_Hint_128() {
								return "MOVNTDQA";
							}
							const char *Blend_Packed_Double_128() {
								return "BLENDPD";
							}
							const char *Blend_Packed_Single_128() {
								return "BLENDPS";
							}
							const char *Variable_Blend_Packed_Double_128() {
								return "BLENDVPD";
							}
							const char *Variable_Blend_Packed_Single_128() {
								return "BLENDVPS";
							}
							const char *Variable_Blend_Packed_Bytes_128() {
								return "PBLENDVB";
							}
							const char *Blend_Packed_Words_128() {
								return "PBLENDW";
							}
							const char *Extract_Packed_Single_32() {
								return "EXTRACTPS";
							}
							const char *Insert_Scalar_Single_32() {
								return "INSERTPS";
							}
							const char *Insert_Byte() {
								return "PINSRB";
							}
							const char *Insert_Doubleword() {
								return "PINSRD";
							}
							const char *Insert_Quadword() {
								return "PINSRQ";
							}
							const char *Extract_Byte() {
								return "PEXTRB";
							}
							const char *Extract_Word() {
								return "PEXTRW";
							}
							const char *Extract_Doubleword() {
								return "PEXTRD";
							}
							const char *Extract_Quadword() {
								return "PEXTRQ";
							}
						}
					}
				}
			}
		}
	}
}