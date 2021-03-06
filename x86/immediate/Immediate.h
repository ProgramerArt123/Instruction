#ifndef __X86_IMMEDIATE_H__
#define __X86_IMMEDIATE_H__
#include "x86/operand/Operand.h"
namespace x86
{
	namespace immediate {
		class Immediate : public operand::Operand {
		public:
			const char *PureString() const override;
		protected:
			explicit Immediate();
		};
	}
}

#endif