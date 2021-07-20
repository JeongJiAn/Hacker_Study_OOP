#include <iostream>
#include <cstdio>
#include <ctime>
#include "number_5.h"
using namespace std;

Random::Random() {
	srand(time(NULL));
}

int Random::next() {
	this->num = rand();
	return this->num;
}

int Random::nextInRange(int start, int end) {
	this->num = rand() % end + start;
	return this->num;
}

void solution_5() {
	Random r;
	cout << "-- 0 ���� " << RAND_MAX << "������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}