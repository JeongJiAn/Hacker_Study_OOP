#include <iostream>
using namespace std;

namespace TEST
{
	int g_n_data = 100;

	void testFunc() {
		cout << "TEST::testFunc()" << endl;
	}
}

using namespace TEST;

void main() {
	testFunc();
	cout << g_n_data << endl;
}