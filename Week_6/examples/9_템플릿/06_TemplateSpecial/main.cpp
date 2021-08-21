#include "CMyData.h"

void main() {
	CMyData<char*> a((char*)"Hello");
	cout << a.getData() << endl;
}