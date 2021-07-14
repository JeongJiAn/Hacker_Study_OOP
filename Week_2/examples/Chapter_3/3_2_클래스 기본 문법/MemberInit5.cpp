#include <iostream>
using namespace std;

class CTest {
public:
	CTest() {}

	int m_n_data1 = 10;
	int m_n_data2 = 20;

	void printData() {
		cout << m_n_data1 << endl << m_n_data2 << endl;
	}
};

void main() {
	CTest t;
	t.printData();
}