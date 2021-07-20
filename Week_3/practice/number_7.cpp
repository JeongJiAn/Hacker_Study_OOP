#include <iostream>
#include <cstdio>
#include <ctime>
#include "number_7.h"
using namespace std;

SelectableRandom::SelectableRandom(int even_or_odd) {
	srand(time(NULL));
	this->even_or_odd = even_or_odd;
}

int SelectableRandom::next() {
	if (this->even_or_odd == 0) {
		while (true) {
			this->num = rand();
			if (this->num % 2 == 0) {
				return this->num;
			}
		}
	}
	else if (this->even_or_odd == 1) {
		while (true) {
			this->num = rand();
			if (this->num % 2 == 1) {
				return this->num;
			}
		}
	}
}

int SelectableRandom::nextInRange(int start, int end) {
	if (this->even_or_odd == 0) {
		while (true) {
			this->num = rand() % end + start;
			if (this->num % 2 == 0) {
				return this->num;
			}
		}
	}
	else if (this->even_or_odd == 1) {
		while (true) {
			this->num = rand() % end + start;
			if (this->num % 2 == 1) {
				return this->num;
			}
		}
	}
}

void solution_7() {
	SelectableRandom r(0);
	cout << "-- 0 에서 " << RAND_MAX << "까지의 랜덤 정수 10 개 --" << endl;
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