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
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		}
	}
	void showStatus() {
		cout << this->getModel() << ", " << this->getManufacturer() << ", ���� ���� " << this->getAvailableCount() << "��, ���� ���" << this->availableToner << endl;
	}
};