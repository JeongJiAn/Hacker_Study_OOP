#pragma once
class EvenRandom
{
public:
	EvenRandom();

	int next();
	int nextInRange(int, int);

private:
	int num;
};

void solution_6();