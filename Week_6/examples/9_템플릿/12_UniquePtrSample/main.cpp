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
		cout << "TestFunc()" << endl;
	}
};

void main() {
	unique_ptr<CTest> ptr1(new CTest);
	//unique_ptr<CTest> ptr2(ptr1);
	//ptr2 = ptr1;
}