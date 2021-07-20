#pragma once
#include <string>
using namespace std;
class Date
{
public:
	Date(int, int, int);
	Date(string str);

	void show();
	int getYear();
	int getMonth();
	int getDay();

private:
	int year, month, day;
};

void solution_2();