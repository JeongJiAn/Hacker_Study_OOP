#pragma once
#include<iostream>
using namespace std;
class Statistics
{
	int* data;
	int data_size;
public:
	Statistics() {
		this->data_size = 0;
		this->data = new int[this->data_size];
	}
	~Statistics() {
		delete[] this->data;
	}

	int operator!() {
		return !(this->data_size);
	}

	friend Statistics& operator<<(Statistics& s, int);

	void operator~() {
		for (int i = 0; i < this->data_size; i++) {
			cout << this->data[i] << ' ';
		}
		cout << endl;
	}

	friend Statistics& operator>>(Statistics& s, int&);
};

