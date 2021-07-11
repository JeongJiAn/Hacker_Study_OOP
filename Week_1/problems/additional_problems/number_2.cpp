#include <iostream>
#include "number_2.h"
using namespace std;

void solution_2() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << j << "x" << i << "=" << i * j << '\t';
		}
		cout << endl;
	}
}