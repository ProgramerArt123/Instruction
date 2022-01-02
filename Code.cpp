#include "Code.h"
Code &Code::GetInstance() {
	static Code instance;
	return instance;
}
Code::Code() {
	m_string.append("CS");
}