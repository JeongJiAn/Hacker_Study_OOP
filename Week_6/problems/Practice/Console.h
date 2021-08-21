#pragma once
#include <iostream>
#include <string>
using namespace std;
class Console {
public:
	Console() { }
	void show_main_menu(int num) {
		cout << endl << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
	}
	void show_time_table() {
		cout << "07시:1, 12시:2, 17시:3>> ";
	}
	void show_book_menu() {

	}
};