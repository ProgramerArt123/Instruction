#ifndef __X86_64_GENERAL_64_H__
#define __X86_64_GENERAL_64_H__
#include "x86/register/general/General.h"
namespace size64
{
	class General64 : public general::General {
	protected:
		explicit General64();
	};
}
#endif