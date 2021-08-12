#include"Circle.h"
#include"number_09.h"

Circle& operator+(int a, Circle& c) {
	Circle result(0);
	result.radius = a + c.radius;
	return result;
}

void solution_09() {
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}