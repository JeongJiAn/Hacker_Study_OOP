#include <iostream>
#include <string>
#include "number_9.h"
using namespace std;

void solution_9() {
	string name, address;
	int age;
	cout << "이름은?";
	getline(cin, name);
	cout << "주소는?";
	getline(cin, address);
	cout << "나이는?";
	cin >> age;
	cout << name << ", " << address << ", " << age << "세" << endl;
}