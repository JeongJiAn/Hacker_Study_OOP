#include "CMyArray.h"

void main() {
	CMyArray<> arr;
	for (int i = 0; i < 3; i++) {
		arr[i] = (i + 1) * 10;
	}

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << endl;
	}
}