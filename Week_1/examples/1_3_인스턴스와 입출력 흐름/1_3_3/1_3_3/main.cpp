#include <iostream>
#include <string>
#include <cstdio>

int main() {
	int n_age;
	std::cout << "���̸� �Է��ϼ���: " << std::endl;
	std::cin >> n_age;

	char szJob[32];
	std::cout << "������ �Է��ϼ���: " << std::endl;
	std::cin >> szJob;

	std::string str_name;
	std::cout << "�̸��� �Է��ϼ���: " << std::endl;
	std::cin >> str_name;

	std::cout << "����� �̸��� " << str_name << "�̰�, " << "���̴� " << n_age << "���̸�, " << "������ " << szJob << "�Դϴ�." << std::endl;
	return 0;
}