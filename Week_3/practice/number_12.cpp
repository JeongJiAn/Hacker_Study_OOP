#include <iostream>
#include "number_12.h"
using namespace std;

Ram::Ram() {
	this->size = 100 * 1024;
	for (int i = 0; i < this->size; i++) {
		this->mem[i] = 0;
	}
}

Ram::~Ram() {
	cout << "메모리 제거됨" << endl;
}

char Ram::read(int address) {
	return this->mem[address];
}

void Ram::write(int address, char value) {
	this->mem[address] = value;
}

void solution_12() {
	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);
	cout << "102 번지의 값 = " << (int)ram.read(102) << endl;
}