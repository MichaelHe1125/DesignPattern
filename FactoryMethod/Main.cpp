#include "Pizza.h"
#include "SimplePizzaFactory.h"
#include "PizzaStore.h"
#include <iostream>


int main()
{
	SimplePizzaFactory *factory = new SimplePizzaFactory();
	PizzaStore *store = new PizzaStore(factory);
	Pizza *pizz = store->orderPizza("cheese");
	std::cout<<"We ordered a "+pizz->getName()<<std::endl;
	delete pizz;

	pizz = store->orderPizza("veggie");
	std::cout<<"We ordered a "+pizz->getName()<<std::endl;
	delete pizz;

	delete store;

	return 1;
}