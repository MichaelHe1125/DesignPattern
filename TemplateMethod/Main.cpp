#include "Tea.h"
#include "Coffee.h"
#include "TeaWithHook.h"
#include "CoffeeWithHook.h"

int main()
{
	Tea *tea = new Tea();
	Coffee *coffee = new Coffee();

	std::cout<<"\nMaking tea...\n";
	tea->prepareRecipe();

	std::cout<<"\nMaking coffee...\n";
	coffee->prepareRecipe();

	delete tea;
	delete coffee;

	TeaWithHook *teaHook = new TeaWithHook();
	CoffeeWithHook *coffeeHook = new CoffeeWithHook();
	
	std::cout<<"\nMaking tea...\n";
	teaHook->prepareRecipe();

	std::cout<<"\nMaking coffee...\n";
	coffeeHook->prepareRecipe();

	delete teaHook;
	delete coffeeHook;

	std::cin.get();
	return 0;
}