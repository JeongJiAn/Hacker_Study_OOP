#include <iostream>
#include "number_3.h"
using namespace std;

void solution_3() {
	int x, y;
	int max;
	cout << "두 수를 입력하라>>";
	cin >> x >> y;
	if (x >= y){
		max = x;
	}
	else {
		max = y;
	}
	cout << "큰 수 = " << max << endl;
}