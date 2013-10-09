#include "ChicagoPizzaIngredientFactory.h"
#include "ThickCrustDough.h"
#include "PlumTomatoSauce.h"
#include "MozzarellaCheese.h"
#include "SlicedPepperoni.h"
#include "FrozenClams.h"
#include "BlackOlives.h"
#include "Spinach.h"
#include "Eggplant.h"

ChicagoPizzaIngredientFactory::ChicagoPizzaIngredientFactory(void)
{
}


ChicagoPizzaIngredientFactory::~ChicagoPizzaIngredientFactory(void)
{
}

Dough* ChicagoPizzaIngredientFactory::createDough()
{
	return new ThickCrustDough();
}

Sauce* ChicagoPizzaIngredientFactory::createSauce()
{
	return new PlumTomatoSauce();
}

Cheese* ChicagoPizzaIngredientFactory::createCheese()
{
	return new MozzarellaCheese();
}

Pepperoni* ChicagoPizzaIngredientFactory::createPepperoni()
{
	return new SlicedPepperoni();
}

Clams* ChicagoPizzaIngredientFactory::createClam()
{
	return new FrozenClams();
}

std::vector<Veggies*>* ChicagoPizzaIngredientFactory::createVeggies()
{
	std::vector<Veggies*>* veggies=new std::vector<Veggies*>();
	veggies->push_back(new BlackOlives());
	veggies->push_back(new Spinach());
	veggies->push_back(new Eggplant());

	return veggies;
}
