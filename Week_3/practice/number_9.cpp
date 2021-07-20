#include <iostream>
#include "number_9.h"
using namespace std;

Oval::Oval() {
	this->width = 1;
	this->height = 1;
}

Oval::Oval(int width, int height) {
	this->width = width;
	this->height = height;
}

Oval::~Oval() {
	cout << "Oval ¼Ò¸ê : width = " << this->width << ", height = " << this->height << endl;
}

int Oval::getWidth() {
	return this->width;
}

int Oval::getHeight() {
	return this->height;
}

void Oval::set(int width, int height) {
	this->width = width;
	this->height = height;
}

void Oval::show() {
	cout << "width = " << this->width << ", height = " << this->height << endl;
}

void solution_9() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}