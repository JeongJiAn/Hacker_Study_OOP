#pragma once
#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int radius = 0) {
		this->radius = radius;
	}

	int getRadius() {
		return this->radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * this->radius * this->radius;
	}
};