#include <iostream>
#include "number_1.h"
using namespace std;

void solution_1() {
	for (int i = 1; i <= 100; i++) {
		cout << i << '\t';
		if (i % 10 == 0) {
			cout << endl;
		}
	}
}