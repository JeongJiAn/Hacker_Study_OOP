#include <iostream>
using namespace std;

void testFunc(const int& nParam) {
	int& newParam = const_cast<int&>(nParam);
	newParam = 20;
}

void main() {
	int n_data = 10;
	testFunc(n_data);
	cout << n_data << endl;
}