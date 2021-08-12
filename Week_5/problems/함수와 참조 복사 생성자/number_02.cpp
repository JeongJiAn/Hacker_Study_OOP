#include"number_02.h"
#include<iostream>
using namespace std;

void half(double& n) {
	n /= 2;
}

void solution_02() {
	double n = 20;
	half(n);
	cout << n << endl;
}