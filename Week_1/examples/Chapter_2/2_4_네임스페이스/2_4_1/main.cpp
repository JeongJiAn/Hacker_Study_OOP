#include <iostream>
using namespace std;

namespace TEST
{
	int g_n_data = 100;
	void testFunc() {
		cout << "TEST::testFunc()" << endl;
	}
}

void main() {
	TEST::testFunc();
	cout << TEST::g_n_data << endl;
}