#pragma once
#include "console.h"
class Seat {
	string name;
	bool booked;
public:
	Seat() {
		this->name = "---";
		this->booked = false;
	}
	bool booking(string name) {
		if (this->booked == true) {
			return false;
		}
		this->name = name;
		this->booked = true;
		return true;
	}
	bool cancel(string name) {
		if (this->booked == false) {
			return false;
		}
		if (this->name != name) {
			cout << "�̸��� ��ġ���� �ʽ��ϴ�." << endl;
			return false;
		}
		this->name = "---";
		this->booked = false;
		return true;
	}
	void show() {
		cout << this->name;
	}
};