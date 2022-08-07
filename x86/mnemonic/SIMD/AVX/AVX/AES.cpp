#include "AES.h"
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
					namespace AES
					{
						const char *One_Round_AES_Decryption_Flow_128() {
							return "VAESDEC";
						}
						const char *Last_Round_AES_Decryption_Flow_128() {
							return "VAESDECLAST";
						}
						const char *One_Round_AES_Encryption_Flow_128() {
							return "VAESENC";
						}
						const char *Last_Round_AES_Encryption_Flow_128() {
							return "VAESENCLAST";
						}
						const char *AES_InvMixColumn_Transformation_128() {
							return "VAESIMC";
						}
						const char *AES_Round_Key_Generation_Assist_128() {
							return "VAESKEYGENASSIST";
						}
					}
				}
				
			}
		}
	}
}