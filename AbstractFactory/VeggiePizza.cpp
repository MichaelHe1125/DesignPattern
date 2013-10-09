#include "VeggiePizza.h"
#include <iostream>
#include "PizzaIngredientFactory.h"

VeggiePizza::VeggiePizza(PizzaIngredientFactory *ingredientFactory)
{
	this->ingredientFactory = ingredientFactory;
}


VeggiePizza::~VeggiePizza(void)
{
	if (ingredientFactory)
	{
		delete ingredientFactory;
		ingredientFactory=nullptr;
	}
}

void VeggiePizza::prepare()
{
	std::cout<<"Preparing " + name<<std::endl;
	dough=ingredientFactory->createDough();
	sauce=ingredientFactory->createSauce();
	cheese=ingredientFactory->createCheese();
	veggies=ingredientFactory->createVeggies();
}
