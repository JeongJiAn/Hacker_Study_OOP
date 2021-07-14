#include <iostream>
using namespace std;

class CRefTest {
public:
	CRefTest(int& rParam) : m_n_data(rParam) {};
	int getData() {
		return m_n_data;
	}
private:
	int &m_n_data;
};

void main() {
	int a = 10;
	CRefTest t(a);
	cout << t.getData() << endl;
	a = 20;
	cout << t.getData() << endl;
}