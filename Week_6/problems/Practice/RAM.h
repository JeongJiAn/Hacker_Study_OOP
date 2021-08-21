#pragma once
#include "BaseMemory.h"
class RAM : public BaseMemory {
public:
	RAM(int size) : BaseMemory(size) { }

	void write(int index, char data) {
		this->putData(index, data);
	}
	char read(int index) {
		return this->getData(index);
	}
};