#include "number_09.h"
#include "AirlineBook.h"

void solution_09() {
	Console c;
	AirlineBook a;
	cout << "***** �Ѽ��װ��� ���� ���� ȯ���մϴ� *****" << endl;
	int select;
	int time;
	int num;
	string name;
	while (true) {
		cout << endl << "����:1, ���:2, ����:3, ������:4>> ";
		cin >> select;
		if (select == 1) {
			cout << "07��:1, 12��:2, 17��:3>> ";
			cin >> time;
			if (time == 1) {
				cout << "07��: ";
			}
			if (time == 2) {
				cout << "12��: ";
			}
			if (time == 3) {
				cout << "17��: ";
			}
			for (int i = 1; i < 9; i++) {
				a.show(time, i);
				cout << ' ';
			}
			cout << endl << "�¼� ��ȣ>> ";
			cin >> num;
			cin.ignore();
			cout << "�̸� �Է�>> ";
			getline(cin, name);
			a.booking(name, num, time);
		}
		else if (select == 2) {
			cout << "07��:1, 12��:2, 17��:3>> ";
			cin >> time;
			if (time == 1) {
				cout << "07��: ";
			}
			if (time == 2) {
				cout << "12��: ";
			}
			if (time == 3) {
				cout << "17��: ";
			}
			for (int i = 1; i < 9; i++) {
				a.show(time, i);
				cout << ' ';
			}
			cout << endl << "�¼� ��ȣ>> ";
			cin >> num;
			cin.ignore();
			cout << "�̸� �Է�>> ";
			getline(cin, name);
			a.cancel(name, num, time);
		}
		else if (select == 3) {
			for (int i = 1; i < 4; i++) {
				if (i == 1) {
					cout << "07��: ";
				}
				else if (i == 2) {
					cout << "12��: ";
				}
				else if (i == 3) {
					cout << "17��: ";
				}
				for (int j = 1; j < 9; j++) {
					a.show(i, j);
					cout << ' ';
				}
				cout << endl;
			}
		}
		else if (select == 4) {
			cout << "���� �ý����� �����մϴ�." << endl;
			break;
		}
	}
}