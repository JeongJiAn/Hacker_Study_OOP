#include <iostream>
#include <string>
#include "number_3.h"
using namespace std;

Account::Account(string name, int number, int balance) {
	this->name = name;
	this->number = number;
	this->balance = balance;
}

void Account::deposit(int amount) {
	this->balance += amount;
}

int Account::inquiry() {
	return this->balance;
}

string Account::getOwner() {
	return this->name;
}

int Account::withdraw(int amount) {
	this->balance -= amount;
	return amount;
}

void solution_3() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}