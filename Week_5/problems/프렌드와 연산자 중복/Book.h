#pragma once
#include<iostream>
#include<string>
using namespace std;
class Book
{
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}

	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}

	Book& operator+=(int n) {
		this->price += n;
		return *this;
	}

	Book& operator-=(int n) {
		this->price -= n;
		return *this;
	}

	/*
	int operator==(int n) {
		return this->price == n;
	}

	int operator==(string t) {
		return this->title == t;
	}

	int operator==(const Book& rhs) {
		return (this->title == rhs.title && this->price == rhs.price && this->pages == rhs.pages);
	}
	*/

	friend int operator==(Book&, int);
	friend int operator==(Book&, string);
	friend int operator==(Book&, const Book&);

	int operator!() {
		return !(this->price);
	}

	friend int operator<(string, Book&);

	string getTitle() {
		return this->title;
	}
};