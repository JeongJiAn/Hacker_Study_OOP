#pragma once
class CoffeeMachine
{
public:
	CoffeeMachine(int, int, int);

	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void show();
	void fill();

private:
	int coffee, water, sugar;
};

void solution_4();