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
			cout << "이미 예약 된 자리입니다." << endl;
			return false;
		}
		return true;
	}
	bool cancel(string name, int num, int time) {
		if (!schedules[time - 1].cancel(name, num)) {
			cout << "취소할 내역이 없습니다." << endl;
			return false;
		}
		return true;
	}
	void show(int time, int num) {
		schedules[time - 1].show(num);
	}
};