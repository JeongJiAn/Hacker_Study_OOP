#include <iostream>
#include "number_11.h"
using namespace std;

//���� C �ڵ带 C++ �ڵ�� ����
/*
#include <stdio.h>

void main(){
	int k, n = 0;
	int sum = 0;
	printf("�� ���� �Է��ϼ���>>");
	scanf_s("%d", &n);
	for (k = 1; k <= n; k++){
		sum += k;
	}
	printf("1���� %d������ ���� %d �Դϴ�. \n", n, sum);
}
*/

void solution_11() {
	int k, n = 0, sum = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	for (k = 1; k <= n; k++) {
		sum += k;
	}
	cout << "1���� " << n << "������ ���� " << sum << " �Դϴ�." << endl;
}