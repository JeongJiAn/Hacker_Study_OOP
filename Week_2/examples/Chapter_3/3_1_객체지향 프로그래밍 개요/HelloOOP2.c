#include <stdio.h>

typedef struct USERDATA {
	int age;
	char name[32];

} USERDATA;

void printData(USERDATA* pUser) {
	printf("%d, %s\n", pUser->age, pUser->name);
}

void main() {
	USERDATA user = { 20,"ö��" };
	printData(&user);
}