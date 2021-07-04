#include <iostream>
using namespace std;

int n_data = 100;

namespace TEST
{
	int n_data = 200;
}

using namespace TEST;

void main() {
	cout << n_data << endl;
}