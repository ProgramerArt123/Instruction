#ifndef __X86_MNEMONIC_SIMD_AVX_AVX2_CONVERSION_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX2_CONVERSION_H__
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
					namespace convertion {
						const char *Unpack_Low_Order_Bytes_256();
						const char *Unpack_Low_Order_Words_256();
						const char *Unpack_Low_Order_Doublewords_256();
						const char *Unpack_Low_Order_Quadwords_256();
						const char *Pack_Words_Into_Bytes_Signed_256();
						const char *Pack_Words_Into_Bytes_Unsigned_256();
						const char *Unpack_High_Order_Bytes_256();
						const char *Unpack_High_Order_Words_256();
						const char *Unpack_High_Order_Doublewords_256();
						const char *Unpack_High_Quadwords_256();
						const char *Pack_Doublewords_Into_Words_Signed_256();
						const char *Shuffle_Packed_Doublewords_256();
						const char *Shuffle_Packed_Low_Words_256(); 
						const char *Shuffle_Packed_High_Words_256();
					}
				}
			}
		}
	}
}

#endif