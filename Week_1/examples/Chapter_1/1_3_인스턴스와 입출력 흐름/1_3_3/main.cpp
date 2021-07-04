#include <iostream>
#include <string>
#include <cstdio>

int main() {
	int n_age;
	std::cout << "나이를 입력하세요: " << std::endl;
	std::cin >> n_age;

	char szJob[32];
	std::cout << "직업을 입력하세요: " << std::endl;
	std::cin >> szJob;

	std::string str_name;
	std::cout << "이름을 입력하세요: " << std::endl;
	std::cin >> str_name;

	std::cout << "당신의 이름은 " << str_name << "이고, " << "나이는 " << n_age << "살이며, " << "직업은 " << szJob << "입니다." << std::endl;
	return 0;
}