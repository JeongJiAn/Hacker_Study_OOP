#include"Stack.h"
#include"number_11.h"

Stack& operator<<(Stack& s, int x) {
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

void operator>>(Stack& s, int& x) {
	int* new_data = new int[s.data_size - 1];
	x = s.data[s.data_size - 1];
	for (int i = 0; i < s.data_size - 1; i++) {
		new_data[i] = s.data[i];
	}
	s.data_size--;
	delete[] s.data;
	s.data = new int[s.data_size];
	for (int i = 0; i < s.data_size; i++) {
		s.data[i] = new_data[i];
	}
	delete[] new_data;
}

void solution_11() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) {
			break;
		}
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}