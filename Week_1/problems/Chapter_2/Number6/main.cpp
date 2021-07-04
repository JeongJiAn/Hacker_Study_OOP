#include <iostream>
using namespace std;

int n_data = 200;

namespace TEST
{
	int n_data = 100;
	void testFunc(void) {
		cout << n_data << endl;
	}
}

void main() {
	TEST::testFunc(); // 100 Ãâ·Â
}