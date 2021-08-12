#include"number_06.h"

char& find(char a[], char c, bool& success) {
	int i = 0;
	while (true) {
		if (a[i] == '\n') {
			success = false;
			return a[i];
		}
		if (a[i] == c) {
			success = true;
			return a[i];
		}
		i++;
	}
}

void solution_06() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M을 발견할 수 없다" << endl;
	}
	else {
		loc = 'm';
		cout << s << endl;
	}
}