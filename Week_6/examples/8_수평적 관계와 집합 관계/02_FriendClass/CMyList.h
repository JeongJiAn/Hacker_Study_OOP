#pragma once
#include "CNode.h"
class CMyList {
	CNode headNode;
public:
	CMyList() : headNode("Dummy Head") { }
	~CMyList() {
		CNode* pNode = headNode.next;
		CNode* pDelete = nullptr;

		while (pNode) {
			pDelete = pNode;
			pNode = pNode->next;
			cout << pDelete->m_name << endl;
			delete pDelete;
		}
		headNode.next = nullptr;
	}
	void addNewNode(const char* name) {
		CNode* pNode = new CNode(name);
		pNode->next = headNode.next;
		headNode.next = pNode;
	}
};