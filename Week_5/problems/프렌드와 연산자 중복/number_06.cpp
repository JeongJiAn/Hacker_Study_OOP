#include"Matrix.h"
#include"number_06.h"

void solution_06() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show();
	b.show();
	c.show();
	if (a == c) {
		cout << "a and c are the same" << endl;
	}
}