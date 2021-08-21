#pragma once
#include <iostream>
using namespace std;
class CNode {
	friend class CMyList;
public:
	explicit CNode(const char* name) {
		strcpy_s(m_name, sizeof(m_name), name);
	}
private:
	char m_name[32];
	CNode* next = nullptr;
};