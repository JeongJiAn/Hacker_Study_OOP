#pragma once
#include<iostream>
using namespace std;
class Color
{
	int r, g, b;
public:
	Color() {
		this->r = 0;
		this->g = 0;
		this->b = 0;
	}
	Color(int r, int g, int b) {
		this->r = r;
		this->g = g;
		this->b = b;
	}

	void show() {
		cout << r << ' ' << g << ' ' << b << endl;
	}
	Color& operator+(const Color& rhs) {
		this->r += rhs.r;
		this->g += rhs.g;
		this->b += rhs.b;
		if (this->r > 255) {
			this->r = 255;
		}
		if (this->g > 255) {
			this->g = 255;
		}
		if (this->b > 255) {
			this->b = 255;
		}
		return *this;
	}
	int operator==(const Color& rhs) {
		return (this->r == rhs.r && this->g == rhs.g && this->b == rhs.b);
	}
};

