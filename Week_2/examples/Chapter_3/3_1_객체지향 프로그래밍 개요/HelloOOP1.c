#include <stdio.h>

typedef struct USERDATA {
	int age;
	char name[32];
} USERDATA;

void main() {
	USERDATA user = { 20, "ö��" };
	printf("%d, %s\n", user.age, user.name);
}