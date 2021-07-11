#include <iostream>
#include <iomanip>
#include "number_16.h"
using namespace std;

void solution_16() {
	char str[10000];
	int length, alpha = 0;
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(str, 10000, ';');
	for (int i = 0; i < 10000; i++) {
		if (str[i] == '\0') {
			length = i;
			break;
		}
	}
	for (int i = 0; i < length; i++) {
		if (isalpha(str[i])) {
			str[i] = tolower(str[i]);
			alpha++;
		}
	}
	cout << "총 알파벳 수 ";
	cout << alpha << endl << endl;
	for (int i = 0; i < length; i++) {
		if (!isalpha(str[i])) {
			str[i] = '{';
		}
	}
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if ((int)str[i] > (int)str[j]) {
				char temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	int cnt = 97;
	int char_cnt = 0;
	for (int i = 0; i < length; i++) {
		if (cnt > 122) {
			break;
		}
		if (str[i] != (char)cnt) {
			if (char_cnt > 10) {
				cout << (char)cnt << " " << "(" << char_cnt << ")  :";
			}
			else if (char_cnt < 10) {
				cout << (char)cnt << " " << "(" << char_cnt << ")   :";
			}
			for (int j = 0; j < char_cnt; j++) {
				cout << "*";
			}
			cout << endl;
			cnt++;
			i = i - 1;
			char_cnt = 0;
			continue;
		}
		char_cnt++;
	}
}