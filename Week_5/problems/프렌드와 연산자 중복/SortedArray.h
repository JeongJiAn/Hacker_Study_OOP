#pragma once
#include<iostream>
using namespace std;
class SortedArray
{
	int size;
	int* p;
	void sort() {
		int temp = 0;
		for (int i = 0; i < this->size; i++) {
			for (int j = i; j < this->size - 1; j++) {
				if (this->p[j] > this->p[j + 1]) {
					temp = this->p[j];
					this->p[j] = this->p[j + 1];
					this->p[j + 1] = temp;
				}
			}
		}
	}
public:
	SortedArray() {
		this->size = 0;
		this->p = nullptr;
	}
	SortedArray(SortedArray& src) {
		this->size = src.size;
		this->p = new int[this->size];
		for (int i = 0; i < this->size; i++) {
			this->p[i] = src.p[i];
		}
	}
	SortedArray(int p[], int size) {
		this->size = size;
		this->p = new int[this->size];
		for (int i = 0; i < this->size; i++) {
			this->p[i] = p[i];
		}
		this->sort();
	}
	~SortedArray() {
		if (this->p != nullptr) {
			delete[] this->p;
		}
	}
	SortedArray operator+(const SortedArray& op2) {
		int length = this->size + op2.size;
		int* arr = new int[length];
		for (int i = 0; i < length; i++) {
			if (i >= this->size) {
				arr[i] = op2.p[i - this->size];
				continue;
			}
			arr[i] = this->p[i];
		}
		SortedArray result(arr, length);
		delete[] arr;
		return result;
	}
	SortedArray& operator=(const SortedArray& op2) {
		delete[] this->p;
		this->size = op2.size;
		this->p = new int[this->size];
		for (int i = 0; i < this->size; i++) {
			this->p[i] = op2.p[i];
		}
		return *this;
	}
	void show() {
		cout << "배열 출력 : ";
		for (int i = 0; i < this->size; i++) {
			cout << this->p[i] << ' ';
		}
		cout << endl;
	}
};

