#include <iostream>
using namespace std;

class CTest {
public:
	CTest(int nParam) : m_n_data(nParam) {}
	~CTest() {}

	int getData() const {
		m_n_data = 20;
		return m_n_data;
	}

	int setData(int nParam) { m_n_data = nParam; }

private:
	mutable int m_n_data;
};

void main() {
	CTest a(10);
	cout << a.getData() << endl;
}