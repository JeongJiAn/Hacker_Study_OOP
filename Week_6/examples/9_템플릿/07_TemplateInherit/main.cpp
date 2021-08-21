#include "CMyDataEx.h"

void main() {
	CMyDataEx<int> a;
	a.setData(5);
	cout << a.getData() << endl;
}