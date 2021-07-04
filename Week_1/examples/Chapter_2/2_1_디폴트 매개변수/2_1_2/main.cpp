#include <iostream>
using namespace std;

int testFunc(int, int = 2);

void main() {
	cout << testFunc(10) << endl;
	cout << testFunc(10, 5) << endl;
}

int testFunc(int n_param1, int n_param2) {
	return n_param1 * n_param2;
}