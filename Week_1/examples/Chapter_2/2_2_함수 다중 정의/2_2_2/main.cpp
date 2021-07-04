#include <iostream>
using namespace std;

void testFunc(int);
void testFunc(int, int = 10);

void main() {
	testFunc(5);
}

void testFunc(int a) {
	cout << "testFunc(int)" << endl;
}

void testFunc(int a, int b) {
	cout << "testFunc(int, int)" << endl;
}