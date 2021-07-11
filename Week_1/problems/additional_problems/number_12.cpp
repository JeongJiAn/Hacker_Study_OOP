#include <iostream>
#include "number_12.h"
using namespace std;

//다음 C 코드를 C++ 코드로 수정
/*
#include <stdio.h>

void main(){
	int n = 0;
	printf("끝 수를 입력하세요>>");
	scanf_s("%d", &n);
	printf("1에서 %d까지의 합은 %d 입니다. \n", n, sum(1, n));
}

int sum(int a, int b){
	int k, res = 0;
	for (k = a; j <= b; k++){
		res += k
	}
	return res;
}
*/

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
}

void solution_12() {
	int n;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << " 입니다." << endl;
}