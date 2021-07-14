#include <iostream>
using namespace std;

class CMyPoint {
public:
	CMyPoint(int x) {
		cout << "CMyPoint(int)" << endl;
		if (x > 100) {
			x = 100;
		}
		m_x = 100;
	}
	CMyPoint(int x, int y) 
		: CMyPoint(x)
	{
		cout << "CMyPoint(int, int)" << endl;
		if (y > 200) {
			y = 200;
		}
		m_y = 200;
	}

	void print() {
		cout << "X: " << m_x << endl << "Y: " << m_y << endl;
	}

private:
	int m_x = 0, m_y = 0;
};

void main() {
	CMyPoint ptBegin(110);
	ptBegin.print();

	CMyPoint ptEnd(50, 250);
	ptEnd.print();

}