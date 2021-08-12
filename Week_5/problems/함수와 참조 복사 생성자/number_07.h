#pragma once
#include<iostream>
using namespace std;
class MyIntStack
{
	int p[10];
	int tos;
public:
	MyIntStack();
	bool push(int);
	bool pop(int& n);
	void show();
};

void solution_07();