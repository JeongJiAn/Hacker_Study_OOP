#pragma once
#include <iostream>
using namespace std;
class Point {
	int x, y;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int getX() {
		return this->x;
	}
	int getY() {
		return this->y;
	}
protected:
	void move(int x, int y) {
		this->x = x;
		this->y = y;
	}
};