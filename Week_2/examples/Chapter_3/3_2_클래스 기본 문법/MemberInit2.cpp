#include <iostream>
using namespace std;

class CTest {
public:
	CTest() {
		cout << "CTest() : ������ �Լ�" << endl;
		m_n_data = 10;
	}

	int m_n_data;

	void printData() {
		cout << m_n_data << endl;
	}
};

void main() {
	cout << "main() �Լ� ����" << endl;

	CTest t;
	t.printData();

	cout << "main() �Լ� ��" << endl;
}