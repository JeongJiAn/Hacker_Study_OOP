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

void main() {
	cout << "*****Begin*****" << endl;
	shared_ptr<CTest> ptr1(new CTest);
	cout << "Counter: " << ptr1.use_count() << endl;
	{
		//shared_ptr<CTest> ptr2(ptr1);
		shared_ptr<CTest> ptr2;
		ptr2 = ptr1;
		cout << "Counter: " << ptr1.use_count() << endl;
		ptr2->testFunc();
	}
	cout << "Counter: " << ptr1.use_count() << endl;
	ptr1->testFunc();
	cout << "******End******" << endl;
}