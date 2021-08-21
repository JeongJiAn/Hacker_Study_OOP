#include "CTest.h"

template<typename T>
CTest<T>::CTest() {

}

template<typename T>
T CTest<T>::testFunc() {
	return data;
}

template<typename T>
T CTest<T>::data = 15;

void solution() {
	CTest<double> a;
	cout << a.testFunc() << endl;
}