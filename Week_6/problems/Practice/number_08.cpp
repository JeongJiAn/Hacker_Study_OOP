#include "number_08.h"

void solution_08() {
	InkJet ink("Officehet V40", "HP", 5, 10);
	Laser laser("SCX-6x45", "�Ｚ����", 3, 20);
	
	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����." << endl;
	ink.showStatus();
	laser.showStatus();

	char con;
	int selec, pages;
	while (true) {
		cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> selec >> pages;
		if (selec == 1) {
			ink.printInkJet(pages);
		}
		else {
			laser.printLaser(pages);
		}
		ink.showStatus();
		laser.showStatus();
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> con;
		if (con == 'n') {
			break;
		}
	}
}