#pragma once
#include "pizza.h"
class CheesePizza : public Pizza
{
public:

	CheesePizza(void)
	{
		name = "Cheese Pizza";
		dough = "Regular Crust";
		sauce = "Marinara Pizza Sauce";
		toppings.push_back("Fresh Mozzarella");
		toppings.push_back("Parmesan");
	}

	virtual ~CheesePizza(void) { }
};

