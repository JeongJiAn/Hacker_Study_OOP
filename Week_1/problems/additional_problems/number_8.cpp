#include <iostream>
#include "number_8.h"
using namespace std;

void solution_8() {
	char names[5][100];
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요" << endl << ">>";
	for (int i = 0; i < 5; i++) {
		cin.getline(names[i], 100, ';');
	}
	for (int i = 0; i < 5; i++) {
		cout << i+1 << " : " << names[i] << endl;
	}
	int length[5];
	int max = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 100; j++) {
			if (names[i][j] == '\0') {
				length[i] = j;
			}
		}
		if (length[max] < length[i]) {
			max = i;
		}
	}
	cout << "가장 긴 이름은 " << names[max] << endl;
}