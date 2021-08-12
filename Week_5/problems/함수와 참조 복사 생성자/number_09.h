#pragma once
#include<iostream>
using namespace std;
class Accumulator
{
	int value;
public:
	Accumulator(int);
	Accumulator& add(int);
	int get();
};

void solution_09();