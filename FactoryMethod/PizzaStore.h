#pragma once
#include <string>

class Pizza;
class SimplePizzaFactory;

class PizzaStore
{
public:
	PizzaStore(SimplePizzaFactory *factory);
	~PizzaStore(void);
	Pizza* orderPizza(const std::string &type);
private:
	SimplePizzaFactory *factory;
};

