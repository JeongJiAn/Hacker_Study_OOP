#include <iostream>
#include "number_3.h"
using namespace std;

void solution_3() {
	int x, y;
	int max;
	cout << "�� ���� �Է��϶�>>";
	cin >> x >> y;
	if (x >= y){
		max = x;
	}
	else {
		max = y;
	}
	cout << "ū �� = " << max << endl;
}