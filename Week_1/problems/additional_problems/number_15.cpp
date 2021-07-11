#include <iostream>
#include "number_15.h"
using namespace std;

void solution_15() {
	while (true) {
		int x, y, result;
		char op;
		cout << "? ";
		cin >> x >> op >> y;
		if (op == '+') {
			result = x + y;
					}
		else if (op == '*') {
			result = x * y;
					}
		else if (op == '-') {
			result = x - y;
					}
		else if (op == '/') {
			result = x / y;
					}
		else if (op == '%') {
			result = x % y;
					}
		cout << x << ' ' << op << ' ' << y << " = " << result;
		cout << endl;
	}
}