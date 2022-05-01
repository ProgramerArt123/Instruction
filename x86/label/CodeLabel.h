#ifndef __X86_LABEL_CODE_LABEL_H__
#define __X86_LABEL_CODE_LABEL_H__
#include <ostream>
#include "x86/operand/Operand.h"
namespace x86
{
	namespace label
	{
		class CodeLabel : virtual public operand::Operand {
		public:
			explicit CodeLabel(std::string name);
			friend std::ostream &operator<<(std::ostream &out, const CodeLabel &label);
		};
		
	}
}


#endif