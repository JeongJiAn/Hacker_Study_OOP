#include <iostream>
using namespace std;

void main() {
	int n_data = 10;

	int& ref = n_data;

	ref = 20;
	cout << n_data << endl;

	int* p_n_data = &n_data;
	*p_n_data = 30;
	cout << n_data << endl;
}