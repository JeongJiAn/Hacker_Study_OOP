#include <iostream>
using namespace std;

namespace TEST
{
	int g_n_data = 100;
	namespace DEV
	{
		int g_n_data = 200;
		namespace WIN
		{
			int g_n_data = 300;
		}
	}
}

void main() {
	cout << TEST::g_n_data << endl;
	cout << TEST::DEV::g_n_data << endl;
	cout << TEST::DEV::WIN::g_n_data << endl;
}