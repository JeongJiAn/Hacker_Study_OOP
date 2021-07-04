#include <iostream>
using namespace std;

int testFunc(int n_param);

void main() {
	int n_input = 0;
	cout << "Input number: ";
	cin >> n_input;

	int&& r_data = n_input + 5;
	cout << r_data << endl;

	int&& result = testFunc(10);

	result += 10;
	cout << result << endl;
}

int testFunc(int n_param) {
	int n_result = n_param * 2;
	return n_result;
}