#include"Statistics.h"
#include"number_10.h"

Statistics& operator>>(Statistics& s, int& a) {
	double avg = 0;
	for (int i = 0; i < s.data_size; i++) {
		avg += s.data[i];
	}
	avg = avg / (double)s.data_size;
	a = avg;
	return s;
}

Statistics& operator<<(Statistics& s, int x) {
	int* new_data = new int[s.data_size + 1];
	for (int i = 0; i < s.data_size; i++) {
		new_data[i] = s.data[i];
	}
	new_data[s.data_size] = x;
	s.data_size++;
	delete[] s.data;
	s.data = new int[s.data_size];
	for (int i = 0; i < s.data_size; i++) {
		s.data[i] = new_data[i];
	}
	delete[] new_data;
	return s;
}

void solution_10() {
	Statistics stat;
	if (!stat) {
		cout << "���� ��� �����Ͱ� �����ϴ�." << endl;
	}
	int x[5];
	cout << "5 ���� ������ �Է�>>";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < 5; i++) {
		stat << x[i];
	}
	stat << 100 << 200;
	~stat;
	int avg;
	stat >> avg;
	cout << "avg = " << avg << endl;
}