#pragma once
#include "CMyData.h"

template<typename T>
class CMyDataEx : public CMyData<T> {
public:
	T getData() {
		return this->data;
	}
	void setData(T param) {
		this->data = param;
	}
};