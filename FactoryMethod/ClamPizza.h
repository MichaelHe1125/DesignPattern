#pragma once
#include "pizza.h"
class ClamPizza : public Pizza
{
public:

	ClamPizza(void)
	{
		name = "Clam Pizza";
		dough = "Thin crust";
		sauce = "White garlic sauce";
		toppings.push_back("Clams");
		toppings.push_back("Grated parmesan cheese");
	}

	virtual ~ClamPizza(void) { }
};

