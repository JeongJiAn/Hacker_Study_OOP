#include <iostream>
#include "number_5.h"
using namespace std;

void solution_5() {
	char str[100];
	cout << "문자들을 입력하라(100개 미안)." << endl;
	cin.getline(str, 100);
	int cnt = 0;
	for (int i = 0; i < 100; i++) {
		if (str[i] == 'x') {
			cnt++;
		}
	}
	cout << "x의 개수는 " << cnt << endl;
}