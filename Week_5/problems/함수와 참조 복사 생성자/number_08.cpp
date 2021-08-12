#include"number_08.h"

MyIntStack_08::MyIntStack_08() {
	this->size = 0;
	this->p = new int[this->size];
	this->tos = 0;
}

MyIntStack_08::MyIntStack_08(int size) {
	this->size = size;
	this->p = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->p[i] = 0;
	}
	this->tos = 0;
}

MyIntStack_08::MyIntStack_08(const MyIntStack_08& s) {
	this->size = s.size;
	this->p = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->p[i] = s.p[i];
	}
	this->tos = s.tos;
}

MyIntStack_08::~MyIntStack_08() {
	delete[] this->p;
}

bool MyIntStack_08::push(int n) {
	if (this->tos == 10) {
		return false;
	}
	this->p[this->tos] = n;
	this->tos++;
	return true;
}

bool MyIntStack_08::pop(int& n) {
	if (this->tos == 0) {
		return false;
	}
	n = p[this->tos - 1];
	this->tos--;
	return true;
}

void MyIntStack_08::show() {
	for (int i = 0; i < 10; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;
}

void solution_08() {
	MyIntStack_08 a(10);
	a.push(10);
	a.push(20);
	MyIntStack_08 b = a;
	b.push(30);
	a.show();
	b.show();
	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}