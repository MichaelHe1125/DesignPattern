#include "PizzaStore.h"
#include "SimplePizzaFactory.h"
#include "Pizza.h"

PizzaStore::PizzaStore(SimplePizzaFactory *factory)
{
	this->factory = factory;
}


PizzaStore::~PizzaStore(void)
{
	if (factory)
	{
		delete factory;
		factory=nullptr;
	}
}

Pizza* PizzaStore::orderPizza( const std::string &type )
{
	Pizza *pizza=nullptr;
	
	pizza=factory->createPizza(type);

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}
