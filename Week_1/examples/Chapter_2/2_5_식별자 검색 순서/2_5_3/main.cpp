#include <iostream>
using namespace std;

int n_data = 200;

namespace TEST
{
	int n_data = 100;
	void testFunc() {
		cout << n_data << endl;
	}
}

void main() {
	TEST::testFunc();
}