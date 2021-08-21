#pragma once
#include <iostream>
using namespace std;
class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) {
		this->mem = new char[size];
	}
	void burn(char* x, int size) {
		for (int i = 0; i < size; i++) {
			this->mem[i] = x[i];
		}
	}
	void putData(int index, char data) {
		this->mem[index] = data;
	}
	char getData(int index) {
		return this->mem[index];
	}
};