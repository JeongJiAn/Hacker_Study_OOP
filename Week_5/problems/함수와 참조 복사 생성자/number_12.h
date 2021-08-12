#pragma once
#include<iostream>
using namespace std;
class Dept
{
	int size;
	int* scores;
public:
	Dept(int);
	~Dept();

	int getSize();
	void read();
	bool isOver60(int);
};

int countPass(Dept&);
void solution_12();