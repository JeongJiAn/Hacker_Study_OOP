#include <iostream>
using namespace std;

void testFunc(int& r_param);

void main() {
	int n_data = 0;

	testFunc(n_data);
	cout << n_data << endl;
}

void testFunc(int& r_param) {
	r_param = 100;
}