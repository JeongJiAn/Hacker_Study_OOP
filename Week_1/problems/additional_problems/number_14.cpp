#include <iostream>
#include <string>
#include "number_14.h"
using namespace std;

void solution_14() {
	char menu[50];
	int cups, sum = 0;
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	while (sum < 20000) {
		cout << "주문>> ";
		cin >> menu >> cups;
		if (strcmp(menu, "에스프레소") == 0) {
			cout << 2000 * cups << "원입니다. 맛있게 드세요" << endl;
			sum += 2000 * cups;
		}
		else if (strcmp(menu, "아메리카노") == 0) {
			cout << 2300 * cups << "원입니다. 맛있게 드세요" << endl;
			sum += 2300 * cups;
		}
		else if (strcmp(menu, "카푸치노") == 0) {
			cout << 2500 * cups << "원입니다. 맛있게 드세요" << endl;
			sum += 2500 * cups;
		}
	}
	cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
}