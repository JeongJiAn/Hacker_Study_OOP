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
	cout << *(this->title) << ' ' << price << "원" << endl;
}

void solution_11() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set((char*)"명품자바", 12000);
	cpp.show();
	java.show();
}