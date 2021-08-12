#include "number_10.h"

Buffer::Buffer(string text) {
	this->text = text;
}

void Buffer::add(string next) {
	this->text += next;
}

void Buffer::print() {
	cout << text << endl;
}

Buffer& append(Buffer& a, string text) {
	a.add(text);
	return a;
}

void solution_10() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
}