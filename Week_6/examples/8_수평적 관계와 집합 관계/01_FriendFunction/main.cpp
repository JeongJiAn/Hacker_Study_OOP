#include "CMyData.h"

void printData(const CMyData& rhs) {
	cout << "printData(): " << rhs.data << endl;
}

void main() {
	CMyData a(5);
	printData(a);
}