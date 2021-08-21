#pragma once
#include <iostream>
using namespace std;
template<typename T>
class CTest {
public:
	CTest();
	T testFunc();
protected:
	static T data;
};

void solution();