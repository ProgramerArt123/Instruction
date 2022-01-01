#include "Stack.h"
namespace offset
{
	Stack &Stack::GetInstance() {
		static Stack instance;
		return instance;
	}
	Stack::Stack() {
		m_string.append("SP");
	}
}