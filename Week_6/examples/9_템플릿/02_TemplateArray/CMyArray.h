#pragma once
#include <iostream>
using namespace std;
template<typename T>
class CMyArray {
	T* data = nullptr;
	int size = 0;
public:
	explicit CMyArray(int nsize) : size(nsize) {
		data = new T[nsize];
	}
	~CMyArray() {
		delete[] data;
	}
	CMyArray(const CMyArray& rhs) {
		data = new T[rhs.size];
		memcpy(data, rhs.data, sizeof(T) * rhs.size);
		size = rhs.size;
	}

	CMyArray& operator=(const CMyArray& rhs) {
		if (this == &rhs) {
			return *this;
		}
		delete data;
		data = new T[rhs.size];
		memcpy(data, rhs.data, sizeof(T) * rhs.size);
		size = rhs.size;
		return *this;
	}

	CMyArray(CMyArray&& rhs) {
		operator = (rhs);
	}

	CMyArray& operator=(const CMyArray&& rhs) {
		data = rhs.data;
		size = rhs.size;
		rhs.data = nullptr;
		rhs.size = 0;
	}

	T& operator[](int index) {
		if (index < 0 || index >= size) {
			cout << "ERROR: 배열의 경계를 벗어난 접근입니다." << endl;
			exit(1);
		}
		return data[index];
	}

	T& operator[](int index) const {
		return operator[](index);
	}
	
	int getSize() {
		return size;
	}
};