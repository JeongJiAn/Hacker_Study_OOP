#include <iostream>
#include "number_13.h"
using namespace std;

void solution_13() {
	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;
	while (true) {
		int select;
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
		cin >> select;
		if (select == 4) {
			cout << "오늘 영업은 끝났습니다." << endl;
			break;
		}
		else if (select == 1 || select == 2 || select == 3) {
			int dishes;
			cout << "몇인분?";
			cin >> dishes;
			if (select == 1){
				cout << "짬뽕 " << dishes << "인분 나왔습니다" << endl;
			}
			else if (select == 2) {
				cout << "짜장 " << dishes << "인분 나왔습니다" << endl;
			}
			else if (select == 3) {
				cout << "군만두 " << dishes << "인분 나왔습니다" << endl;
			}
		}
		else {
			cout << "다시 주문하세요!!" << endl;
		}
	}
}