#include <iostream>
using namespace std;

template<typename T>
T Add(T a, T b) {
	return a + b;
}

template< >
char* Add(char* left, char* right) {
	int left_len = strlen(left);
	int right_len = strlen(right);
	char* result = new char[left_len + right_len] + 1;

	strcpy_s(result, left_len + 1, left);
	strcpy_s(result + left_len, right_len + 1, right);

	return result;
}

void main() {
	int result = Add<int>(3, 4);
	cout << result << endl;

	char* c_result = Add<char*>((char*)"Hello", (char*)"World");
	cout << c_result << endl;
}