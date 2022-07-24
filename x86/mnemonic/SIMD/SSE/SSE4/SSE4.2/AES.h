#ifndef __X86_MNEMONIC_SIMD_SSE_SSE4_SSE4_2_AES_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE4_SSE4_2_AES_H__
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
							const char *One_Round_AES_Decryption_Flow_128();
							const char *Last_Round_AES_Decryption_Flow_128();
							const char *One_Round_AES_Encryption_Flow_128();
							const char *Last_Round_AES_Encryption_Flow_128();
							const char *AES_InvMixColumn_Transformation_128();
							const char *AES_Round_Key_Generation_Assist_128();
						}
					}
				}
			}
		}
	}
}

#endif