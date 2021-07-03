#include <iostream>
using namespace std;

int main() {
	char* arr = new char[12];
	for (int i = 0; i < 12; i++) {
		arr[i] = char(97 + i);
	}
	for (int i = 0; i < 12; i++) {
		cout << arr[i] << ' ';
	}
	delete[] arr;
	return 0;
}