#pragma once
#include<iostream>
using namespace std;
class MyIntStack_08
{
	int* p;
	int size;
	int tos;
public:
	MyIntStack_08();
	MyIntStack_08(int);
	MyIntStack_08(const MyIntStack_08&);
	~MyIntStack_08();

	bool push(int);
	bool pop(int&);
	void show();
};

void solution_08();