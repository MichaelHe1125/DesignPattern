#pragma once
#include <iostream>
#include <string>
#include "menucomponent.h"
#include "NullIterator.h"

class MenuItem : public MenuComponent
{
public:

	MenuItem(
		const std::string &name,
		const std::string &description,
		bool vegetarian,
		double price)
		: vegetarian(vegetarian), price(price)
	{
		this->name = new std::string(name);
		this->description = new std::string(description);
	}

	~MenuItem(void)
	{
		delete name;
		delete description;
	}

	std::string* getName() const
	{
		return name;
	}

	std::string* getDescription() const
	{
		return description;
	}

	double getPrice() const
	{
		return price;
	}

	bool isVegetarian() const
	{
		return vegetarian;
	}

	void print() const
	{
		std::cout<<"  "+*getName();
		if(isVegetarian())
			std::cout<<"(v)";
		std::cout<<", "<<getPrice()<<std::endl;
		std::cout<<"     -- "<<*getDescription()<<std::endl;
	}

	Iterator* createIterator()
	{
		return new NullIterator();
	}

private:
	std::string *name;
	std::string *description;
	bool vegetarian;
	double price;
};

