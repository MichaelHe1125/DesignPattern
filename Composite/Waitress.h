#pragma once

#include <iostream>
#include <exception>
#include "MenuComponent.h"

class Waitress
{
public:

	Waitress(MenuComponent *allMenus)
	{
		this->allMenus = allMenus;
	}

	~Waitress(void)
	{
		delete allMenus;
	}

	void printMenu() const
	{
		allMenus->print();
	}

	void printVegetarianMenu()
	{
		Iterator *iter=allMenus->createIterator();
		std::cout<<"\nVEGETARIAN MENU\n----\n";
		while (iter->hasNext())
		{
			MenuComponent *menuCompo=(MenuComponent*)iter->next();
			try
			{
				if (menuCompo->isVegetarian())
				{
					menuCompo->print();
				}
			}
			catch (std::exception& ex)
			{
				//std::cout<<ex.what()<<std::endl;
			}
		}
		delete iter;
	}
private:
	MenuComponent *allMenus;
};

