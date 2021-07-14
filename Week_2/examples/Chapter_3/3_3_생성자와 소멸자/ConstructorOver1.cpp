#include <iostream>
using namespace std;

class CMyData {
public:
	CMyData(int nParam) : m_n_data(nParam) {};
	CMyData(int x, int y) : m_n_data(x + y) {};

	int getData() {
		return m_n_data;
	}

private:
	int m_n_data;
};

void main() {
	CMyData a(10);
	CMyData b(3, 4);

	cout << a.getData() << endl;
	cout << b.getData() << endl;
}