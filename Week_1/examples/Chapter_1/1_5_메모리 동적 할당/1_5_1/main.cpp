#include <iostream>

int main() {
	int* p_data = new int;

	int* p_new_data = new int(10);

	*p_data = 5;
	std::cout << *p_data << std::endl;
	std::cout << *p_new_data << std::endl;

	delete p_data;
	delete p_new_data;
	return 0;
}