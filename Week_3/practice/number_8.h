#pragma once
#include <iostream>
using namespace std;

class Integer
{
public:
	Integer(int);
	Integer(string);

	void set(int);
	int get();
	int isEven();

private:
	int num;
};

void solution_8();