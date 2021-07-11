#include <iostream>
#include <string>
#include "number_10.h"
using namespace std;

void solution_10() {
	string str;
	cout << "문자열 입력>>";
	getline(cin, str);
	int length;
	for (int i = 0; i < sizeof(str); i++){
		if (str[i] == '\0') {
			length = i;
			break;
		}
	}
	int cnt = 1;
	while (cnt <= length) {
		int cnt_ = 0;
		for (auto n : str) {
			cout << n;
			cnt_++;
			if (cnt_ == cnt) {
				break;
			}
		}
		cnt++;
		cout << endl;
	}
}