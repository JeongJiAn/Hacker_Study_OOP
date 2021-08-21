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

	operator T() {
		return data;
	}
	void setData(T param) {
		data = param;
	}
};