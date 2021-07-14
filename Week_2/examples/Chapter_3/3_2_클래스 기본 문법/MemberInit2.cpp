#include <iostream>
using namespace std;

class CTest {
public:
	CTest() {
		cout << "CTest() : 생성자 함수" << endl;
		m_n_data = 10;
	}

	int m_n_data;

	void printData() {
		cout << m_n_data << endl;
	}
};

void main() {
	cout << "main() 함수 시작" << endl;

	CTest t;
	t.printData();

	cout << "main() 함수 끝" << endl;
}