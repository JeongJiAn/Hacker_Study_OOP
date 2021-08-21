#pragma once
#include "Circle.h"
class NamedCircle : public Circle {
	string name;
public:
	NamedCircle() {	}
	NamedCircle(int radius, string name) {
		this->setRadius(radius);
		this->setName(name);
	}
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
	void show() {
		cout << "�������� " << this->getRadius() << "�� " << this->name;
	}
};