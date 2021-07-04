#include <iostream>
using namespace std;

int testFunc(int = 10);

void main() {
	cout << testFunc() << endl;

	cout << testFunc(20) << endl;
}

int testFunc(int n_param) {
	return n_param;
}