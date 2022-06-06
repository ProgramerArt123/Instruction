#ifndef __X86_LABEL_SIZE_LABEL_H__
#define __X86_LABEL_SIZE_LABEL_H__
#include <ostream>
#include "CodeLabel.h"
namespace x86
{
	namespace label
	{
		template<std::size_t size>
		class SizeLabel : public CodeLabel {
		public:
			explicit SizeLabel(std::string name):
				CodeLabel(name){
			}
		};
		
	}
}


#endif