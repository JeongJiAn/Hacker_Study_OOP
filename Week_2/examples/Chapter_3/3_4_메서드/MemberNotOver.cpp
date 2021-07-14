#include <iostream>
using namespace std;

void testFunc(int nParam) {
	cout << nParam << endl;
}

void main() {
	testFunc(10);
	testFunc(5.5);
}