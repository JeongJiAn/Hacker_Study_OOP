#include <iostream>
using namespace std;

void main() {
	int n_input = 0;
	cout << "11 이상의 정수를 입력하세요" << endl;
	cin >> n_input;

	if (n_input > 10) {
		cout << n_input << endl;
	}
	else {
		cout << "Error" << endl;
	}
}