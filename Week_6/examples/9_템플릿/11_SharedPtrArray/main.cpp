#include <memory>
#include <iostream>
using namespace std;

class CTest {
public:
	CTest() {
		cout << "CTest()" << endl;
	}
	~CTest() {
		cout << "~CTest()" << endl;
	}
	void testFunc() {
		cout << "testFunc()" << endl;
	}
};

void removeTest(CTest* pTest) {
	cout << "removeTest()" << endl;
	delete[] pTest;
}

void main() {
	cout << "*****Begin*****" << endl;
	shared_ptr<CTest> ptr(new CTest[3], removeTest);
	cout << "******End******" << endl;
}