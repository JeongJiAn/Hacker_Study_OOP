#include <iostream>
using namespace std;

class CTest {
public:
	CTest(int nParam) : m_n_data(nParam) {
		m_n_count++;
	}
	int getData() {
		return m_n_data;
	}
	void resetCount() {
		m_n_count = 0;
	}

	static int getCount() {
		return m_n_count;
	}

private:
	int m_n_data;

	static int m_n_count;
};

int CTest::m_n_count = 0;

void main() {
	CTest a(5), b(10);

	cout << a.getCount() << endl;
	b.resetCount();
	cout << CTest::getCount() << endl;
}