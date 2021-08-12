#include"Book.h"
#include"number_04.h"

int operator<(string t, Book& rhs) {
	return t < rhs.title;
}

void solution_04() {
	Book a("청춘", 70000, 300);
	string b;
	cout << "책 이름을 입력하세요>>";
	getline(cin, b);
	if (b < a) {
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
	}
}