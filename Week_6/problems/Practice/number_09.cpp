#include "number_09.h"
#include "AirlineBook.h"

void solution_09() {
	Console c;
	AirlineBook a;
	cout << "***** 한성항공에 오신 것을 환영합니다 *****" << endl;
	int select;
	int time;
	int num;
	string name;
	while (true) {
		cout << endl << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
		cin >> select;
		if (select == 1) {
			cout << "07시:1, 12시:2, 17시:3>> ";
			cin >> time;
			if (time == 1) {
				cout << "07시: ";
			}
			if (time == 2) {
				cout << "12시: ";
			}
			if (time == 3) {
				cout << "17시: ";
			}
			for (int i = 1; i < 9; i++) {
				a.show(time, i);
				cout << ' ';
			}
			cout << endl << "좌석 번호>> ";
			cin >> num;
			cin.ignore();
			cout << "이름 입력>> ";
			getline(cin, name);
			a.booking(name, num, time);
		}
		else if (select == 2) {
			cout << "07시:1, 12시:2, 17시:3>> ";
			cin >> time;
			if (time == 1) {
				cout << "07시: ";
			}
			if (time == 2) {
				cout << "12시: ";
			}
			if (time == 3) {
				cout << "17시: ";
			}
			for (int i = 1; i < 9; i++) {
				a.show(time, i);
				cout << ' ';
			}
			cout << endl << "좌석 번호>> ";
			cin >> num;
			cin.ignore();
			cout << "이름 입력>> ";
			getline(cin, name);
			a.cancel(name, num, time);
		}
		else if (select == 3) {
			for (int i = 1; i < 4; i++) {
				if (i == 1) {
					cout << "07시: ";
				}
				else if (i == 2) {
					cout << "12시: ";
				}
				else if (i == 3) {
					cout << "17시: ";
				}
				for (int j = 1; j < 9; j++) {
					a.show(i, j);
					cout << ' ';
				}
				cout << endl;
			}
		}
		else if (select == 4) {
			cout << "예약 시스템을 종료합니다." << endl;
			break;
		}
	}
}