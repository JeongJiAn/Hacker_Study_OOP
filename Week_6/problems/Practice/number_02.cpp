#include "number_02.h"

void solution_02() {
	NamedCircle pizza[5];
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
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
	cout << "���� ������ ū ���ڴ� " << pizza[max_index].getName() << endl;
}