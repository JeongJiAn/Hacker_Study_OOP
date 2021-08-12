#include"number_03.h"
#include<string>

void combine(string a, string b, string& c) {
	c.append(a);
	c.append(" ");
	c.append(b);
}

void solution_03() {
	string text1("I love you"), text2("very much");
	string text3;
	combine(text1, text2, text3);
	cout << text3;
}