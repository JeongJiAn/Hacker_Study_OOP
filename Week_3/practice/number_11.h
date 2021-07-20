#pragma once
class Box
{
public:
	Box(int, int);

	void setFill(char);
	void setSize(int, int);
	void draw();

private:
	int width, height;
	char fill;
};

void solution_11();