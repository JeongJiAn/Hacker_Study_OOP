#pragma once
#include "Printer.h"
class Laser : public Printer {
	int availableToner;
public:
	Laser(string model, string manufacturer, int availableCount, int availableToner) : Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
	void printLaser(int pages) {
		if (this->print(pages)) {
			this->availableToner -= 1;
		}
		else {
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
		}
	}
	void showStatus() {
		cout << this->getModel() << ", " << this->getManufacturer() << ", 남은 종이 " << this->getAvailableCount() << "장, 남은 토너" << this->availableToner << endl;
	}
};