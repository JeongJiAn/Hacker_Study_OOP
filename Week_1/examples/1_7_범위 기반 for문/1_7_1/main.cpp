#include <iostream>
using namespace std;

void main() {
	int a_list[5] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 5; i++) {
		cout << a_list[i] << ' ';
	}

	cout << endl;

	for (auto n : a_list) {
		cout << n << ' ';
	}

	cout << endl;

	for (auto& n : a_list) {
		cout << n << ' ';
	}

	cout << endl;
}