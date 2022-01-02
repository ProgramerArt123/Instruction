#ifndef __ADDRESS_STACK_H__
#define __ADDRESS_STACK_H__
#include "Address.h"
namespace address
{
	class Stack : public Address {
	public:
		static Stack &GetInstance();
	private:
		explicit Stack();
	};
}

#define SP address::Stack::GetInstance()

#endif