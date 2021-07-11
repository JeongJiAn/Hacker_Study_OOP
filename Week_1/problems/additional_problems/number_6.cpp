#include <iostream>
#include <string>
#include "number_6.h"
using namespace std;

void solution_6() {
	string str1, str2;
	cout << "새 암호를 입력하세요>>";
	getline(cin, str1);
	cout << "새 암호를 다시 한 번 입력하세요>>";
	getline(cin, str2);
	if (str1 == str2) {
		cout << "같습니다" << endl;
	}
	else {
		cout << "같지 않습니다" << endl;
	}
}