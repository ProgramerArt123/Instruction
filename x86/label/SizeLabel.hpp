#ifndef __X86_LABEL_SIZE_LABEL_H__
#define __X86_LABEL_SIZE_LABEL_H__
#include <ostream>
#include "CodeLabel.h"
namespace x86
{
	namespace label
	{
		template<uint64_t count>
		class SizeLabel : public CodeLabel {
		public:
			explicit SizeLabel(std::string name):
				CodeLabel(name), m_count(count){
			}
		protected:
			uint64_t m_count = 0;
		};
		
	}
}


#endif