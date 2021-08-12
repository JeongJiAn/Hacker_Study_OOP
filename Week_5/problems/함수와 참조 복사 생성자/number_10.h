#pragma once
#include<iostream>
#include<string>
using namespace std;
class Buffer
{
	string text;
public:
	Buffer(string);
	void add(string);
	void print();
};

Buffer& append(Buffer&, string);
void solution_10();