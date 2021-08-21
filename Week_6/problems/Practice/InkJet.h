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
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		}
	}
	void showStatus() {
		cout << this->getModel() << ", " << this->getManufacturer() << ", ���� ���� " << this->getAvailableCount() << "��, ���� ��ũ" << this->availableInk << endl;
	}
};