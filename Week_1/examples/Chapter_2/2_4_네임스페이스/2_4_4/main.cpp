#include <iostream>
using namespace std;

void testFunc() {
	cout << "::testFunc()" << endl;
}

namespace TEST
{
	void testFunc() {
		cout << "TEST::testFunc()" << endl;
	}
}

namespace MYDATA
{
	void testFunc() {
		cout << "MTDATA::testFunc()" << endl;
	}
}

void main() {
	testFunc();
	::testFunc();
	TEST::testFunc();
	MYDATA::testFunc();
}