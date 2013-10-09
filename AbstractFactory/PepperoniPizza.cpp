#include "PepperoniPizza.h"
#include <iostream>
#include "PizzaIngredientFactory.h"

PepperoniPizza::PepperoniPizza(PizzaIngredientFactory *ingredientFactory)
{
	this->ingredientFactory=ingredientFactory;
}


PepperoniPizza::~PepperoniPizza(void)
{
	if (ingredientFactory)
	{
		delete ingredientFactory;
		ingredientFactory=nullptr;
	}
}

void PepperoniPizza::prepare()
{
	std::cout<<"Preparing " + name<<std::endl;
	dough = ingredientFactory->createDough();
	sauce = ingredientFactory->createSauce();
	cheese = ingredientFactory->createCheese();
	veggies = ingredientFactory->createVeggies();
	pepperoni = ingredientFactory->createPepperoni();
}
