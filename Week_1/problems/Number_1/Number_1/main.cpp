#include <iostream>
#include <string>
using namespace std;

int main() {
	int age;
	string name;
	cout << "���� : ";
	cin >> age;
	cout << "�̸� : ";
	cin.ignore();
	getline(cin, name);
	cout << "���� �̸��� " << name << "�̰�, " << age << "���Դϴ�." << endl;
	return 0;
}