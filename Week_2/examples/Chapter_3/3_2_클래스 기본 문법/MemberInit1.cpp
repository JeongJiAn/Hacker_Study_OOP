#include <iostream>
using namespace std;

class CTest {
public:
	CTest() {
		m_n_data = 10;
	}

	int m_n_data;

	void printData() {
		cout << m_n_data << endl;
	}
};

void main() {
	CTest t;
	t.printData();
}