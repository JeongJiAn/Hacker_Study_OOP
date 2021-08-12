#include"Color.h"
#include"number_05.h"

void solution_05() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia) {
		cout << "보라색 맞음" << endl;
	}
	else {
		cout << "보라색 아님" << endl;
	}
}