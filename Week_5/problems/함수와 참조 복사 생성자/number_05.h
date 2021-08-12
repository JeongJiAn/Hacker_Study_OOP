#pragma once
#include<iostream>
using namespace std;
class Circle_05
{
	int radius;
public:
	Circle_05(int);
	int getRadius();
	void setRadius(int);
	void show();
};

void increaseBy(Circle_05& a, Circle_05& b);
void solution_05();