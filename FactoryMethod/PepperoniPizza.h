#pragma once
#include "pizza.h"
class PepperoniPizza : public Pizza
{
public:

	PepperoniPizza(void)
	{
		name = "Pepperoni Pizza";
		dough = "Crust";
		sauce = "Marinara sauce";
		toppings.push_back("Sliced Pepperoni");
		toppings.push_back("Sliced Onion");
		toppings.push_back("Grated parmesan cheese");
	}

	virtual ~PepperoniPizza(void) { }
};

