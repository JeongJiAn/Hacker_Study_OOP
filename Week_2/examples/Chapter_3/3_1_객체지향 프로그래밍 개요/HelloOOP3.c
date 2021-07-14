#include <stdio.h>

typedef struct USERDATA {
	int age;
	char name[32];
	void(*Print)(struct USERDATA*);
} USERDATA;

void printData(USERDATA* pUser) {
	printf("%d, %s\n", pUser->age, pUser->name);
}

void main() {
	USERDATA user = { 20, "Ã¶¼ö", printData };
	user.Print(&user);
}