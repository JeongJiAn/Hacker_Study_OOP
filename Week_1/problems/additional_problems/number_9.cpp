#include <iostream>
#include <string>
#include "number_9.h"
using namespace std;

void solution_9() {
	string name, address;
	int age;
	cout << "�̸���?";
	getline(cin, name);
	cout << "�ּҴ�?";
	getline(cin, address);
	cout << "���̴�?";
	cin >> age;
	cout << name << ", " << address << ", " << age << "��" << endl;
}