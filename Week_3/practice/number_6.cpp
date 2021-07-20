#include <iostream>
#include <cstdio>
#include <ctime>
#include "number_6.h"
using namespace std;

EvenRandom::EvenRandom() {
	srand(time(NULL));
}

int EvenRandom::next() {
	while (true) {
		this->num = rand();
		if (this->num % 2 == 0) {
			return this->num;
		}
	}
}

int EvenRandom::nextInRange(int start, int end) {
	while (true) {
		this->num = rand() % end + start;
		if (this->num % 2 == 0) {
			return this->num;
		}
	}
}

void solution_6() {
	EvenRandom r;
	cout << "-- 0 ���� " << RAND_MAX << "������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}