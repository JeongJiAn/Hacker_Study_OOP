#pragma once
#include "CMyList.h"
class CMyUI {
	CMyList m_list;
public:
	int printMenu() {
		system("cls");
		cout << "[1]Add\t" << "[2]Print\t" << "[0]Exit\n:";
		cout.flush();
		int input = 0;
		cin >> input;
		return input;
	}
	void run() {
		char name[32];
		int input = 0;
		while ((input = printMenu()) > 0) {
			switch (input)
			{
			case 1:
				cout << "ÀÌ¸§: ";
				cout.flush();
				cin >> name;
				m_list.addNewNode(name);
				break;
			case 2:
				m_list.print();
				break;
			default:
				break;
			}
		}
	}
};