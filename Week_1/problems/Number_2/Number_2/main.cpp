#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b(a);
	// c의 자료형을 b의 자료형으로 지정
	auto c(b);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}