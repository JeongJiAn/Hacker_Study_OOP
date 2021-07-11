#include <iostream>
#include "number_11.h"
using namespace std;

//다음 C 코드를 C++ 코드로 수정
/*
#include <stdio.h>

void main(){
	int k, n = 0;
	int sum = 0;
	printf("끝 수를 입력하세요>>");
	scanf_s("%d", &n);
	for (k = 1; k <= n; k++){
		sum += k;
	}
	printf("1에서 %d까지의 합은 %d 입니다. \n", n, sum);
}
*/

void solution_11() {
	int k, n = 0, sum = 0;
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	for (k = 1; k <= n; k++) {
		sum += k;
	}
	cout << "1에서 " << n << "까지의 합은 " << sum << " 입니다." << endl;
}