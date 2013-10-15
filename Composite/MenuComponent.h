#pragma once

#include <stdexcept>

class Iterator;

class MenuComponent
{
public:

	MenuComponent(void) { }

	virtual ~MenuComponent(void) = 0
	{
	}

	virtual void add(MenuComponent *menuComponent)
	{
		throw std::runtime_error("Unsupported Operation!");
	}

	virtual void remove(MenuComponent *menuComponent)
	{
		throw std::runtime_error("Unsupported Operation!");
	}

	virtual MenuComponent* getChild(int i) {
		throw std::runtime_error("Unsupported Operation!");
	}

	virtual std::string* getName() const
	{
		throw std::runtime_error("Unsupported Operation!");
	}

	virtual std::string* getDescription() const
	{
		throw std::runtime_error("Unsupported Operation!");
	}

	virtual double getPrice() const
	{
		throw std::runtime_error("Unsupported Operation!");
	}

	virtual bool isVegetarian() const
	{
		throw std::runtime_error("Unsupported Operation!");
	}

	virtual Iterator* createIterator()=0;

	virtual void print() const
	{
		throw std::runtime_error("Unsupported Operation!");
	}
};
