#include "CheesePizza.h"
#include <iostream>
#include "PizzaIngredientFactory.h"

CheesePizza::CheesePizza(PizzaIngredientFactory *ingredientFactory)
{
	this->ingredientFactory = ingredientFactory;
}

CheesePizza::~CheesePizza(void)
{
	if (ingredientFactory)
	{
		delete ingredientFactory;
		ingredientFactory=nullptr;
	}
}

void CheesePizza::prepare()
{
	std::cout<<"Preparing " + name<<std::endl;
	dough=ingredientFactory->createDough();
	sauce=ingredientFactory->createSauce();
	cheese=ingredientFactory->createCheese();
}