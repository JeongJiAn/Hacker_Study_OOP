#pragma once
#include <iostream>
using namespace std;
class BaseArray {
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		this->mem = new int[this->capacity];
	}
	~BaseArray() {
		delete[] mem;
	}
	void put(int index, int val) {
		this->mem[index] = val;
	}
	int get(int index) {
		return this->mem[index];
	}
	int getCapacity() {
		return this->capacity;
	}
};