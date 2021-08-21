#include "number_08.h"

void solution_08() {
	InkJet ink("Officehet V40", "HP", 5, 10);
	Laser laser("SCX-6x45", "삼성전자", 3, 20);
	
	cout << "현재 작동중인 2 대의 프린터는 아래와 같다." << endl;
	ink.showStatus();
	laser.showStatus();

	char con;
	int selec, pages;
	while (true) {
		cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> selec >> pages;
		if (selec == 1) {
			ink.printInkJet(pages);
		}
		else {
			laser.printLaser(pages);
		}
		ink.showStatus();
		laser.showStatus();
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> con;
		if (con == 'n') {
			break;
		}
	}
}