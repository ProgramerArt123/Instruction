#ifndef __X86_MNEMONIC_SIMD_MMX_32_CONVERSION_H__
#define __X86_MNEMONIC_SIMD_MMX_32_CONVERSION_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace MMX
			{
				namespace size32
				{
					namespace convertion {
						const char *Pack_Words_Into_Bytes_Signed_64();
						const char *Pack_Doublewords_Into_Words_Signed_64();
						const char *Pack_Words_Into_Bytes_Unsigned_64();
						const char *Unpack_High_Order_Bytes_64();
						const char *Unpack_High_Order_Words_64();
						const char *Unpack_High_Order_Doublewords_64();
						const char *Unpack_Low_Order_Bytes_64();
						const char *Unpack_Low_Order_Words_64();
						const char *Unpack_Low_Order_Doublewords_64();
					}
				}
			}
		}
	}
}

#endif