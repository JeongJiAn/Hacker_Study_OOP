#include <iostream>
using namespace std;

void testFunc(int a) {
	cout << "testFunc(int)" << endl;
}

void testFunc(int a, int b = 10) {
	cout << "testFunc(int, int)" << endl;
}

void main() {
	testFunc(10); // �� �Լ� �� ��� ���� ȣ���ϴ� �� ��ȣ��.
}