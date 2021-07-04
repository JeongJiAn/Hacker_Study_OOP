#include <iostream>
using namespace std;

#define ADD(a, b)((a) + (b))

int Add(int a, int b) 
{
	return a + b;
}

inline int AddNew(int a, int b) {
	return a + b;
}

void main() {
	int a, b;
	scanf_s("%d%d", &a, &b);

	printf("ADD(): %d\n", ADD(a, b));
	printf("Add(): %d\n", Add(a, b));
	printf("AddNew(): %d\n", AddNew(a, b));
}