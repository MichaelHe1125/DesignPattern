#include "ClamPizza.h"
#include <iostream>
#include "PizzaIngredientFactory.h"

ClamPizza::ClamPizza(PizzaIngredientFactory *ingredientFactory)
{
	this->ingredientFactory=ingredientFactory;
}


ClamPizza::~ClamPizza(void)
{
	if (ingredientFactory)
	{
		delete ingredientFactory;
		ingredientFactory=nullptr;
	}
}

void ClamPizza::prepare()
{
	std::cout<<"Preparing " + name<<std::endl;
	dough = ingredientFactory->createDough();
	sauce = ingredientFactory->createSauce();
	cheese = ingredientFactory->createCheese();
	clam = ingredientFactory->createClam();
}
