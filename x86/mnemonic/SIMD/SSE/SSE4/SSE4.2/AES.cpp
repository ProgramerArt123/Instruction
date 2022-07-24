#include "AES.h"
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
					namespace SSE4_2
					{
						namespace AES
						{
							const char *One_Round_AES_Decryption_Flow_128() {
								return "AESDEC";
							}
							const char *Last_Round_AES_Decryption_Flow_128() {
								return "AESDECLAST";
							}
							const char *One_Round_AES_Encryption_Flow_128() {
								return "AESENC";
							}
							const char *Last_Round_AES_Encryption_Flow_128() {
								return "AESENCLAST";
							}
							const char *AES_InvMixColumn_Transformation_128() {
								return "AESIMC";
							}
							const char *AES_Round_Key_Generation_Assist_128() {
								return "AESKEYGENASSIST";
							}
						}
					}
				}
			}
		}
	}
}