#include <iostream>
using namespace std;

class CTest {
public:
	CTest(int nParam) : m_n_data(nParam) {};
	~CTest() {}

	int getData() const {
		return m_n_data;
	}

	int setData(int nParam) { m_n_data = nParam; }

private:
	int m_n_data;
};

void main() {
	CTest a(10);
	cout << a.getData() << endl;
}