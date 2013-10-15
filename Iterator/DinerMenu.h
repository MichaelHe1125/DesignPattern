#pragma once
#include <array>
#include "menu.h"

class MenuItem;
class Iterator;
class DinerMenu : public Menu
{
public:

	enum { MAX_ITEMS=6 };

	DinerMenu(void);
	virtual ~DinerMenu(void);

	void addItem(
		const std::string &name,
		const std::string &description,
		bool vegetarian,
		double price);

	std::array<MenuItem*, MAX_ITEMS>* getMenuItems() const;

	Iterator* createIterator();

private:
	int numberOfItems;
	std::array<MenuItem*, MAX_ITEMS> *menuItems;
	
};

