#include "Waitress.h"
#include <iostream>
#include "Iterator.h"
#include "DinerMenu.h"
#include "MenuItem.h"

Waitress::Waitress(Menu *pancakeHouseMenu, Menu *dinerMenu)
	: pancakeHouseMenu(pancakeHouseMenu), dinerMenu(dinerMenu)
{
}

Waitress::~Waitress(void)
{
	delete pancakeHouseMenu;
	delete dinerMenu;
}

void Waitress::printMenu()
{
	Iterator *pancakeIterator = pancakeHouseMenu->createIterator();
	Iterator *dinerIterator = dinerMenu->createIterator();
	
	std::cout<<"MENU\n----\nBREAKFAST\n";
	printMenu(pancakeIterator);
	std::cout<<"\nLUNCH\n";
	printMenu(dinerIterator);

	delete dinerIterator;
	delete pancakeIterator;
}

void Waitress::printMenu( Iterator *iter )
{
	while (iter->hasNext())
	{
		MenuItem *menuItem=static_cast<MenuItem*>(iter->next());
		std::cout<<*(menuItem->getName())+", "
			<<menuItem->getPrice()<<" -- "
			<<*(menuItem->getDescription())<<std::endl;
	}
}