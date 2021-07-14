#include <iostream>
using namespace std;

class CTest {
	int m_n_data;
public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest() {
		cout << "~CTest::CTest() " << endl;
	}
};

void main() {
	cout << "Begin" << endl;
	CTest* pData = new CTest;
	cout << "Test" << endl;
	delete pData;
	cout << "End" << endl;
}