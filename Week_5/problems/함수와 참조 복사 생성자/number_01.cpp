#include "number_01.h"
#include <iostream>
using namespace std;

Circle_01::Circle_01(int r) {
	this->radius = r;
}

Circle_01::Circle_01(const Circle_01& rhs) {
	this->radius = rhs.radius;
}

int Circle_01::getRadius() {
	return this->radius;
}

void Circle_01::setRadius(int r) {
	this->radius = r;
}

void Circle_01::show() {
	cout << "반지름이 " << this->radius << "인 원" << endl;
}

void swap(Circle_01& c1, Circle_01& c2) {
	Circle_01 temp(c1);
	c1.setRadius(c2.getRadius());
	c2.setRadius(temp.getRadius());
}

void solution_01() {
	Circle_01 a(10), b(20);
	cout << "radius of a : " << a.getRadius() << endl << "radius of b : " << b.getRadius() << endl;
	swap(a, b);
	cout << "After Swap" << endl;
	cout << "radius of a : " << a.getRadius() << endl << "radius of b : " << b.getRadius() << endl;
}