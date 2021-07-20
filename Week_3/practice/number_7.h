#pragma once
class SelectableRandom
{
public:
	SelectableRandom(int);

	int next();
	int nextInRange(int, int);

private:
	int num, even_or_odd;
};

void solution_7();