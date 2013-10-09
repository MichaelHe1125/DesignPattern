#include "PizzaStore.h"
#include <iostream>
#include "Pizza.h"

PizzaStore::PizzaStore(void)
{
}


PizzaStore::~PizzaStore(void)
{
}

Pizza* PizzaStore::orderPizza( std::string type )
{
	Pizza *pizza = createPizza(type);
	std::cout<<"--- Making a " + pizza->getName() + " ---\n";
	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();
	return pizza;
}
