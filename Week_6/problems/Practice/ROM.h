#pragma once
#include "BaseMemory.h"
class ROM : public BaseMemory {
public:
	ROM(int size, char* x, int length) : BaseMemory(size) {
		this->burn(x, length);
	}
	char read(int index) {
		return this->getData(index);
	}
};