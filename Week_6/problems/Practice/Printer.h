#pragma once
#include <iostream>
using namespace std;
class Printer {
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
protected:
	Printer(string model, string manufacturer, int availableCount) {
		this->model = model;
		this->manufacturer = manufacturer;
		this->printedCount = 0;
		this->availableCount = availableCount;
	}
	bool print(int pages) {
		if (pages > this->availableCount) {
			return false;
		}
		cout << "프린트 하였습니다." << endl;
		this->availableCount -= pages;
		this->printedCount += pages;
		return true;
	}
	string getModel() {
		return this->model;
	}
	string getManufacturer() {
		return this->manufacturer;
	}
	int getPrintedCount() {
		return this->printedCount;
	}
	int getAvailableCount() {
		return this->availableCount;
	}
};