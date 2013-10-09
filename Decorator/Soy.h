#pragma once
#include "condimentdecorator.h"
class Soy : public CondimentDecorator
{
public:

	Soy(Beverage *beverage)
	{
		this->beverage = beverage;
	}

	virtual ~Soy(void)
	{
		delete beverage;
	}

	virtual std::string getDescription()
	{
		return beverage->getDescription() + ", Soy";
	}

	virtual double cost() const
	{
		return .15 + beverage->cost();
	}

private:
	Beverage *beverage;
};

