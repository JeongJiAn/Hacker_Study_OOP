#pragma once
#include "Console.h"
#include "Schedule.h"
class AirlineBook {
	Schedule *schedules;
public:
	AirlineBook() {
		schedules = new Schedule[3];
	}
	~AirlineBook() {
		delete[] schedules;
	}
	bool booking(string name, int num, int time) {
		if (!schedules[time - 1].booking(name, num)) {
			cout << "�̹� ���� �� �ڸ��Դϴ�." << endl;
			return false;
		}
		return true;
	}
	bool cancel(string name, int num, int time) {
		if (!schedules[time - 1].cancel(name, num)) {
			cout << "����� ������ �����ϴ�." << endl;
			return false;
		}
		return true;
	}
	void show(int time, int num) {
		schedules[time - 1].show(num);
	}
};