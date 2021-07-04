#include <iostream>
using namespace std;

void testFunc(int a) {
	cout << "testFunc(int)" << endl;
}

void testFunc(int a, int b = 10) {
	cout << "testFunc(int, int)" << endl;
}

void main() {
	testFunc(10); // 두 함수 중 어느 것을 호출하는 지 모호함.
}