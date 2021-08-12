#include "number_05.h"

Circle_05::Circle_05(int r) {
	this->radius = r;
}

int Circle_05::getRadius() {
	return this->radius;
}

void Circle_05::setRadius(int r) {
	this->radius = r;
}

void Circle_05::show() {
	cout << "반지름이 " << this->radius << "인 원" << endl;
}

void increaseBy(Circle_05& a, Circle_05& b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}

void solution_05() {
	Circle_05 x(10), y(5);
	increaseBy(x, y);
	x.show();
}