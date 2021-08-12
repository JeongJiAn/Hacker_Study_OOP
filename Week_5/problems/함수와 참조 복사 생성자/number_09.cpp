#include "number_09.h"

Accumulator::Accumulator(int value) {
	this->value = value;
}

Accumulator& Accumulator::add(int n) {
	this->value += n;
	return *this;
}

int Accumulator::get() {
	return this->value;
}

void solution_09() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	cout<<acc.get();
}