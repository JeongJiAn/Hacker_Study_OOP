#include <iostream>
#include "number_12.h"
using namespace std;

//���� C �ڵ带 C++ �ڵ�� ����
/*
#include <stdio.h>

void main(){
	int n = 0;
	printf("�� ���� �Է��ϼ���>>");
	scanf_s("%d", &n);
	printf("1���� %d������ ���� %d �Դϴ�. \n", n, sum(1, n));
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
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	cout << "1���� " << n << "������ ���� " << sum(1, n) << " �Դϴ�." << endl;
}