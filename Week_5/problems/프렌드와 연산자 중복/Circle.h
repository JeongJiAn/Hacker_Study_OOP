#pragma once
#include<iostream>
using namespace std;
class Circle
{
	int radius;
public:
	Circle(int radius = 0) {
		this->radius = radius;
	}
	void show() {
		cout << "radius = " << radius << " ÀÎ ¿ø" << endl;
	}

	/*
	int operator++() {
		return ++this->radius;
	}

	int operator++(int) {
		int back_up = this->radius;
		this->radius++;
		return back_up;
	}
	*/

	friend int operator++(Circle&);
	friend int operator++(Circle&, int);
	friend Circle& operator+(int, Circle&);
};

