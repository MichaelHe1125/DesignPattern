#pragma once
#include <string>

class Pizza;

class SimplePizzaFactory
{
public:
	SimplePizzaFactory(void);
	~SimplePizzaFactory(void);
	Pizza* createPizza(const std::string& type);
};

