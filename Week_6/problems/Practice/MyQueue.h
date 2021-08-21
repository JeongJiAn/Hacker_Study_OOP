#pragma once
#include "BaseArray.h"
class MyQueue : public BaseArray {
	int leng;
public:
	MyQueue(int capacity) : BaseArray(capacity) {
		this->leng = 0;
	}

	void enqueue(int val) {
		this->put(this->leng, val);
		this->leng++;
	}
	int dequeue() {
		int deq = this->get(0);
		for (int i = 0; i < this->leng - 1; i++) {
			this->put(i, this->get(i + 1));
		}
		this->put(leng - 1, NULL);
		this->leng--;
		return deq;
	}
	int capacity() {
		return this->getCapacity();
	}
	int length() {
		return this->leng;
	}
};