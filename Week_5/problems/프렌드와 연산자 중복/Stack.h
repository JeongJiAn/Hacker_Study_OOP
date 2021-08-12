#pragma once
#include<iostream>
using namespace std;
class Stack
{
	int* data;
	int data_size;
public:
	Stack() {
		this->data_size = 0;
		this->data = new int[this->data_size];
	}

	int operator!() {
		return !(this->data_size);
	}

	friend Stack& operator<<(Stack&, int);
	friend void operator>>(Stack&, int&);
};

