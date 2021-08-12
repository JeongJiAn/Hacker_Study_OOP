#pragma once
#include<iostream>
using namespace std;
class Matrix
{
	int m[2][2];
public:
	Matrix() {
		**(this->m) = { 0 };
	}
	Matrix(int a, int b, int c, int d) {
		this->m[0][0] = a;
		this->m[0][1] = b;
		this->m[1][0] = c;
		this->m[1][1] = d;
	}

	Matrix& operator+(const Matrix rhs) {
		Matrix result;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				result.m[i][j] = this->m[i][j] + rhs.m[i][j];
			}
		}
		return result;
	}

	Matrix& operator+=(const Matrix rhs) {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				this->m[i][j] += rhs.m[i][j];
			}
		}
		return *this;
	}

	int operator==(const Matrix& rhs) {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				if (this->m[i][j] != rhs.m[i][j]) {
					return false;
				}
			}
		}
		return true;
	}

	Matrix& operator>>(int* arr) {
		int a = 0;
		for (int i = 0; i < 4; i++) {
			if (i == 2) {
				a++;
			}
			arr[i] = this->m[a][i % 2];
		}
		return *this;
	}

	Matrix& operator<<(int arr[]) {
		int a = 0;
		for (int i = 0; i < 4; i++) {
			if (i == 2) {
				a++;
			}
			this->m[a][i % 2] = arr[i];
		}
		return *this;
	}

	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				cout << m[i][j] << ' ';
			}
		}
		cout << "}" << endl;
	}
};

