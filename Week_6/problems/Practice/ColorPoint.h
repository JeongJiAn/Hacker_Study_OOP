#pragma once
#include "Point.h"
class ColorPoint : public Point {
	string color;
public:
	ColorPoint() : Point(0, 0) {
		this->color = "BLACK";
	}
	ColorPoint(int x, int y, string color = "BLACK") : Point(x, y) {
		this->color = color;
	}

	void setPoint(int x, int y) {
		this->move(x, y);
	}
	void setColor(string color) {
		this->color = color;
	}
	void show() {
		cout << this->color << "색으로 (" << this->getX() << "," << this->getY() << ")에 위치한 점입니다." << endl;
	}
};