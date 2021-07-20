#include <iostream>
#include "number_1.h"
using namespace std;

Tower::Tower(int height) {
	this->height = height;
}

int Tower::getHeight() {
	return this->height;
}

void solution_1() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}