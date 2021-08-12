#include"number_08.h"
#include"Circle.h"

int operator++(Circle& c) {
	return ++c.radius;
}

int operator++(Circle& c, int) {
	int back_up = c.radius;
	c.radius++;
	return back_up;
}

void solution_08() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}