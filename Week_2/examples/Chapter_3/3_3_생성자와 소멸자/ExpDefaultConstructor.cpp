#include <iostream>
using namespace std;

class CTest {
public:
	CTest();
	int m_n_data = 5;
};

void main() {
	CTest a;
	cout << a.m_n_data << endl;
}

CTest::CTest() { }