#pragma once
#include <iostream>
using namespace std;
template<typename T = int, int nSize = 3>
class CMyArray {
	T* data = nullptr;
public:
	CMyArray() {
		data = new T[nSize];
	}
	~CMyArray() {
		delete[] data;
	}

	T& operator[](int index) {
		if (index < 0 || index >= nSize) {
			cout << "ERROR" << endl;
			exit(1);
		}
		return data[index];
	}

	T& operator[](int index) const {
		return operator[](index);
	}

	int getSize() {
		return nSize;
	}
};