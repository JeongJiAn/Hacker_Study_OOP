#include <iostream>
#include <string>
#include "number_14.h"
using namespace std;

void solution_14() {
	char menu[50];
	int cups, sum = 0;
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
	while (sum < 20000) {
		cout << "�ֹ�>> ";
		cin >> menu >> cups;
		if (strcmp(menu, "����������") == 0) {
			cout << 2000 * cups << "���Դϴ�. ���ְ� �弼��" << endl;
			sum += 2000 * cups;
		}
		else if (strcmp(menu, "�Ƹ޸�ī��") == 0) {
			cout << 2300 * cups << "���Դϴ�. ���ְ� �弼��" << endl;
			sum += 2300 * cups;
		}
		else if (strcmp(menu, "īǪġ��") == 0) {
			cout << 2500 * cups << "���Դϴ�. ���ְ� �弼��" << endl;
			sum += 2500 * cups;
		}
	}
	cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;
}