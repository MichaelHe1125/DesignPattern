#include "DinerMenu.h"
#include "MenuItem.h"
#include "DinerMenuIterator.h"
#include <iostream>

DinerMenu::DinerMenu(void)
	: numberOfItems(0)
{
	menuItems = new std::array<MenuItem*, MAX_ITEMS>;	
	addItem("Vegetarian BLT",
		"(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
	addItem("BLT",
		"Bacon with lettuce & tomato on whole wheat", false, 2.99);
	addItem("Soup of the day",
		"Soup of the day, with a side of potato salad", false, 3.29);
	addItem("Hotdog",
		"A hot dog, with saurkraut, relish, onions, topped with cheese",
		false, 3.05);
	addItem("Steamed Veggies and Brown Rice",
		"Steamed vegetables over brown rice", true, 3.99);
	addItem("Pasta",
		"Spaghetti with Marinara Sauce, and a slice of sourdough bread",
		true, 3.89);
}


DinerMenu::~DinerMenu(void)
{
}

void DinerMenu::addItem( const std::string &name, 
						const std::string &description,
						bool vegetarian, double price )
{
	MenuItem *menuItem=new MenuItem(name, description, vegetarian, price);
	if (numberOfItems >= MAX_ITEMS)
	{
		std::cout<<"Sorry, menu is full!  Can't add item to menu\n";
	} 
	else
	{
		menuItems->at(numberOfItems) = menuItem;
		numberOfItems++;
	}
}

std::array<MenuItem*, DinerMenu::MAX_ITEMS>* DinerMenu::getMenuItems() const
{
	return menuItems;
}

Iterator* DinerMenu::createIterator()
{
	return new DinerMenuIterator(menuItems);
}
