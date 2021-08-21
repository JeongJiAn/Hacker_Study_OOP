#pragma once
#include "BaseArray.h"
class MyStack : public BaseArray {
	int leng;
public:
	MyStack(int capacity) : BaseArray(capacity) {
		this->leng = 0;
	}

	void push(int val) {
		this->put(this->leng, val);
		this->leng++;
	}
	int pop() {
		int p = this->get(leng - 1);
		this->put(leng - 1, NULL);
		this->leng--;
		return p;
	}
	int capacity() {
		return this->getCapacity();
	}
	int length() {
		return this->leng;
	}
};