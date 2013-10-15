#include "MenuItem.h"

MenuItem::MenuItem( const std::string &name, 
				    const std::string &description,
				    bool vegetarian, 
				    double price )
					: vegetarian(vegetarian),
					  price(price)
{
	this->name = new std::string(name);
	this->description = new std::string(description);
}


MenuItem::~MenuItem(void)
{
	delete name;
	delete description;
}
