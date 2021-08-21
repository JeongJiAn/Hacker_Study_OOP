#pragma once
#include "Console.h"
#include "Seat.h"
class Schedule {
	Seat* seats;
public:
	Schedule() {
		seats = new Seat[8];
	}
	~Schedule() {
		delete[] seats;
	}
	bool booking(string name, int num) {
		return seats[num - 1].booking(name);
	}
	bool cancel(string name, int num) {
		return seats[num - 1].cancel(name);
	}
	void show(int num) {
		seats[num - 1].show();
	}
};