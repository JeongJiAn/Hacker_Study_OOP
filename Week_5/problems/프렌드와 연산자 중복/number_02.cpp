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
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) {
		cout << "���� 30000��" << endl;
	}
	if (a == "��ǰ C++") {
		cout << "��ǰ C++�Դϴ�." << endl;
	}
	if (a == b) {
		cout << "�� å�� ���� å�Դϴ�." << endl;
	}
}