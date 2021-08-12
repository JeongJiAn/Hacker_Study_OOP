#include "number_11.h"

Book::Book(string title, int price) {
	this->price = price;
	this->title = new string(title);
}

Book::Book(const Book& rhs) {
	this->price = rhs.price;
	this->title = rhs.title;
}

Book::~Book() {
	delete this->title;
}

void Book::set(string title, int price) {
	this->title = new string(title);
	this->price = price;
}

void Book::show() {
	cout << *(this->title) << ' ' << price << "��" << endl;
}

void solution_11() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set((char*)"��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}