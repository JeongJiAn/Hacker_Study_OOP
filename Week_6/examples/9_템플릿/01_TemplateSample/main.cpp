#include "CMyData.h"

void main() {
	CMyData<int> a(5);
	cout << a << endl;
	CMyData<double> b(123.45);
	cout << b << endl;
	CMyData<char*> c((char*)"Hello");
	cout << c << endl;
}