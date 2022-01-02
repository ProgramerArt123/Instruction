#include "Stack.h"
namespace address
{
	Stack &Stack::GetInstance() {
		static Stack instance;
		return instance;
	}
	Stack::Stack() {
		m_string.append("SP");
	}
}