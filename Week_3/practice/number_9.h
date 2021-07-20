#pragma once
class Oval
{
public:
	Oval();
	Oval(int, int);
	~Oval();

	int getWidth();
	int getHeight();
	void set(int, int);
	void show();

private:
	int width, height;
};

void solution_9(); 