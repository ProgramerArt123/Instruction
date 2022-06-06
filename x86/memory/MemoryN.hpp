#ifndef __X86_MEMORY_N_H__
#define __X86_MEMORY_N_H__
#include "Memory.h"
namespace x86
{
	namespace memory {
		template<std::size_t size>
		class MemoryN : public Memory {
		public:
			using Memory::Memory;
		protected:
			std::size_t m_size = size;
		};
		
	}
}

#endif