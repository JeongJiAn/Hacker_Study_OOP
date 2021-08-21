#include "CMyArray.h"

void main() {
	CMyArray<int> arr(5);

	for (int i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 10;
	}

	for (int i = 0; i < 5; ++i) {
		cout << arr[i] << ' ';
	}
	cout << endl;

	CMyArray<int> arr2(3);
	arr2 = arr;
	for (int i = 0; i < 5; ++i) {
		cout << arr2[i] << ' ';
	}
	cout << endl;
}