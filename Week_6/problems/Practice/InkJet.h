#pragma once
#include "Printer.h"
class InkJet : public Printer {
	int availableInk;
public:
	InkJet(string model, string manufacturer, int availableCount, int availableInk) : Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
	void printInkJet(int pages) {
		if (this->print(pages)) {
			this->availableInk -= pages;
		}
		else {
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		}
	}
	void showStatus() {
		cout << this->getModel() << ", " << this->getManufacturer() << ", 남은 종이 " << this->getAvailableCount() << "장, 남은 잉크" << this->availableInk << endl;
	}
};