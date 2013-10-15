#pragma once
#include "menu.h"
#include <vector>

class MenuItem;
class Iterator;

class PancakeHouseMenu : public Menu
{
public:
	PancakeHouseMenu(void);
	virtual ~PancakeHouseMenu(void);

	void addItem(
		const std::string &name,
		const std::string &description,
		bool vegetarian,
		double price);

	std::vector<MenuItem*>* getMenuItems() const;

	virtual Iterator* createIterator();

private:
	std::vector<MenuItem*> *menuItems;
};

