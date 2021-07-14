#include <iostream>
using namespace std;

class CMyData {
public:
	CMyData(int nParam) : m_n_data(nParam) {};
	void printData() {
		cout << m_n_data << endl;
		cout << CMyData::m_n_data << endl;
		cout << this->m_n_data << endl;
		cout << this->CMyData::m_n_data << endl;
	}

private:
	int m_n_data;
};

void main() {
	CMyData a(5), b(10);
	a.printData();
	b.printData();
}