#include "DataTransmitted.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX512
				{
					namespace data_transmitted 
					{
						const char *Align_Doubleword_Vectors_128__256__512() {
							return "VALIGND";
						}
						const char *Align_Quadword_Vectors_128__256__512() {
							return "VALIGNQ";
						}
						const char *Blend_Single_Vectors_OpMask_Control_128__256__512() {
							return "VBLENDMPS";
						}
						const char *Blend_Double_Vectors_OpMask_Control_128__256__512() {
							return "VBLENDMPD";
						}
						const char *Save_Sparse_Packed_Double_Dense_128__256__512() {
							return "VCOMPRESSPD";
						}
						const char *Save_Sparse_Packed_Single_Dense_128__256__512() {
							return "VCOMPRESSPS";
						}
						const char *Load_Sparse_Packed_Double_Dense_Memory_128__256__512() {
							return "VEXPANDPD";
						}
						const char *Load_Sparse_Packed_Single_Dense_Memory_128__256__512() {
							return "VEXPANDPS";
						}
						const char *Extract_Packed_Single_128() {
							return "VEXTRACTF32X4";
						}
						const char *Extract_Packed_Double_128() {
							return "VEXTRACTF64X4";
						}
						const char *Extract_Packed_Doublewords_128() {
							return "VEXTRACTI32X4";
						}
						const char *Extract_Packed_Quadwords_256() {
							return "VEXTRACTI64X4";
						}
					}
				}
			}
		}
	}
}