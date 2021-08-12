#include"Book.h"
#include"number_02.h"

int operator==(Book& b, int n) {
	return b.price == n;
}

int operator==(Book& b, string t) {
	return b.title == t;
}

int operator==(Book& b, const Book& rhs) {
	return (b.price == rhs.price && b.title == rhs.title && b.pages == rhs.pages);
}

void solution_02() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) {
		cout << "정가 30000원" << endl;
	}
	if (a == "명품 C++") {
		cout << "명품 C++입니다." << endl;
	}
	if (a == b) {
		cout << "두 책이 같은 책입니다." << endl;
	}
}