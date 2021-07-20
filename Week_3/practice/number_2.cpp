#include <iostream>
#include <string>
#include "number_2.h"
using namespace std;

Date::Date(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}

Date::Date(string date) {
	int temp = 0, cnt = 0;
	for (auto n : date) {
		if (n == '/') {
			if (cnt == 0) {
				this->year = temp;
			}
			else if (cnt == 1) {
				this->month = temp;
			}
			cnt++;
			temp = 0;
			continue;
		}
		temp = temp * 10 + (int)n - 48;
	}
	this->day = temp;
}

void Date::show() {
	cout << this->year << "³â" << this->month << "¿ù" << this->day << "ÀÏ" << endl;
}

int Date::getYear() {
	return this->year;
}

int Date::getMonth() {
	return this->month;
}

int Date::getDay() {
	return this->day;
}

void solution_2() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}