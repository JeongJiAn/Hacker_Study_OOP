#pragma once
#include<iostream>
#include<string>
using namespace std;
class Book
{
	string* title;
	int price;
public:
	Book(string, int);
	Book(const Book&);
	~Book();
	
	void set(string, int);
	void show();
};

void solution_11();