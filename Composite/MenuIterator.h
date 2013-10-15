#pragma once

#include <vector>
#include "Iterator.h"
#include "MenuComponent.h"

class MenuIterator : public Iterator
{
public:

	MenuIterator(std::vector<MenuComponent*> *menuComponents)
		: position(0)
	{
		this->menuComponents = menuComponents;
	}

	virtual ~MenuIterator(void)
	{
				
	}

	virtual bool hasNext()
	{		
		if (position >= menuComponents->size())
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	virtual void* next()
	{
		MenuComponent * compo = menuComponents->at(position);
		position++;
		return dynamic_cast<void*>(compo);
	}

private:
	std::vector<MenuComponent*> *menuComponents;
	std::size_t position;
};

