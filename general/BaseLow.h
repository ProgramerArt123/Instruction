#ifndef __GENERAL_BASE_LOW_H__
#define __GENERAL_BASE_LOW_H__
#include "General8.h"
namespace general
{
	class BaseLow : public General8 {
	public:
		static BaseLow &GetInstance();
	private:
		explicit BaseLow();
	};
}

#define BL general::BaseLow::GetInstance()

#endif