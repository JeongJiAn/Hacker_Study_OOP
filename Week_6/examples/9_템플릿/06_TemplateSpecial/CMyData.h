#pragma once
#include <iostream>
using namespace std;

template<typename T>
class CMyData {
	T data;
public:
	CMyData(T param) : data(param) { }
	T getData() const {
		return data;
	}
	void setData(T param) {
		data = param;
	}
};

template< >
class CMyData<char*> {
	char* data;
public:
	CMyData(char* param) {
		int len = strlen(param);
		data = new char[len + 1];
	}

	~CMyData() {
		delete[] data;
	}
	char* getData() const {
		return data;
	}
};