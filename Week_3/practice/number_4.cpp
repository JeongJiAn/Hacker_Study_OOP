#include <iostream>
#include "number_4.h"
using namespace std;

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar) {
	this->coffee = coffee;
	this->water = water;
	this->sugar = sugar;
}

void CoffeeMachine::drinkEspresso() {
	this->coffee -= 1;
	this->water -= 1;
}

void CoffeeMachine::drinkAmericano() {
	this->coffee -= 1;
	this->water -= 2;
}

void CoffeeMachine::drinkSugarCoffee() {
	this->coffee -= 1;
	this->water -= 2;
	this->sugar -= 1;
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태, 커피:" << this->coffee << " 물: " << this->water << " 설탕: " << this->sugar << endl;
}

void CoffeeMachine::fill() {
	this->coffee = 10;
	this->water = 10;
	this->sugar = 10;
}

void solution_4() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}