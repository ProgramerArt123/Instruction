#include "Conversion.h"
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
						namespace convertion
						{
							const char *Sign_Extend_Byte_Packed_Words_64() {
								return "PMOVSXBW";
							}
							const char *Zero_Extend_Byte_Packed_Words_64() {
								return "PMOVZXBW";
							}
							const char *Sign_Extend_Byte_Packed_Doublewords() {
								return "PMOVSXBD";
							}
							const char *Zero_Extend_Byte_Packed_Doublewords() {
								return "PMOVZXBD";
							}
							const char *Sign_Extend_Word_Packed_Doublewords_64() {
								return "PMOVSXWD";
							}
							const char *Zero_Extend_Word_Packed_Doublewords_64() {
								return "PMOVZXWD";
							}
							const char *Sign_Extend_Byte_Packed_Quadwords_16() {
								return "PMOVSXBQ";
							}
							const char *Zero_Extend_Byte_Packed_Quadwords_16() {
								return "PMOVZXBQ";
							}
							const char *Sign_Extend_Word_Packed_Quadwords_32() {
								return "PMOVSXWQ";
							}
							const char *Zero_Extend_Word_Packed_Quadwords_32() {
								return "PMOVZXWQ";
							}
							const char *Sign_Extend_Doubleword_Packed_Quadwords_64() {
								return "PMOVSXDQ";
							}
							const char *Zero_Extend_Doubleword_Packed_Quadwords_64() {
								return "PMOVZXDQ";
							}
						}
					}
				}
			}
		}
	}
}