#include "number_07.h"

MyIntStack::MyIntStack() {
	*(this->p) = { 0 };
	this->tos = 0;
}

bool MyIntStack::push(int n) {
	if (this->tos == 10) {
		return false;
	}
	this->p[this->tos] = n;
	this->tos++;
	return true;
}

bool MyIntStack::pop(int& n) {
	if (this->tos == 0) {
		return false;
	}
	n = p[this->tos - 1];
	this->tos--;
	return true;
}

void MyIntStack::show() {
	cout << tos << endl;
	for (int i = 0; i < 10; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;
}

void solution_07() {
	MyIntStack a;
	for (int i = 0; i < 11; i++) {
		if (a.push(i)) {
			cout << i << ' ';
		}
		else {
			cout << endl << i + 1 << " 번째 stack full" << endl;
		}
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) {
			cout << n << ' ';
		}
		else {
			cout << endl << i + 1 << " 번째 stack empty" << endl;
		}
	}
}