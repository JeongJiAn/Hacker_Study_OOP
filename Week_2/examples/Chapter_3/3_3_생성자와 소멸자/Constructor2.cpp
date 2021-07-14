#include <iostream>
using namespace std;

class CTest {
	int m_n_data;

public:
	CTest(int nParam) : m_n_data(nParam) {
		cout << "CTest::CTest()" << endl;
	}
	~CTest() {
		cout << "~CTest::CTest() " << m_n_data << endl;
	}
};

void main() {
	cout << "Begin" << endl;
	CTest a(1);
	cout << "Before b" << endl;
	CTest b(2);
	cout << "End" << endl;
}