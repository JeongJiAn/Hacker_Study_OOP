#include"Matrix.h"
#include"number_07.h"

void solution_07() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1, 2, 3, 4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) {
		cout << x[i] << ' ';
	}
	cout << endl;
	b.show();
}