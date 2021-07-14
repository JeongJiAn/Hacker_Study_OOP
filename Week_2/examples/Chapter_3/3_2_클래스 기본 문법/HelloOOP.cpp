#include <cstdio>

class USERDATA {
public:
	int age;
	char name[32];

	void print() {
		printf("%d, %s\n", age, name);
	}
};

void main() {
	USERDATA user = { 10, "Ã¶¼ö" };
	user.print();
}