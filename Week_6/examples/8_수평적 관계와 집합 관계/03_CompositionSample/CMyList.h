#pragma once
#include "CNode.h"
class CMyList {
	CNode headNode;
public:
	CMyList() : headNode("DummyHead") { }
	~CMyList() {
		CNode* pNode = headNode.next;
		CNode* pDelete = nullptr;

		while (pNode) {
			pDelete = pNode;
			pNode = pNode->next;
			delete pDelete;
		}
		headNode.next = nullptr;
	}

	void addNewNode(const char* name) {
		CNode* pNode = new CNode(name);
		pNode->next = headNode.next;
		headNode.next = pNode;
	}
	void print() {
		CNode* pNode = headNode.next;
		while (pNode) {
			cout << pNode->m_name << endl;
			pNode = pNode->next;
		}
		char c;
		cout << "°è¼Ó: y>> ";
		cin >> c;
	}
};