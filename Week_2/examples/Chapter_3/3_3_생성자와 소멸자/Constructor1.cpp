#include <iostream>
using namespace std;

class CTest {
public:
	CTest() {
		cout << "CTest::CTest()" << endl;
	}

	~CTest() {
		cout << "~CTest::CTest()0" << endl;
	}
};

void main() {
	cout << "Begin" << endl;
	CTest t;
	cout << "End" << endl;
}