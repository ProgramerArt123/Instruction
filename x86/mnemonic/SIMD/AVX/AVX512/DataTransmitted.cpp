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
						const char *Fix_Up_Special_Packed_Double_128__256__512() {
							return "VFIXUPIMMPD";
						}
						const char *Fix_Up_Special_Packed_Single_128__256__512() {
							return "VFIXUPIMMPS";
						}
						const char *Fix_Up_Special_Scalar_Double() {
							return "VFIXUPIMMSD";
						}
						const char *Fix_Up_Special_Scalar_Single() {
							return "VFIXUPIMMSS";
						}
						const char *Blend_Doubleword_Vectors_OpMask_Control_128__256__512() {
							return "VPBLENDMD";
						}
						const char *Blend_Quadword_Vectors_OpMask_Control_128__256__512() {
							return "VPBLENDMQ";
						}
						const char *Broadcast_Doubleword_GPR_128__256__512() {
							return "VPBROADCASTD";
						}
						const char *Broadcast_Quadword_GPR_128__256__512() {
							return "VPBROADCASTQ";
						}
						const char *Save_Sparse_Packed_Quadword_128__256__512() {
							return "VPCOMPRESSQ";
						}
						const char *Save_Sparse_Packed_Doubleword_128__256__512() {
							return "VPCOMPRESSD";
						}
						const char *Save_Doublewords_Two_Tables_128__256__512() {
							return "VPERMI2D";
						}
						const char *Save_Quadwords_Two_Tables_128__256__512() {
							return "VPERMI2Q";
						}
						const char *Save_Double_Two_Tables_128__256__512() {
							return "VPERMI2PD";
						}
						const char *Save_Single_Two_Tables_128__256__512() {
							return "VPERMI2PS";
						}
					}
				}
			}
		}
	}
}