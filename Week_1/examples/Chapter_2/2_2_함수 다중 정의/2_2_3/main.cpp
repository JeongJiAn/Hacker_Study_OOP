#include <iostream>
using namespace std;

template <typename T>
T testFunc(T a) {
	cout << "?Ű????? a: " << a << endl;

	return a;
}

void main() {
	cout << "int\t" << testFunc(3) << endl;
	cout << "double\t" << testFunc(3.3) << endl;
	cout << "char\t" << testFunc('A') << endl;
	cout << "char*\t" << testFunc("TestString") << endl;
}