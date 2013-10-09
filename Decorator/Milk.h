#pragma once
#include "condimentdecorator.h"
class Milk : public CondimentDecorator
{
public:

	Milk(Beverage *beverage)
	{
		this->beverage=beverage;
	}

	virtual ~Milk(void)
	{
		delete beverage;
	}

	virtual std::string getDescription()
	{
		return beverage->getDescription() + ", Milk";
	}

	virtual double cost() const
	{
		return .10 + beverage->cost();
	}

private:
	Beverage *beverage;
};

