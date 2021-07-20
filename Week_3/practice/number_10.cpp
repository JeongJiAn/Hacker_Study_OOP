#include <iostream>
#include "number_10.h"
using namespace std;

void Add::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}

void Sub::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
void Mul::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}

void Div::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}

int Add::calculate() {
	return (this->a + this->b);
}

int Sub::calculate() {
	return (this->a - this->b);
}

int Mul::calculate() {
	return (this->a * this->b);
}

int Div::calculate() {
	return (this->a / this->b);
}

void solution_10() {
	while (true) {
		int x, y;
		char op;
		cout << "두 정수와 연산자를 입력하세요:>>";
		cin >> x >> y >> op;
		if (op == '+') {
			Add a;
			a.setValue(x, y);
			cout << a.calculate() << endl;
		}
		else if (op == '-') {
			Sub b;
			b.setValue(x, y);
			cout << b.calculate() << endl;
		}
		else if (op == '*') {
			Mul c;
			c.setValue(x, y);
			cout << c.calculate() << endl;
		}
		else if (op == '/') {
			Div d;
			d.setValue(x, y);
			cout << d.calculate() << endl;
		}

	}
}