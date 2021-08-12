#pragma once
class Circle_01
{
	int radius;

public:
	Circle_01(int);
	Circle_01(const Circle_01&);

	int getRadius();
	void setRadius(int);
	void show();
};

void solution_01();