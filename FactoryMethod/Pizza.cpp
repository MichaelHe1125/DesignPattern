#include "Pizza.h"


Pizza::Pizza(void)
{
}


Pizza::~Pizza(void)
{
}

std::string Pizza::toString()
{
	std::string display;
	display.append("---- " + name + " ----\n");
	display.append(dough + "\n");
	display.append(sauce + "\n");
	for (int i = 0; i < toppings.size(); i++) {
		display.append(toppings.at(i) + "\n");
	}
	return display;
}
