#include <iostream>
#include <string>
#include "number_7.h"
using namespace std;

void solution_7() {
	while (true) {
		char str[100];
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(str, 100);
		if (str[0] == 'y' && str[1] == 'e' && str[2] == 's' && str[3] == '\0') {
			cout << "종료합니다..." << endl;
			break;
		}
	}
}