#include <iostream>
#include <string>
using namespace std;

int main() {
	int age;
	string name;
	cout << "나이 : ";
	cin >> age;
	cout << "이름 : ";
	cin.ignore();
	getline(cin, name);
	cout << "나의 이름은 " << name << "이고, " << age << "살입니다." << endl;
	return 0;
}