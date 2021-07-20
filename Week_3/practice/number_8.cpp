#include <iostream>
#include <string>
#include "number_8.h"
using namespace std;

Integer::Integer(int num) {
	this->num = num;
}

Integer::Integer(string str) {
	this->num = stoi(str);
}

int Integer::get() {
	return this->num;
}

void Integer::set(int num) {
	this->num = num;
}

int Integer::isEven() {
	if (this->num % 2 == 0) {
		return 1;
	}
	return 0;
}

void solution_8() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}