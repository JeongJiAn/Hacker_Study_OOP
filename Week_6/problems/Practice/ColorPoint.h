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
		cout << this->color << "������ (" << this->getX() << "," << this->getY() << ")�� ��ġ�� ���Դϴ�." << endl;
	}
};