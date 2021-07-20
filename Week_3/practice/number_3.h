#pragma once
#include <iostream>
class Account
{
public:
	Account(std::string, int, int);

	void deposit(int);
	int withdraw(int);
	std::string getOwner();
	int inquiry();

private:
	int number, balance;
	std::string name;
};

void solution_3();