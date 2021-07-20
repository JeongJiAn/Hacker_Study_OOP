#pragma once
class Ram
{
public:
	Ram();
	~Ram();
	
	char read(int);
	void write(int, char);

private:
	char mem[100 * 1024];
	int size;
};

void solution_12();