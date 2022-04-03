#ifndef __X86_REGISTER_H__
#define __X86_REGISTER_H__
#include "x86/operand/Operand.h"
namespace x86
{
	namespace reg
	{
		class Register : public Operand {
		public:
			const char *PureString() const override;
		protected:
			explicit Register();
		};
	}
}

#endif
