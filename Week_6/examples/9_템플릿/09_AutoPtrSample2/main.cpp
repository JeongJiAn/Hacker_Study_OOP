#include <memory>
#include <iostream>
using namespace std;

class CMyData {
public:
	CMyData() {
		cout << "CMyData()" << endl;
	}
	~CMyData() {
		cout << "~CMyData()" << endl;
	}
	void testFunc() {
		cout << "CMyData::testFunc()" << endl;
	}
};

void main() {
	auto_ptr<CMyData> ptrTest(new CMyData);
	auto_ptr<CMyData> ptrNew;
	cout << "0x" << ptrTest.get() << endl;

	ptrNew = ptrTest;
	cout << "0x" << ptrTest.get() << endl;
	ptrTest->testFunc();
}