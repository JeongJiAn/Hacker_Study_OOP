#include <iostream>
#include <string>
#include "number_6.h"
using namespace std;

void solution_6() {
	string str1, str2;
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	getline(cin, str1);
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	getline(cin, str2);
	if (str1 == str2) {
		cout << "�����ϴ�" << endl;
	}
	else {
		cout << "���� �ʽ��ϴ�" << endl;
	}
}