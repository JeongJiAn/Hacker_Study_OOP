#include <iostream>
using namespace std;

int main() {
	int a_list[5] = { 10, 20, 30, 40, 50 };
	int len = sizeof(a_list) / sizeof(a_list[0]);
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (a_list[i] < a_list[j]) {
				int temp = a_list[j];
				a_list[j] = a_list[i];
				a_list[i] = temp;
			}
		}
	}
	for (auto n : a_list) {
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}