#pragma once
#include <iostream>
#include <string>
using namespace std;
class Console {
public:
	Console() { }
	void show_main_menu(int num) {
		cout << endl << "����:1, ���:2, ����:3, ������:4>> ";
	}
	void show_time_table() {
		cout << "07��:1, 12��:2, 17��:3>> ";
	}
	void show_book_menu() {

	}
};