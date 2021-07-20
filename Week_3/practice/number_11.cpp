#include <iostream>
#include "number_11.h"
using namespace std;

Box::Box(int width, int height) {
	this->setSize(width, height);
	this->fill = '*';
}

void Box::setFill(char fill) {
	this->fill = fill;
}

void Box::setSize(int width, int height) {
	this->width = width;
	this->height = height;
}

void Box::draw() {
	for (int i = 0; i < this->height; i++) {
		for (int j = 0; j < this->width; j++) {
			cout << this->fill;
		}
		cout << endl;
	}
}

void solution_11() {
	Box b(10, 2);
	b.draw();
	cout << endl;
	b.setSize(7, 4);
	b.setFill('^');
	b.draw();
}