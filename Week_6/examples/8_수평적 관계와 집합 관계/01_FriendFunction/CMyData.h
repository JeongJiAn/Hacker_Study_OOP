#pragma once
#include <iostream>
using namespace std;
class CMyData {
	int data = 0;
public:
	CMyData(int n) : data(n) { }

	int getData() const {
		return data;
	}
	void setData(int n) {
		data = n;
	}
	
	friend void printData(const CMyData&);
};