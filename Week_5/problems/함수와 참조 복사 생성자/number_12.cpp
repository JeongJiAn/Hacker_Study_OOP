#include "number_12.h"

Dept::Dept(int size) {
	this->size = size;
	this->scores = new int[this->size];
	*(this->scores) = { 0 };
}

Dept::~Dept() {
	delete[] this->scores;
}

int Dept::getSize() {
	return this->size;
}

void Dept::read() {
	cout << "10개 점수 입력>>";
	for (int i = 0; i < this->size; i++) {
		int x;
		cin >> x;
		this->scores[i] = x;
	}
}

bool Dept::isOver60(int index) {
	if (this->scores[index] > 60) {
		return true;
	}
	return false;
}

int countPass(Dept& rhs) {
	int count = 0;
	for (int i = 0; i < rhs.getSize(); i++) {
		if (rhs.isOver60(i)) {
			count++;
		}
	}
	return count;
}

void solution_12() {
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60점 이상은 " << n << "명" << endl;
}