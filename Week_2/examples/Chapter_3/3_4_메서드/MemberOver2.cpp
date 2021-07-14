#include <iostream>
using namespace std;

class CMyData {
public:
	CMyData() : m_n_data(0) {}
	int getData() {
		return m_n_data;
	}
	void setData(int nParam) {
		m_n_data = nParam;
	}

	void setData(double dParam) = delete;

private:
	int m_n_data;
};

void main() {
	CMyData a;
	a.setData(10);
	cout << a.getData() << endl;

	CMyData b;
	b.setData(5.5);
	cout << b.getData() << endl;
}