#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b(a);
	// c�� �ڷ����� b�� �ڷ������� ����
	auto c(b);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}