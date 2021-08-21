#include "number_02.h"

void solution_02() {
	NamedCircle pizza[5];
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	string name;
	int radius;
	for (int i = 0; i < 5; i++) {
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}
	double max = pizza[0].getArea();
	int max_index = 0;
	for (int i = 1; i < 5; i++) {
		if (max < pizza[i].getArea()) {
			max = pizza[i].getArea();
			max_index = i;
		}
	}
	cout << "가장 면적이 큰 피자는 " << pizza[max_index].getName() << endl;
}