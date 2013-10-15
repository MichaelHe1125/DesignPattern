#include "PancakeHouseMenu.h"
#include "MenuItem.h"
#include "PancakeHouseMenuIterator.h"


PancakeHouseMenu::PancakeHouseMenu(void)
{
	menuItems = new std::vector<MenuItem*>;

	addItem("K&B's Pancake Breakfast", 
		"Pancakes with scrambled eggs, and toast", 
		true,
		2.99);

	addItem("Regular Pancake Breakfast", 
		"Pancakes with fried eggs, sausage", 
		false,
		2.99);

	addItem("Blueberry Pancakes",
		"Pancakes made with fresh blueberries",
		true,
		3.49);

	addItem("Waffles",
		"Waffles, with your choice of blueberries or strawberries",
		true,
		3.59);
}


PancakeHouseMenu::~PancakeHouseMenu(void)
{
}

Iterator* PancakeHouseMenu::createIterator()
{
	return new PancakeHouseMenuIterator(menuItems);
}

void PancakeHouseMenu::addItem( const std::string &name, const std::string &description, bool vegetarian, double price )
{
	MenuItem *menuItem=new MenuItem(name, description, vegetarian, price);
	menuItems->push_back(menuItem);
}

std::vector<MenuItem*>* PancakeHouseMenu::getMenuItems() const
{
	return menuItems;
}
