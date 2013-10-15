#pragma once

#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include "MenuComponent.h"
#include "CompositeIterator.h"
#include "MenuIterator.h"

class Menu : public MenuComponent
{
public:

	Menu(const std::string &name, const std::string &desc)
	{
		this->name = new std::string(name);
		this->description = new std::string(desc);
		this->menuComponents = new std::vector<MenuComponent*>;
		this->menuComponents->reserve(10);
	}

	~Menu(void)
	{
		delete name;
		delete description;		

		for (auto item: *menuComponents)
		{
			delete item;
		}

		delete menuComponents;		
		menuComponents=nullptr;
	}

	void add( MenuComponent *menuComponent )
	{
		menuComponents->push_back(menuComponent);
	}

	void remove( MenuComponent *menuComponent )
	{
		menuComponents->erase(
			std::remove(menuComponents->begin(), menuComponents->end(), menuComponent));
		delete menuComponent;
	}

	MenuComponent* getChild( int i )
	{
		if (i<0 || i>menuComponents->size())
		{
			return nullptr;
		}
		return menuComponents->at(i);
	}

	std::string* getName() const
	{
		return name;
	}

	std::string* getDescription() const
	{
		return description;
	}

	Iterator* createIterator()
	{
		return new CompositeIterator(new MenuIterator(menuComponents));
	}

	void print() const
	{
		std::cout<<"\n"+*getName();
		std::cout<<", "+*getDescription()<<std::endl;
		std::cout<<"---------------------"<<std::endl;

		for (const auto item: *menuComponents)
		{
			item->print();
		}
	}

private:
	std::string *name;
	std::string *description;
	std::vector<MenuComponent*> *menuComponents;
};

