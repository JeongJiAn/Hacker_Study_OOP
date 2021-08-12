#include"number_04.h"

bool bigger(int a, int b, int& big) {
	if (a == b) {
		big = a;
		return true;
	}
	else {
		if (a > b) {
			big = a;
		}
		else {
			big = b;
		}
		return false;
	}
}

void solution_04() {
	int x = 20, y = 20, big_ = 0;
	cout << bigger(x, y, big_) << endl;
	cout << "big_ is : " << big_ << endl;
	x = 30;
	cout << bigger(x, y, big_) << endl;
	cout << "big_ is : " << big_ << endl;
}