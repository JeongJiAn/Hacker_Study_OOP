#include"Book.h"
#include"number_04.h"

int operator<(string t, Book& rhs) {
	return t < rhs.title;
}

void solution_04() {
	Book a("û��", 70000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>>";
	getline(cin, b);
	if (b < a) {
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
	}
}