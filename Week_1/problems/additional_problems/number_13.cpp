#include <iostream>
#include "number_13.h"
using namespace std;

void solution_13() {
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;
	while (true) {
		int select;
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		cin >> select;
		if (select == 4) {
			cout << "���� ������ �������ϴ�." << endl;
			break;
		}
		else if (select == 1 || select == 2 || select == 3) {
			int dishes;
			cout << "���κ�?";
			cin >> dishes;
			if (select == 1){
				cout << "«�� " << dishes << "�κ� ���Խ��ϴ�" << endl;
			}
			else if (select == 2) {
				cout << "¥�� " << dishes << "�κ� ���Խ��ϴ�" << endl;
			}
			else if (select == 3) {
				cout << "������ " << dishes << "�κ� ���Խ��ϴ�" << endl;
			}
		}
		else {
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
		}
	}
}