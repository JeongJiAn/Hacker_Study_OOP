#include <iostream>
using namespace std;

class CMyData {
	int m_n_data;
public:
	int getData() {
		return m_n_data;
	}
	void setData(int nParam){
		m_n_data = nParam;
	}
};

void main() {
	CMyData data;
	data.setData(10);
	cout << data.getData() << endl;
}