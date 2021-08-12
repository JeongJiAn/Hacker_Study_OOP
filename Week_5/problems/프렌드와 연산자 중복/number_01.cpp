#include"Book.h"
#include"number_01.h"

void solution_01() {
	Book a("รปรแ", 20000, 300), b("นฬทก", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}