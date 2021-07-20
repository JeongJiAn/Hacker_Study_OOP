#pragma once
class Random
{
public:
	Random();

	int next();
	int nextInRange(int, int);

private:
	int num;
};

void solution_5();